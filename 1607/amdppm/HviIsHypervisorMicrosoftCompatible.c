/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C00062D0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1C0006278 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1C0006330 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  if ( HviIsAnyHypervisorPresent() )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  else
  {
    LODWORD(_RAX) = 0;
  }
  return (_DWORD)_RAX == 824407624;
}
