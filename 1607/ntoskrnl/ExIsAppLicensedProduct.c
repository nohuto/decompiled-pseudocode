/*
 * XREFs of ExIsAppLicensedProduct @ 0x1406ADE40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     sub_1406ADEF4 @ 0x1406ADEF4 (sub_1406ADEF4.c)
 */

__int64 __fastcall ExIsAppLicensedProduct(int a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v4[10]; // [rsp+38h] [rbp-40h] BYREF

  memset(v4, 0, 0x24uLL);
  result = sub_1406ADEF4(1, a1, 0, 36, v4, (__int64)&v3);
  if ( (int)result >= 0 )
    return v4[0] != 1 ? 0xC0000272 : 0;
  return result;
}
