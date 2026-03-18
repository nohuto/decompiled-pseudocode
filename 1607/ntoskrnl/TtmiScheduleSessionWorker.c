/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140678D08
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140676D1C (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x140676F34 (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x140677D18 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x140677E60 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x140677FC8 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x14067801C (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x14067811C (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140678184 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x140678944 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678A30 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678B38 (TtmNotifySessionPowerStateChange.c)
 *     TtmpDispatchEvacuateDevices @ 0x1406799F8 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 152) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 120), DelayedWorkQueue);
  }
}
