/*
 * XREFs of MmGetMinWsPagePriority @ 0x140043E34
 * Callers:
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     PfSnAsyncContextInitialize @ 0x1404F5D18 (PfSnAsyncContextInitialize.c)
 *     PfSnCheckActionsNeeded @ 0x1404FDC54 (PfSnCheckActionsNeeded.c)
 *     EtwTraceThread @ 0x14053C038 (EtwTraceThread.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMinWsPagePriority()
{
  return 1LL;
}
