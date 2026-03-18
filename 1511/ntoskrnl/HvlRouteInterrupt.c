/*
 * XREFs of HvlRouteInterrupt @ 0x1401AE564
 * Callers:
 *     KiHvInterrupt @ 0x140158160 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140158800 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140158E80 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140159500 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140159B80 (KiVmbusInterrupt3.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlRouteInterrupt(int a1)
{
  HvlpInterruptCallback[a1]();
}
