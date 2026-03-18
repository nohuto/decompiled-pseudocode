/*
 * XREFs of _set_fpsr @ 0x140176630
 * Callers:
 *     _ctrlfp @ 0x140176574 (_ctrlfp.c)
 *     _set_statfp @ 0x1401765F0 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
