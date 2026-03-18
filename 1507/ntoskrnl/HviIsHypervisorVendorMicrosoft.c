/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x140268530
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140209FC8 (KiIsHyperVCr3RspErrataPresent.c)
 *     HviGetDebugDeviceOptions @ 0x140268380 (HviGetDebugDeviceOptions.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
