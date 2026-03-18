/*
 * XREFs of DbgBreakPointWithStatus @ 0x140166D80
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140081BB0 (vDbgPrintExWithPrefixInternal.c)
 *     KeAccumulateTicks @ 0x1400DC3C0 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x1401140F8 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1401D4F9C (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
