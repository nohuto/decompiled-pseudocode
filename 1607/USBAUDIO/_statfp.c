/*
 * XREFs of _statfp @ 0x1C00073BC
 * Callers:
 *     _raise_exc_ex @ 0x1C0007054 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1C0008020 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
