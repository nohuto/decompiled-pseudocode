/*
 * XREFs of StringCchPrintfW @ 0x140126550
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PfVerifyScenarioBuffer @ 0x1404F6520 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildGuidString @ 0x140587638 (AdtpBuildGuidString.c)
 *     AdtpBuildMessageString @ 0x1405A1DB0 (AdtpBuildMessageString.c)
 *     AdtpBuildHexInt64String @ 0x14070BF10 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14070BFCC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14070C120 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14070C8A4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x140171A38 (_vsnwprintf.c)
 */

HRESULT StringCchPrintfW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  HRESULT v4; // edi
  size_t v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v4 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v5 = cchDest - 1;
    v4 = 0;
    v6 = vsnwprintf(pszDest, cchDest - 1, pszFormat, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      pszDest[v5] = 0;
      return -2147024774;
    }
    else if ( v6 == v5 )
    {
      pszDest[v5] = 0;
    }
  }
  return v4;
}
