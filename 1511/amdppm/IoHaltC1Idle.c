/*
 * XREFs of IoHaltC1Idle @ 0x1C00022D0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00046A0 (ReadGenAddr.c)
 */

void __noreturn IoHaltC1Idle()
{
  ReadGenAddr();
  C1Halt();
}
