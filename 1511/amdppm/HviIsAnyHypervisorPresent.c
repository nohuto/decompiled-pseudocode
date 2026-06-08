/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0005858
 * Callers:
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0015F54 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C00162D4 (RegisterKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0;
}
