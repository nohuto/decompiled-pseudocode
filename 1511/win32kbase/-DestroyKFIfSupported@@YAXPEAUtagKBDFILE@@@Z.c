/*
 * XREFs of ?DestroyKFIfSupported@@YAXPEAUtagKBDFILE@@@Z @ 0x1C00AF8E0
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroyKFSupported_0 @ 0x1C0002870 (IsDestroyKFSupported_0.c)
 *     DestroyKF_0 @ 0x1C0002878 (DestroyKF_0.c)
 */

void __fastcall DestroyKFIfSupported(struct tagKBDFILE *a1)
{
  if ( (int)IsDestroyKFSupported_0() >= 0 )
    DestroyKF_0();
}
