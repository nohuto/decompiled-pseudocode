/*
 * XREFs of LdrpConstructModernAppKeyName @ 0x1800BDD70
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryPackageIdentity @ 0x180064870 (RtlQueryPackageIdentity.c)
 *     RtlStringCbPrintfExW @ 0x180064B74 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall LdrpConstructModernAppKeyName(_WORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+40h] [rbp-1B8h] BYREF
  __int64 v4; // [rsp+48h] [rbp-1B0h] BYREF
  _BYTE v5[144]; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v6[256]; // [rsp+E0h] [rbp-118h] BYREF

  v4 = 132LL;
  v3 = 256LL;
  memset(v6, 0, sizeof(v6));
  memset(v5, 0, 0x84uLL);
  result = RtlQueryPackageIdentity(-4, (int)v6, (int)&v3, (int)v5, (__int64)&v4, 0LL);
  if ( (int)result >= 0 )
    return RtlStringCbPrintfExW(a1, 0x184uLL, 0LL, 0LL, 0, L"%s!%s", v6, v5, v3, v4);
  return result;
}
