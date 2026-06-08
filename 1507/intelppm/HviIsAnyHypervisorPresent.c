/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0001D44
 * Callers:
 *     RegisterKernelPepIdleStatesV2 @ 0x1C001FBAC (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C002034C (RegisterKernelPlatformStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  _RAX = 1LL;
  __asm { cpuid }
  return (int)_RCX < 0;
}
