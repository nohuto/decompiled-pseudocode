/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1C0006278
 * Callers:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1C00062D0 (HviIsHypervisorMicrosoftCompatible.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00176F8 (RegisterKernelPepIdleStatesV2.c)
 *     RegisterKernelPlatformStates @ 0x1C0017A78 (RegisterKernelPlatformStates.c)
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
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
