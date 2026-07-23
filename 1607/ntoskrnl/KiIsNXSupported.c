/*
 * XREFs of KiIsNXSupported @ 0x1403D6320
 * Callers:
 *     KiInitializeNxSupportDiscard @ 0x1407A11F4 (KiInitializeNxSupportDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiGetCpuVendor @ 0x1403D622C (KiGetCpuVendor.c)
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
