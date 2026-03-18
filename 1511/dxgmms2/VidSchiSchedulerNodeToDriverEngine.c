/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C003A870 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1C003AA00 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchCreateSystemDevices @ 0x1C0069E2C (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C008A8AC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C008B910 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C008BD20 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 376) + 6LL);
}
