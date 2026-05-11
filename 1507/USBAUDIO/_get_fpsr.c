/*
 * XREFs of _get_fpsr @ 0x1C0007EC0
 * Callers:
 *     _clrfp @ 0x1C0007190 (_clrfp.c)
 *     _ctrlfp @ 0x1C00071B0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C000722C (_set_statfp.c)
 *     _statfp @ 0x1C000724C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
