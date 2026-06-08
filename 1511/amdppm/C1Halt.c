/*
 * XREFs of C1Halt @ 0x1C0005DA0
 * Callers:
 *     C1Idle @ 0x1C00022C0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C00022D0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
