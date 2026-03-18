/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x14013408C
 * Callers:
 *     HviGetDebugDeviceOptions @ 0x140217C74 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140755A0C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX >= 0 )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
