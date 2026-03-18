/*
 * XREFs of _get_fpsr @ 0x140168580
 * Callers:
 *     _clrfp @ 0x140151864 (_clrfp.c)
 *     _ctrlfp @ 0x140151884 (_ctrlfp.c)
 *     _set_statfp @ 0x140151900 (_set_statfp.c)
 *     _statfp @ 0x140151920 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
