/*
 * XREFs of ExIsAppLicensed @ 0x1406685C8
 * Callers:
 *     <none>
 * Callees:
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 */

__int64 __fastcall ExIsAppLicensed(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+48h] [rbp+10h] BYREF
  int v3; // [rsp+50h] [rbp+18h] BYREF
  int v4; // [rsp+54h] [rbp+1Ch]

  v3 = 0;
  v2 = 0;
  v4 = 0;
  result = sub_140517000(0, a1, 0, 8u, &v3, &v2);
  if ( (int)result >= 0 )
    return v3 != 0 ? 0xC0000272 : 0;
  return result;
}
