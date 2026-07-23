/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1401317AC
 * Callers:
 *     HviIsHypervisorVendorMicrosoft @ 0x14013D4F8 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorInterface @ 0x14014B500 (HviGetHypervisorInterface.c)
 *     KiApplyProcessorErrata @ 0x1401D7304 (KiApplyProcessorErrata.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x1401D955C (KiDetectAmdNonArchSsbdSupport.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D96C8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionPresent @ 0x1401D9A70 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1401D9C04 (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1401D9C80 (KiIsTsaPresent.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140231D6C (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
 *     ViFilterIsDeviceExcluded @ 0x14071B0D0 (ViFilterIsDeviceExcluded.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140792718 (KiIntSteerDetermineSteeringEnabled.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1407BC99C (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
