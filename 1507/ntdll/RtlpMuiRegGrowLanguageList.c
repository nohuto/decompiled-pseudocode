/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1800E7B28
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180048CF0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180049C70 (RtlpLoadUserUIByPolicy.c)
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
