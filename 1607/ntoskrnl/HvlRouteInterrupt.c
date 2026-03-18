/*
 * XREFs of HvlRouteInterrupt @ 0x1401BAD00
 * Callers:
 *     KiHvInterrupt @ 0x140162640 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x1401633F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140163AF0 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1401641F0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1401648F0 (KiVmbusInterrupt3.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlRouteInterrupt(int a1)
{
  HvlpInterruptCallback[a1]();
}
