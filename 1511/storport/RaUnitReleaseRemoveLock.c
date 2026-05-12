/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C00047F4
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0003080 (RaUnitScsiIrp.c)
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 *     RaUnitPnpIrp @ 0x1C00041C8 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 *     RaUnitStartIo @ 0x1C0004AC0 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C0007C30 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0007E80 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0009650 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C0010ED8 (RaidUnitReleaseIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0023508 (RaidAdapterCheckWaitTimeout.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C002DB30 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidCancelIrp @ 0x1C0031048 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0031D30 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0031E7C (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0031F00 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0033700 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0033E60 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0034560 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C0034B40 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     StorpLogPerUnitStatistics @ 0x1C00393B0 (StorpLogPerUnitStatistics.c)
 *     StorpSmartAttributesWorkItemRoutine @ 0x1C0039CF0 (StorpSmartAttributesWorkItemRoutine.c)
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0058460 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
  return result;
}
