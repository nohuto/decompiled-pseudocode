/*
 * XREFs of _statfp @ 0x140151920
 * Callers:
 *     _raise_exc_ex @ 0x14015158C (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140168580 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
