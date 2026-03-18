/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C0014A30
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroySMWPSupported_0 @ 0x1C0002800 (IsDestroySMWPSupported_0.c)
 *     DestroySMWP_0 @ 0x1C0002808 (DestroySMWP_0.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( (int)IsDestroySMWPSupported_0() >= 0 )
    DestroySMWP_0();
}
