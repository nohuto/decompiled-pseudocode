/*
 * XREFs of DbgBreakPointWithStatus @ 0x1401672F0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140084D34 (vDbgPrintExWithPrefixInternal.c)
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KdCheckForDebugBreak @ 0x140114668 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1401D4DC8 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x1403CC110 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
