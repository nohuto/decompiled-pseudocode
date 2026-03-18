/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x140208AD8
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140208B84 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiIsSrsoMitigationDesired @ 0x140208C1C (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140209FC8 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _DWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)KiIsHyperVCr3RspErrataPresent() == 0;
}
