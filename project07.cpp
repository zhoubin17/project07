/*
练习3.22

要求：
修改之前的那个输出text第一段的程序，首先把text的第一段全部改写成大写形式，然后再输出它

完成时间：2019.01.02
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> text;
    string s;
    //利用getline获取一段话，直接回车产生一个空格，表示段落结束
    while (getline(cin, s))
        text.push_back(s);
    //利用迭代器遍历全部字符串
    for (auto it = text.begin(); it != text.end() && !it -> empty(); it++) // it -> empty() <==> (*it).empty()
    {
        //利用迭代器遍历当前字符串
        for (auto it2 = it -> begin(); it2 != it -> end(); it2++)
            *it2 = toupper(*it2);
        cout << *it << endl;
    }
    return 0;
}
