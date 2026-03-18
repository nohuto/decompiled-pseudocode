/*
 * XREFs of VidSchIsTDRPending @ 0x1C000B6A0
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000F5D4 (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchWaitForEvents @ 0x1C0010748 (VidSchWaitForEvents.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C00392E0 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C003A290 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C003A610 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitPagingCommand @ 0x1C003AA00 (VidSchiSubmitPagingCommand.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     VidSchSwitchFromContext @ 0x1C005ED20 (VidSchSwitchFromContext.c)
 *     VidSchiSuspend @ 0x1C006186C (VidSchiSuspend.c)
 *     VidSchiEmptyAllHwQueues @ 0x1C00619FC (VidSchiEmptyAllHwQueues.c)
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 *     VidSchiResetEngines @ 0x1C008A9C4 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C008B2F0 (VidSchFlushAdapter.c)
 *     VidSchSwitchFromDevice @ 0x1C008C020 (VidSchSwitchFromDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2440) != 0;
}
