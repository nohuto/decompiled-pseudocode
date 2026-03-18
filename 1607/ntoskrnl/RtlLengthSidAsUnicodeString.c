/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1403F8A08
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1403F7A20 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildSidListString @ 0x1406D0F58 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1404217D0 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // ecx

  if ( RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 10, a1[3]) )
    v4 = 14;
  *a2 = 2 * (v4 + 11 * a1[1]) + 8;
  return 0LL;
}
