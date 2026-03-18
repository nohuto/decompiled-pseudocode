/*
 * XREFs of _get_fpsr @ 0x14018CBF0
 * Callers:
 *     _clrfp @ 0x140176554 (_clrfp.c)
 *     _ctrlfp @ 0x140176574 (_ctrlfp.c)
 *     _set_statfp @ 0x1401765F0 (_set_statfp.c)
 *     _statfp @ 0x140176610 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
