/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x140126614
 * Callers:
 *     KiRestoreFeatureBits @ 0x140119BA0 (KiRestoreFeatureBits.c)
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 *     HvlPhase0Initialize @ 0x140530D90 (HvlPhase0Initialize.c)
 *     ViFilterIsDeviceExcluded @ 0x1406CF018 (ViFilterIsDeviceExcluded.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0;
}
