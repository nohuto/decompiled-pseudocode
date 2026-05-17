/*
 * XREFs of _get_fpsr @ 0x180098180
 * Callers:
 *     _control87 @ 0x18008BAB8 (_control87.c)
 *     _clrfp @ 0x18008CEC0 (_clrfp.c)
 *     _ctrlfp @ 0x18008CEE4 (_ctrlfp.c)
 *     _set_statfp @ 0x18008CF68 (_set_statfp.c)
 *     _statfp @ 0x18008CF90 (_statfp.c)
 * Callees:
 *     <none>
 */

__int64 get_fpsr()
{
  return (unsigned int)_mm_getcsr();
}
