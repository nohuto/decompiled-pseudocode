/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x140208AA4
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140208B84 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x140208C1C (KiIsSrsoMitigationDesired.c)
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
