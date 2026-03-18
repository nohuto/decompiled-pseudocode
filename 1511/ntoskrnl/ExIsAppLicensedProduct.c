/*
 * XREFs of ExIsAppLicensedProduct @ 0x140668618
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 */

__int64 __fastcall ExIsAppLicensedProduct(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v3[10]; // [rsp+38h] [rbp-40h] BYREF

  memset(v3, 0, 36);
  LODWORD(v2) = 0;
  result = sub_140517000(1u, a1, 0, 0x24u, v3, &v2);
  if ( (int)result >= 0 )
    return v3[0] != 1 ? 0xC0000272 : 0;
  return result;
}
