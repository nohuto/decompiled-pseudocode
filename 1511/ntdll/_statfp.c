/*
 * XREFs of _statfp @ 0x18009E730
 * Callers:
 *     _raise_exc_ex @ 0x18009E11C (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800AB560 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
