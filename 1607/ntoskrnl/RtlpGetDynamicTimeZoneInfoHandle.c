/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x14055F540
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x14055F418 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400C47BC (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x1400C49B8 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x1404FADEC (RtlpGetRegistryHandle.c)
 */

NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(NTSTRSAFE_PCWSTR pszSrc, HANDLE *a2)
{
  NTSTATUS result; // eax
  wchar_t pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*pszSrc )
    return -1073741811;
  result = RtlStringCbCopyW(pszDest, 0x200uLL, L"Time Zones\\");
  if ( result >= 0 )
  {
    result = RtlStringCbCatW(pszDest, 0x200uLL, pszSrc);
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(pszDest, 0x200uLL, L"\\Dynamic DST");
      if ( result >= 0 )
        return RtlpGetRegistryHandle(3, pszDest, 0, a2);
    }
  }
  return result;
}
