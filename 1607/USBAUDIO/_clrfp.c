/*
 * XREFs of _clrfp @ 0x1C0007300
 * Callers:
 *     _raise_exc_ex @ 0x1C0007054 (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x1C00073EA (_fclrf.c)
 *     _get_fpsr @ 0x1C0008020 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
