/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140678DEC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140676E00 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x140677018 (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x140677DFC (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x140677F44 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1406780AC (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x140678100 (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x140678200 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140678268 (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x140678A28 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x140678B14 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerStateChange @ 0x140678C1C (TtmNotifySessionPowerStateChange.c)
 *     TtmpDispatchEvacuateDevices @ 0x140679ADC (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
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
