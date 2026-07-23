/*
 * XREFs of _statfp @ 0x140151ED8
 * Callers:
 *     _raise_exc_ex @ 0x140151B44 (_raise_exc_ex.c)
 * Callees:
 *     _get_fpsr @ 0x140168AF0 (_get_fpsr.c)
 */

__int64 statfp()
{
  return get_fpsr() & 0x3F;
}
