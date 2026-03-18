/*
 * XREFs of KiBugCheckDebugBreak @ 0x1401D4F9C
 * Callers:
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KeEnterKernelDebugger @ 0x1401D4D98 (KeEnterKernelDebugger.c)
 * Callees:
 *     HeadlessDispatch @ 0x14013C5A0 (HeadlessDispatch.c)
 *     DbgBreakPointWithStatus @ 0x140166D80 (DbgBreakPointWithStatus.c)
 *     xHalHaltSystem @ 0x140171708 (xHalHaltSystem.c)
 *     KiHeadlessDisplayString @ 0x1401D55E4 (KiHeadlessDisplayString.c)
 */

void __fastcall KiBugCheckDebugBreak(ULONG Status)
{
  do
    DbgBreakPointWithStatus(Status);
  while ( Status != 3 );
}
