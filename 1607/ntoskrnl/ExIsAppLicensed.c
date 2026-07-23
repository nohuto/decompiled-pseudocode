/*
 * XREFs of ExIsAppLicensed @ 0x1406ADF2C
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406AE02C @ 0x1406AE02C (sub_1406AE02C.c)
 */

__int64 __fastcall ExIsAppLicensed(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF
  int v3; // [rsp+50h] [rbp+18h] BYREF
  int v4; // [rsp+54h] [rbp+1Ch]

  v3 = 0;
  v4 = 0;
  result = sub_1406AE02C(0, a1, 0, 8, &v3, (__int64)&v2);
  if ( (int)result >= 0 )
    return v3 != 0 ? 0xC0000272 : 0;
  return result;
}
