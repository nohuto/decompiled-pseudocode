/*
 * XREFs of MmGetDefaultPagePriority @ 0x1400D3D18
 * Callers:
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PfSnCheckActionsNeeded @ 0x1403E7994 (PfSnCheckActionsNeeded.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     PspApplyIFEOPerfOptions @ 0x1404E949C (PspApplyIFEOPerfOptions.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     PfpLogEventRequest @ 0x14052FB44 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
