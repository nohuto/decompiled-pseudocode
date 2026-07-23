/*
 * XREFs of RtlpMuiRegGrowLanguageList @ 0x1800F4F5C
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180070B50 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpLoadUserUIByPolicy @ 0x180071A00 (RtlpLoadUserUIByPolicy.c)
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
