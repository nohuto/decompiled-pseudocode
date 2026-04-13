/*
 * XREFs of sub_180021820 @ 0x180021820
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AB3C @ 0x18000AB3C (sub_18000AB3C.c)
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180021A18 (--1_Lockit@std@@QEAA@XZ.c)
 */

void sub_180021820()
{
  char v0; // [rsp+30h] [rbp+8h] BYREF

  sub_180021988(&v0, 0LL);
  sub_18000AB3C(qword_18003A380);
  qword_18003A380[0] = 0LL;
  std::_Lockit::~_Lockit((std::_Lockit *)&v0);
}
