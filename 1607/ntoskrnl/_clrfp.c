/*
 * XREFs of _clrfp @ 0x140151E1C
 * Callers:
 *     _raise_exc_ex @ 0x140151B44 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x140151F0A (_fclrf.c)
 *     _get_fpsr @ 0x140168AF0 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
