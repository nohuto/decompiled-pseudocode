/*
 * XREFs of MmGetDefaultPagePriority @ 0x140043E3C
 * Callers:
 *     PfTAccessTracingStart @ 0x1403EBE7C (PfTAccessTracingStart.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     PfSnCheckActionsNeeded @ 0x1404FDC54 (PfSnCheckActionsNeeded.c)
 *     PspApplyIFEOPerfOptions @ 0x1405573CC (PspApplyIFEOPerfOptions.c)
 *     PfpLogEventRequest @ 0x1405666C4 (PfpLogEventRequest.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 * Callees:
 *     <none>
 */

__int64 MmGetDefaultPagePriority()
{
  return 5LL;
}
