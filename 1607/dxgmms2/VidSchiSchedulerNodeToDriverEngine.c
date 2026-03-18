/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0043DE0 (VidSchiCheckNodeTimeout.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchCreateSystemDevices @ 0x1C006FC94 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00A0078 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00A12B0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00A16C0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 408) + 6LL);
}
