/*
 * XREFs of RaUnitReleaseRemoveLock @ 0x1C0003980
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 *     RaUnitStartIo @ 0x1C0003C00 (RaUnitStartIo.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaUnitPowerIrp @ 0x1C0005F50 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00061A0 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0007820 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitReleaseIrp @ 0x1C000EBBC (RaidUnitReleaseIrp.c)
 *     RaidUnitSavePowerCycleCountWorker @ 0x1C002BD30 (RaidUnitSavePowerCycleCountWorker.c)
 *     RaidCancelIrp @ 0x1C002FF58 (RaidCancelIrp.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0030D5C (RaUnitDisableDeviceIrp.c)
 *     RaUnitFlushQueueSrb @ 0x1C0030DE0 (RaUnitFlushQueueSrb.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidHierarchicalResetWorkRoutine @ 0x1C0031EA0 (RaidHierarchicalResetWorkRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0032600 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0032C80 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaidUnitQuiesceDeviceWorkRoutine @ 0x1C00331D0 (RaidUnitQuiesceDeviceWorkRoutine.c)
 *     StorpLogPerUnitStatistics @ 0x1C0037550 (StorpLogPerUnitStatistics.c)
 *     StorpSmartAttributesWorkItemRoutine @ 0x1C0037E60 (StorpSmartAttributesWorkItemRoutine.c)
 *     RaWmiDispatchIrp @ 0x1C004F22C (RaWmiDispatchIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RaUnitReleaseRemoveLock(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent((PRKEVENT)(a1 + 160), 0, 0);
  return result;
}
