/*
 * XREFs of _set_statfp @ 0x18009FB24
 * Callers:
 *     _exception_enabled @ 0x18009E924 (_exception_enabled.c)
 *     _handle_exc @ 0x18009F238 (_handle_exc.c)
 * Callees:
 *     _get_fpsr @ 0x1800AC920 (_get_fpsr.c)
 */

__int64 __fastcall set_statfp(char a1)
{
  unsigned int fpsr; // eax

  fpsr = get_fpsr();
  return set_fpsr(a1 & 0x3F | fpsr);
}
