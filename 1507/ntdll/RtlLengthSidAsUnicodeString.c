/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x18001FC70
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x18001FB60 (RtlFormatCurrentUserKeyPath.c)
 *     WerEscalationLazyInit @ 0x1800C83D8 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x180020320 (RtlValidSid.c)
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
