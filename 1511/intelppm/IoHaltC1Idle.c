/*
 * XREFs of IoHaltC1Idle @ 0x1C0005CA0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0001388 (ReadGenAddr.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1)
{
  ReadGenAddr(a1);
  C1Halt();
}
