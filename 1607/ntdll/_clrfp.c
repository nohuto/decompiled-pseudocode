/*
 * XREFs of _clrfp @ 0x18009FA7C
 * Callers:
 *     _raise_exc_ex @ 0x18009F538 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1800A0AAA (_fclrf.c)
 *     _get_fpsr @ 0x1800AC920 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
