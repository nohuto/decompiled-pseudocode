/*
 * XREFs of sub_180004358 @ 0x180004358
 * Callers:
 *     DwmpTerminateSessionProcess @ 0x1800030E0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     sub_1800047D0 @ 0x1800047D0 (sub_1800047D0.c)
 */

__int64 __fastcall sub_180004358(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 536870913;
  return sub_1800047D0(a1, &v5, a3, &v4);
}
