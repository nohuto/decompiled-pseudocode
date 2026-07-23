/*
 * XREFs of KiBugCheckDebugBreak @ 0x1401D4DC8
 * Callers:
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1401D4BC4 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x14013CB10 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x1401672F0 (DbgBreakPointWithStatus.c)
 *     xHalHaltSystem @ 0x140171C08 (xHalHaltSystem.c)
 *     KiHeadlessDisplayString @ 0x1401D5410 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
