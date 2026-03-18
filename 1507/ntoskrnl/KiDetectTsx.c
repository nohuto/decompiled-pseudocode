/*
 * XREFs of KiDetectTsx @ 0x1401FEC6C
 * Callers:
 *     KiInitializeBootStructures @ 0x1403F77B0 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

_BOOL8 KiDetectTsx()
{
  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 7 )
    return 0LL;
  _RAX = 7LL;
  __asm { cpuid }
  return (_RBX & 0x800) != 0 || (_RBX & 0x10) != 0;
}
