/*
 * XREFs of ?Attach@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXPEAE@Z @ 0x1800456FC
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180042DC0 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     ?Reset@?$SP@EV?$SP_HLOCAL@E@@@@QEAAXXZ @ 0x1800456D4 (-Reset@-$SP@EV-$SP_HLOCAL@E@@@@QEAAXXZ.c)
 */

HLOCAL __fastcall SP<unsigned char,SP_HLOCAL<unsigned char>>::Attach(void **a1, void *a2)
{
  HLOCAL result; // rax

  result = SP<unsigned char,SP_HLOCAL<unsigned char>>::Reset(a1);
  *a1 = a2;
  return result;
}
