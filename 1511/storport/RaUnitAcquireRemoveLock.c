/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C000480C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00041C8 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 *     RaUnitPowerIrp @ 0x1C0007C30 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0007E80 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0007FCC (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0008688 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000999C (RaidUnitProcessBusyRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C0023508 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C0032E44 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0033CA8 (RaidUnitAbortSrb.c)
 *     StorpLogPerUnitStatistics @ 0x1C00393B0 (StorpLogPerUnitStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C0052F8C (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C000483C (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r10

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  v1 = RaUnitCheckRemoveState();
  if ( v1 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 648), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v2 + 160), 0, 0);
  return (unsigned int)v1;
}
