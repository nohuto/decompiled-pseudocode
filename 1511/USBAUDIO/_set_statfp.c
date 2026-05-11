/*
 * XREFs of _set_statfp @ 0x1C0006FEC
 * Callers:
 *     _exception_enabled @ 0x1C0006908 (_exception_enabled.c)
 * Callees:
 *     _get_fpsr @ 0x1C0007C80 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
