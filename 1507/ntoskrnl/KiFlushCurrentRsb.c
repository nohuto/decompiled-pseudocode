/*
 * XREFs of KiFlushCurrentRsb @ 0x140195580
 * Callers:
 *     KiUpdateSpeculationControl @ 0x140208FA0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140195580 (KiFlushCurrentRsb.c)
 */

void __noreturn KiFlushCurrentRsb()
{
  _disable();
  JUMPOUT(0x140195699LL);
}
