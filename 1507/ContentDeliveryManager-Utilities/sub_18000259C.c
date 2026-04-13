/*
 * XREFs of sub_18000259C @ 0x18000259C
 * Callers:
 *     sub_180002F48 @ 0x180002F48 (sub_180002F48.c)
 *     sub_18000DF5C @ 0x18000DF5C (sub_18000DF5C.c)
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_18000255C @ 0x18000255C (sub_18000255C.c)
 */

void sub_18000259C(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  int v5; // [rsp+20h] [rbp-38h]
  int v6; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  sub_18000255C(a1, a2, a3, a4, v5, retaddr, v6, a4, a5, va);
}
