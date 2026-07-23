/*
 * XREFs of _get_fpsr @ 0x140168AF0
 * Callers:
 *     _clrfp @ 0x140151E1C (_clrfp.c)
 *     _ctrlfp @ 0x140151E3C (_ctrlfp.c)
 *     _set_statfp @ 0x140151EB8 (_set_statfp.c)
 *     _statfp @ 0x140151ED8 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
