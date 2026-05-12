/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C000207C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0001A28 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C0001D30 (RaUnitDeviceControlIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaUnitPowerIrp @ 0x1C000A1B4 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C000A33C (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000A488 (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000A660 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitProcessBusyRequest @ 0x1C000BDF0 (RaidUnitProcessBusyRequest.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0011168 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterCheckWaitTimeout @ 0x1C00268C8 (RaidAdapterCheckWaitTimeout.c)
 *     RaUnitStartResetIo @ 0x1C0035FD4 (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0036DC4 (RaidUnitAbortSrb.c)
 *     StorpLogPerUnitStatistics @ 0x1C003D150 (StorpLogPerUnitStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C005B20C (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C00020AC (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1)
{
  int v1; // ebx
  struct _KEVENT *v2; // r10

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  v1 = RaUnitCheckRemoveState();
  if ( v1 < 0 && _InterlockedExchangeAdd(&v2[27].Header.Lock, 0xFFFFFFFF) == 1 )
    KeSetEvent(v2 + 7, 0, 0);
  return (unsigned int)v1;
}
