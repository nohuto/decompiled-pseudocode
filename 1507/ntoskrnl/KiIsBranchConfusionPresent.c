/*
 * XREFs of KiIsBranchConfusionPresent @ 0x140208AFC
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsSrsoMitigationDesired @ 0x140208C1C (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1597) != 1 || (KeFeatureBits2 & 0x1000000) != 0 )
    return 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0 || *(_BYTE *)(a1 + 1520) != 25;
}
