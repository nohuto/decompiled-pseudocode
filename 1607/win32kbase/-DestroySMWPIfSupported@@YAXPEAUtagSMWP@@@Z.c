/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C007C6A0
 * Callers:
 *     <none>
 * Callees:
 *     IsDestroySMWPSupported_0 @ 0x1C0002830 (IsDestroySMWPSupported_0.c)
 *     DestroySMWP_0 @ 0x1C0002838 (DestroySMWP_0.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( (int)IsDestroySMWPSupported_0() >= 0 )
    DestroySMWP_0();
}
