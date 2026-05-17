/*
 * XREFs of _get_fpsr @ 0x1800AB560
 * Callers:
 *     _control87 @ 0x18009D258 (_control87.c)
 *     _clrfp @ 0x18009E660 (_clrfp.c)
 *     _ctrlfp @ 0x18009E684 (_ctrlfp.c)
 *     _set_statfp @ 0x18009E708 (_set_statfp.c)
 *     _statfp @ 0x18009E730 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
