/*
 * XREFs of _set_fpsr @ 0x18008DEF0
 * Callers:
 *     _control87 @ 0x18008BAB8 (_control87.c)
 *     _ctrlfp @ 0x18008CEE4 (_ctrlfp.c)
 *     _set_statfp @ 0x18008CF68 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
