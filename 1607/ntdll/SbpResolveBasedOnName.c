/*
 * XREFs of SbpResolveBasedOnName @ 0x1800FEBF4
 * Callers:
 *     SbpUpdateCache @ 0x18002C538 (SbpUpdateCache.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002EBE0 (SbpUpdateCacheWithCurrentImpl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180011910 (RtlInitUnicodeStringEx.c)
 *     LdrLoadDll @ 0x180011F30 (LdrLoadDll.c)
 *     LdrGetDllHandle @ 0x180012190 (LdrGetDllHandle.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     SbpLookup @ 0x1800FEA4C (SbpLookup.c)
 *     SbpParseFuncName @ 0x1800FEB50 (SbpParseFuncName.c)
 */

__int64 __fastcall SbpResolveBasedOnName(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-A38h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-A30h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-A18h] BYREF
  wchar_t v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, pszDest, a3, v8)
    && (int)RtlInitUnicodeStringEx((__int64)v6, (__int64)pszDest) >= 0
    && ((int)LdrGetDllHandle(1, 0, (int)v6, (__int64)&v5) >= 0 || (int)LdrLoadDll(0LL, 0LL, (__int64)v6, &v5) >= 0) )
  {
    return SbpLookup(v5, v8);
  }
  return v3;
}
