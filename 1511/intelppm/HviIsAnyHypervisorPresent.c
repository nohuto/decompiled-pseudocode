/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0001FD4
 * Callers:
 *     RegisterKernelPepIdleStatesV2 @ 0x1C001FC9C (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C002043C (RegisterKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002450 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0;
}
