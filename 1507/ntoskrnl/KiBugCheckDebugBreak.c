/*
 * XREFs of KiBugCheckDebugBreak @ 0x140202990
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x14020279C (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x14015F390 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x14018B3C0 (DbgBreakPointWithStatus.c)
 *     xHalHaltSystem @ 0x140195B88 (xHalHaltSystem.c)
 *     KiHeadlessDisplayString @ 0x140202FDC (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
