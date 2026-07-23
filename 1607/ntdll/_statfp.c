/*
 * XREFs of _statfp @ 0x18009FB4C
 * Callers:
 *     _raise_exc_ex @ 0x18009F538 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x1800AC920 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
