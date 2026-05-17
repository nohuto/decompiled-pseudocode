/*
 * XREFs of _clrfp @ 0x18008CEC0
 * Callers:
 *     _raise_exc_ex @ 0x18008C97C (_raise_exc_ex.c)
 * Callees:
 *     _fclrf @ 0x18008DEFA (_fclrf.c)
 *     _get_fpsr @ 0x180098180 (_get_fpsr.c)
 */

__int64 clrfp()
{
  __int64 v0; // rbx

  v0 = get_fpsr() & 0x3F;
  fclrf();
  return (unsigned int)v0;
}
