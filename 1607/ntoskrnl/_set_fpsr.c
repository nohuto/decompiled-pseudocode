/*
 * XREFs of _set_fpsr @ 0x140151F00
 * Callers:
 *     _ctrlfp @ 0x140151E3C (_ctrlfp.c)
 *     _set_statfp @ 0x140151EB8 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
