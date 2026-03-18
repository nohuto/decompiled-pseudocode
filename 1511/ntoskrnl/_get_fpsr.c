/*
 * XREFs of _get_fpsr @ 0x14015D110
 * Callers:
 *     _clrfp @ 0x1401484C8 (_clrfp.c)
 *     _ctrlfp @ 0x1401484E8 (_ctrlfp.c)
 *     _set_statfp @ 0x140148564 (_set_statfp.c)
 *     _statfp @ 0x140148584 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
