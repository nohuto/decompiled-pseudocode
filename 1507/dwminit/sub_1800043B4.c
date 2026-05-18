/*
 * XREFs of sub_1800043B4 @ 0x1800043B4
 * Callers:
 *     DwmpNotifyUserLogoff @ 0x180003080 (DwmpNotifyUserLogoff.c)
 * Callees:
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 */

__int64 __fastcall sub_1800043B4(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 536870915;
  return sub_1800047D0(a1, &v5, a3, &v4);
}
