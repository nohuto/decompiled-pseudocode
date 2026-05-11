/*
 * XREFs of _statfp @ 0x1C000700C
 * Callers:
 *     _raise_exc_ex @ 0x1C0006CA4 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0007C80 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
