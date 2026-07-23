/*
 * XREFs of SbpResolveBasedOnName @ 0x1800F6480
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x180041F50 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x180043340 (SbpUpdateCache.c)
 * Callees:
 *     LdrGetDllHandle @ 0x180018950 (LdrGetDllHandle.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     RtlInitUnicodeStringEx @ 0x18001FB10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     SbpLookup @ 0x1800F62D8 (SbpLookup.c)
 *     SbpParseFuncName @ 0x1800F63DC (SbpParseFuncName.c)
 */

__int64 __fastcall SbpResolveBasedOnName(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID DllHandle; // [rsp+30h] [rbp-A38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A30h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-A18h] BYREF
  wchar_t v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, SourceString, a3, v8)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandle((PWSTR)1, 0LL, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0LL, 0LL, &DestinationString, &DllHandle) >= 0) )
  {
    return SbpLookup((__int64)DllHandle, v8);
  }
  return v3;
}
