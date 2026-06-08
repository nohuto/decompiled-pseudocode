/*
 * XREFs of HviIsHypervisorMicrosoftCompatible @ 0x1C0005DB0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 */

bool HviIsHypervisorMicrosoftCompatible()
{
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX >= 0 )
  {
    LODWORD(_RAX) = 0;
  }
  else
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
  }
  return (_DWORD)_RAX == 824407624;
}
