/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0005D78
 * Callers:
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0015F3C (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C00162BC (RegisterKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0;
}
