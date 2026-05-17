/*
 * XREFs of _clrfp @ 0x18009E660
 * Callers:
 *     _raise_exc_ex @ 0x18009E11C (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x18009F69A (_fclrf.c)
 *     _get_fpsr @ 0x1800AB560 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
