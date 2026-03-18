/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1401D9C44
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x1401D90FC (KeOptimizeSpecCtrlSettings.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D989C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsSrsoMitigationDesired @ 0x1401D9D44 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14013123C (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  bool IsAnyHypervisorPresent; // al
  unsigned int v4; // ecx

  if ( *(_BYTE *)(a1 + 1597) != 1 || (KeFeatureBits2 & 0x1000000) != 0 )
    return 0LL;
  IsAnyHypervisorPresent = HviIsAnyHypervisorPresent();
  v4 = 0;
  if ( IsAnyHypervisorPresent )
    return 1LL;
  LOBYTE(v4) = *(_BYTE *)(a1 + 1520) != 25;
  return v4;
}
