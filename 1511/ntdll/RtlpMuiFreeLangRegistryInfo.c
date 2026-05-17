/*
 * XREFs of RtlpMuiFreeLangRegistryInfo @ 0x180083270
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180019DB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x180084C2C (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18003D640 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiFreeLangRegistryInfo(unsigned __int64 a1)
{
  unsigned int v2; // ebx

  if ( !a1 )
    return 3221225485LL;
  v2 = RtlpMuiRegFreeRegistryInfo(a1, 0xFFFu);
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  return v2;
}
