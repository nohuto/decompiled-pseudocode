/*
 * XREFs of _statfp @ 0x18008CF90
 * Callers:
 *     _raise_exc_ex @ 0x18008C97C (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x180098180 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
