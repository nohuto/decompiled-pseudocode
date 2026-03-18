/*
 * XREFs of KiBugCheckDebugBreak @ 0x1401C5E48
 * Callers:
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1401C5C54 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x1401340E0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x14015B8E0 (DbgBreakPointWithStatus.c)
 *     xHalHaltSystem @ 0x140166DD0 (xHalHaltSystem.c)
 *     KiHeadlessDisplayString @ 0x1401C6494 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
