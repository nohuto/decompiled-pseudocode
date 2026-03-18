/*
 * XREFs of AdtpBuildSockAddrString @ 0x14070CCD4
 * Callers:
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     AdtpBuildIPv4Strings @ 0x14070BFCC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14070C120 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14070C274 (AdtpBuildMacStrings.c)
 */

__int64 __fastcall AdtpBuildSockAddrString(
        const struct in_addr *a1,
        UNICODE_STRING *a2,
        _BYTE *a3,
        UNICODE_STRING *a4,
        _BYTE *a5)
{
  unsigned int v5; // ebx
  int s_w1; // eax

  v5 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a5 )
    *a5 = 0;
  s_w1 = a1->S_un.S_un_w.s_w1;
  switch ( s_w1 )
  {
    case 2:
      return (unsigned int)AdtpBuildIPv4Strings(a1, (__int64)a2, a3, (__int64)a4, a5);
    case 23:
      return (unsigned int)AdtpBuildIPv6Strings((__int64)a1, (__int64)a2, a3, (__int64)a4, a5);
    case 33:
      return (unsigned int)AdtpBuildMacStrings((__int64)a1, (__int64)a2, a3);
  }
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(a2, L"-");
    *a3 = 0;
  }
  if ( a4 && a5 )
  {
    RtlInitUnicodeString(a4, L"-");
    *a5 = 0;
  }
  return v5;
}
