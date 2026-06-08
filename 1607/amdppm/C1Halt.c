/*
 * XREFs of C1Halt @ 0x1C0006780
 * Callers:
 *     C1Idle @ 0x1C0003520 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0003570 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
