/*
 * XREFs of HvlRouteInterrupt @ 0x1401E563C
 * Callers:
 *     KiHvInterrupt @ 0x140187990 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140188090 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140188770 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140188E50 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140189530 (KiVmbusInterrupt3.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlRouteInterrupt(int a1)
{
  HvlpInterruptCallback[a1]();
}
