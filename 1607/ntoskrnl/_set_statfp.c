/*
 * XREFs of _set_statfp @ 0x140151EB8
 * Callers:
 *     _exception_enabled @ 0x140151574 (_exception_enabled.c)
 * Callees:
 *     _get_fpsr @ 0x140168AF0 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
