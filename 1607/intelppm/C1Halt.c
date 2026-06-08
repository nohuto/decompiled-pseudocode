/*
 * XREFs of C1Halt @ 0x1C0002A10
 * Callers:
 *     C1Idle @ 0x1C0005110 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C00053B0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
