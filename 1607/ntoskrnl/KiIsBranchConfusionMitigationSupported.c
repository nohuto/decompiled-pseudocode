/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1401D9C20
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D90FC (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x1401D9CAC (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x1401D9D44 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401D8E8C (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _DWORD *a2)
{
  return (*a2 & 4) != 0 && !KiIsHyperVCr3RspErrataPresent(a1);
}
