/*
 * XREFs of _set_fpsr @ 0x1C0007270
 * Callers:
 *     _ctrlfp @ 0x1C00071B0 (_ctrlfp.c)
 *     _set_statfp @ 0x1C000722C (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
