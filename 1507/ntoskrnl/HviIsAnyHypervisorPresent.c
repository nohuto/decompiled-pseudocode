/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140159E3C
 * Callers:
 *     KiRestoreFeatureBits @ 0x14014E9AC (KiRestoreFeatureBits.c)
 *     KiSetFeatureBits @ 0x1403F80E8 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
 *     ViFilterIsDeviceExcluded @ 0x140752AE4 (ViFilterIsDeviceExcluded.c)
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0;
}
