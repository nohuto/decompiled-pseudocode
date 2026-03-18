/*
 * XREFs of _statfp @ 0x140148584
 * Callers:
 *     _raise_exc_ex @ 0x1401481F0 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14015D110 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
