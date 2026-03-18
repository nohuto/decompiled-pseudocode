/*
 * XREFs of ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C00B95C0
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroyKFSupported_0 @ 0x1C0002880 (IsDestroyKFSupported_0.c)
 *     DestroyKF_0 @ 0x1C0002888 (DestroyKF_0.c)
 */

void __fastcall DestroyKFIfSupported(struct tagKBDFILE *a1)
{
  if ( (int)IsDestroyKFSupported_0() >= 0 )
    DestroyKF_0();
}
