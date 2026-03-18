/*
 * XREFs of StringCchPrintfW @ 0x1400EE06C
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PfVerifyScenarioBuffer @ 0x1404D2320 (PfVerifyScenarioBuffer.c)
 *     AdtpBuildMessageString @ 0x14053A7D8 (AdtpBuildMessageString.c)
 *     AdtpBuildGuidString @ 0x14068BA6C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x14068BB98 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14068BC54 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14068BDA8 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14068C52C (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
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
