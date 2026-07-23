/*
 * XREFs of KiIsSrsoMitigationDesired @ 0x1401D9B70
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     KiIsBranchConfusionMitigationDesired @ 0x1401D9A18 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1401D9A4C (KiIsBranchConfusionMitigationSupported.c)
 *     KiIsBranchConfusionPresent @ 0x1401D9A70 (KiIsBranchConfusionPresent.c)
 */

__int64 __fastcall KiIsSrsoMitigationDesired(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = KiFeatureSettings;
  if ( (KiFeatureSettings & 5) != 0
    || *(_BYTE *)(a1 + 1597) == 1 && (*a2 & 0x10) == 0 && (KiFeatureSettings & 0x40) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)KiIsBranchConfusionPresent(a1)
    && KiIsBranchConfusionMitigationSupported(a1, a2)
    && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, a2) )
  {
    return 1LL;
  }
  return (v2 >> 26) & 1;
}
