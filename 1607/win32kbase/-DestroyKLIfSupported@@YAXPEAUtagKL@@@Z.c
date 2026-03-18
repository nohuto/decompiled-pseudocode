/*
 * XREFs of ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C0082D40
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroyKLSupported_0 @ 0x1C0002870 (IsDestroyKLSupported_0.c)
 *     DestroyKL_0 @ 0x1C0002878 (DestroyKL_0.c)
 */

void __fastcall DestroyKLIfSupported(struct tagKL *a1)
{
  if ( (int)IsDestroyKLSupported_0() >= 0 )
    DestroyKL_0();
}
