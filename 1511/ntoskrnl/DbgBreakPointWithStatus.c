/*
 * XREFs of DbgBreakPointWithStatus @ 0x14015B8E0
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x1400E69D8 (vDbgPrintExWithPrefixInternal.c)
 *     KdCheckForDebugBreak @ 0x140119A78 (KdCheckForDebugBreak.c)
 *     KiBugCheckDebugBreak @ 0x1401C5E48 (KiBugCheckDebugBreak.c)
 *     PopInvokeSystemStateHandler @ 0x1403A0370 (PopInvokeSystemStateHandler.c)
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 *     VerifierDbgBreakPointWithStatus @ 0x1406C0340 (VerifierDbgBreakPointWithStatus.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

void __stdcall DbgBreakPointWithStatus(ULONG Status)
{
  __debugbreak();
}
