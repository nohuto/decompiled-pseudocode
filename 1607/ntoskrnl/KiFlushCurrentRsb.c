/*
 * XREFs of KiFlushCurrentRsb @ 0x1401715C0
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1401D9EB0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401715C0 (KiFlushCurrentRsb.c)
 */

void __noreturn KiFlushCurrentRsb()
{
  _disable();
  JUMPOUT(0x1401716D9LL);
}
