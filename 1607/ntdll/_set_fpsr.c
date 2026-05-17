/*
 * XREFs of _set_fpsr @ 0x1800A0AB0
 * Callers:
 *     _control87 @ 0x18009E620 (_control87.c)
 *     _ctrlfp @ 0x18009FAB0 (_ctrlfp.c)
 *     _set_statfp @ 0x18009FB34 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
