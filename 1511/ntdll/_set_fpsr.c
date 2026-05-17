/*
 * XREFs of _set_fpsr @ 0x18009F690
 * Callers:
 *     _control87 @ 0x18009D258 (_control87.c)
 *     _ctrlfp @ 0x18009E684 (_ctrlfp.c)
 *     _set_statfp @ 0x18009E708 (_set_statfp.c)
 * Callees:
 *     <none>
 */

void __fastcall set_fpsr(unsigned int a1)
{
  _mm_setcsr(a1);
}
