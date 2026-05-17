/*
 * XREFs of _get_fpsr @ 0x1800AC920
 * Callers:
 *     _control87 @ 0x18009E620 (_control87.c)
 *     _clrfp @ 0x18009FA8C (_clrfp.c)
 *     _ctrlfp @ 0x18009FAB0 (_ctrlfp.c)
 *     _set_statfp @ 0x18009FB34 (_set_statfp.c)
 *     _statfp @ 0x18009FB5C (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
