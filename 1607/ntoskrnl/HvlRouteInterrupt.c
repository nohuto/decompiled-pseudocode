/*
 * XREFs of HvlRouteInterrupt @ 0x1401BABE4
 * Callers:
 *     KiHvInterrupt @ 0x140162BB0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140163960 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140164060 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140164760 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140164E60 (KiVmbusInterrupt3.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlRouteInterrupt(int a1)
{
  HvlpInterruptCallback[a1]();
}
