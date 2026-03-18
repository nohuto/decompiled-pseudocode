/*
 * XREFs of _statfp @ 0x140176610
 * Callers:
 *     _raise_exc_ex @ 0x14017627C (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x14018CBF0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
