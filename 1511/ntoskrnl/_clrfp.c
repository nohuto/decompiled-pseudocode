/*
 * XREFs of _clrfp @ 0x1401484C8
 * Callers:
 *     _raise_exc_ex @ 0x1401481F0 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1401485BA (_fclrf.c)
 *     _get_fpsr @ 0x14015D110 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
