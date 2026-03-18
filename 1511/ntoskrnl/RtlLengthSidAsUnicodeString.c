/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1403BD9A0
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1403BD5A0 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildSidListString @ 0x14068C724 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
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
