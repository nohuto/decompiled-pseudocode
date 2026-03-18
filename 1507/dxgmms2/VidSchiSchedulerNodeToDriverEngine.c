/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0005B44
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0032C30 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C00449B0 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C0076B80 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C0076C98 (VidSchiResetEngines.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C0078CD0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00790E0 (VidSchReportDevice.c)
 *     VidSchSubmitPagingCommand @ 0x1C00794D0 (VidSchSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 368) + 6LL);
}
