/*
 * XREFs of StringCchPrintfW @ 0x1400AC770
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PfVerifyScenarioBuffer @ 0x1403EC7A0 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14056B690 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x1406D03E0 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1406D0508 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1406D05C4 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1406D0718 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x14014D224 (_vsnwprintf.c)
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
