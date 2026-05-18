/*
 * XREFs of sub_1800057F0 @ 0x1800057F0
 * Callers:
 *     sub_180005A40 @ 0x180005A40 (sub_180005A40.c)
 * Callees:
 *     sub_180003DD8 @ 0x180003DD8 (sub_180003DD8.c)
 *     sub_180005A7C @ 0x180005A7C (sub_180005A7C.c)
 */

__int64 *sub_1800057F0()
{
  int v0; // edx
  int v1; // r8d
  _QWORD *v2; // r9
  __int64 v3; // r9

  qword_18000EFB0 = 0LL;
  v2 = (_QWORD *)sub_180003DD8(96LL);
  if ( v2 )
  {
    v2[1] = 0LL;
    v2[2] = 0LL;
    *v2 = &dword_18000C020;
    sub_180005A7C((_DWORD)v2 + 24, v0, v1, (_DWORD)v2, 1074790400);
  }
  else
  {
    v3 = 0LL;
  }
  qword_18000EFB0 = v3;
  return &qword_18000EFB0;
}
