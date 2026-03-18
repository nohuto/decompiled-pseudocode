/*
 * XREFs of DbgBreakPointWithStatus @ 0x14018B3C0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x140131F0C (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x14014E92C (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x140202990 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x1403F2FAC (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 *     VerifierDbgBreakPointWithStatus @ 0x140741B34 (VerifierDbgBreakPointWithStatus.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
