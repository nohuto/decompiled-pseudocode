/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x180019190
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x180019080 (RtlFormatCurrentUserKeyPath.c)
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // ecx

  if ( (unsigned __int8)RtlValidSid() != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 10, a1[3]) )
    v4 = 14;
  *a2 = 2 * (v4 + 11 * a1[1]) + 8;
  return 0LL;
}
