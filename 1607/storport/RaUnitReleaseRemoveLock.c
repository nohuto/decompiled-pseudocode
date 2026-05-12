/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C0002064
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitScsiIrp @ 0x1C0003BC0 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     RaUnitStartIo @ 0x1C0004940 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C000A1B4 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000A33C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C000B3C0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000B700 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C00268C8 (RaidAdapterCheckWaitTimeout.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C0031310 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidCancelIrp @ 0x1C0034368 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0035068 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00351B4 (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0035238 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0036960 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0036FB0 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0037760 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C003CBE0 (StorpDeviceHealthWorkItemRoutine.c)
 *     StorpLogPerUnitStatistics @ 0x1C003D150 (StorpLogPerUnitStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C005B20C (RaWmiDispatchIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005F7C0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(struct _KEVENT *a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd(&a1[27].Header.Lock, 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(a1 + 7, 0, 0);
  return result;
}
