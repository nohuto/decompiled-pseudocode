/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x180013D40
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x1800152A0 (RtlFormatCurrentUserKeyPath.c)
 *     WerEscalationLazyInit @ 0x1800D91C8 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x180014F80 (RtlValidSid.c)
 */

__int64 __fastcall RtlLengthSidAsUnicodeString(unsigned __int8 *a1, _DWORD *a2)
{
  int v4; // ecx

  if ( (unsigned __int8)RtlValidSid(a1) != 1 )
    return 3221225592LL;
  if ( a1[2] || (v4 = 10, a1[3]) )
    v4 = 14;
  *a2 = 2 * (v4 + 11 * a1[1]) + 8;
  return 0LL;
}
