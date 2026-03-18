/*
 * XREFs of KiIsNXSupported @ 0x1403A8B5C
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x14075A4A0 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x1403A8AA8 (KiGetCpuVendor.c)
 */

char KiIsNXSupported()
{
  char v5; // bl
  char result; // al
  bool v7; // zf

  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x100000) != 0 )
    return 1;
  v5 = 0;
  v7 = (unsigned int)KiGetCpuVendor() == 1;
  result = 1;
  if ( !v7 )
    return v5;
  return result;
}
