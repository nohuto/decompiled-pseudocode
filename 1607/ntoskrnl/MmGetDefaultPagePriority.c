/*
 * XREFs of MmGetDefaultPagePriority @ 0x1400D1BB8
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PfSnCheckActionsNeeded @ 0x1403E8FC4 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1404CB58C (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     PfpLogEventRequest @ 0x140530084 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
