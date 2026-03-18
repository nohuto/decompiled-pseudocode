/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1405009D4
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1404FF914 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
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
