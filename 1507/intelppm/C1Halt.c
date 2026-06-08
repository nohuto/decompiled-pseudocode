/*
 * XREFs of C1Halt @ 0x1C0002200
 * Callers:
 *     C1Idle @ 0x1C0004290 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0004530 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
