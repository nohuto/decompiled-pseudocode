/*
 * XREFs of _clrfp @ 0x140151864
 * Callers:
 *     _raise_exc_ex @ 0x14015158C (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x14015194A (_fclrf.c)
 *     _get_fpsr @ 0x140168580 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
