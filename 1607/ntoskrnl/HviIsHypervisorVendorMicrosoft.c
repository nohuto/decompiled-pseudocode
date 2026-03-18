/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x14013CF88
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1401D8E8C (KiIsHyperVCr3RspErrataPresent.c)
 *     HviGetDebugDeviceOptions @ 0x140231E6C (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x1407A9CCC (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x14013123C (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
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
