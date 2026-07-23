/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x14013D4F8
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401D8CB8 (KiIsHyperVCr3RspErrataPresent.c)
 *     HviGetDebugDeviceOptions @ 0x140231C98 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1407A9CCC (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
