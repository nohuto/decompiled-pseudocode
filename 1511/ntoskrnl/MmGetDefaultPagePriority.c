/*
 * XREFs of MmGetDefaultPagePriority @ 0x14007A034
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403A5E98 (PfTAccessTracingStart.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1404C0014 (PspApplyIFEOPerfOptions.c)
 *     PfSnCheckActionsNeeded @ 0x1404D78A0 (PfSnCheckActionsNeeded.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 *     PfpLogEventRequest @ 0x1404F7A38 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
