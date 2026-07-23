/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x1401D9A18
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401D9AD8 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x1401D9B70 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _DWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0
    || *(_BYTE *)(a1 + 1597) == 1 && (*a2 & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
  {
    return 0LL;
  }
  else
  {
    return HIBYTE(KiFeatureSettings) & 1;
  }
}
