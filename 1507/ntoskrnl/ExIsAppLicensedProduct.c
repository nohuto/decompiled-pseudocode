/*
 * XREFs of ExIsAppLicensedProduct @ 0x1406EBA08
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 */

__int64 __fastcall ExIsAppLicensedProduct(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v3[10]; // [rsp+38h] [rbp-40h] BYREF

  memset(v3, 0, 36);
  LODWORD(v2) = 0;
  result = sub_1405874F8(1u, a1, 0, 36LL, v3, &v2);
  if ( (int)result >= 0 )
    return v3[0] != 1 ? 0xC0000272 : 0;
  return result;
}
