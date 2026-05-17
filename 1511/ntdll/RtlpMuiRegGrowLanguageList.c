/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1800EC1E8
 * Callers:
 *     RtlpLoadMachineUIByPolicy @ 0x180004780 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180005100 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGrowLanguageList(__int64 a1)
{
  if ( !a1 )
    return 0LL;
  if ( *(unsigned __int16 *)(a1 + 4) + 1 >= *(unsigned __int16 *)(a1 + 6) )
    return RtlpMuiRegResizeLanguageList();
  return a1;
}
