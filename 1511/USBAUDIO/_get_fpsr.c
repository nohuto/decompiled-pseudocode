/*
 * XREFs of _get_fpsr @ 0x1C0007C80
 * Callers:
 *     _clrfp @ 0x1C0006F50 (_clrfp.c)
 *     _ctrlfp @ 0x1C0006F70 (_ctrlfp.c)
 *     _set_statfp @ 0x1C0006FEC (_set_statfp.c)
 *     _statfp @ 0x1C000700C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
