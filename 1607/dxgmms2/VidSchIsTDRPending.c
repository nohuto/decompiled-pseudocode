/*
 * XREFs of VidSchIsTDRPending @ 0x1C000A130
 * Callers:
 *     VidSchWaitForEvents @ 0x1C0001E3C (VidSchWaitForEvents.c)
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiFinishMeasuringPreemptionTime @ 0x1C000E45C (VidSchiFinishMeasuringPreemptionTime.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C00273D0 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchSwitchFromContext @ 0x1C0040B10 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C0040FC0 (VidSchSwitchFromDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0042840 (VidSchiSubmitPagingCommand.c)
 *     VidSchiWaitForSchedulerEvents @ 0x1C00433D0 (VidSchiWaitForSchedulerEvents.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiSuspend @ 0x1C00689A8 (VidSchiSuspend.c)
 *     VidSchiEmptyAllHwQueues @ 0x1C0068AE8 (VidSchiEmptyAllHwQueues.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0068BF8 (VidSchiPreemptEngineNodes.c)
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00A0078 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00A01A0 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchIsTDRPending(__int64 a1)
{
  return *(_DWORD *)(a1 + 2800) != 0;
}
