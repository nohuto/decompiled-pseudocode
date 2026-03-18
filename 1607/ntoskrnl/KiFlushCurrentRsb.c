/*
 * XREFs of KiFlushCurrentRsb @ 0x1401710C0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1401DA084 (KiUpdateSpeculationControl.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401710C0 (KiFlushCurrentRsb.c)
 */

void __noreturn KiFlushCurrentRsb()
{
  _disable();
  JUMPOUT(0x1401711D9LL);
}
