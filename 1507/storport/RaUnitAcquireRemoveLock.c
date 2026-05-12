/*
 * XREFs of RaUnitAcquireRemoveLock @ 0x1C0003998
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0003418 (RaUnitPnpIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 *     RaUnitPowerIrp @ 0x1C0005F50 (RaUnitPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C00061A0 (RaidUnitSetSystemPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C00062EC (RaidUnitSetDevicePowerIrp.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C000695C (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitProcessBusyRequest @ 0x1C0010838 (RaidUnitProcessBusyRequest.c)
 *     RaUnitStartResetIo @ 0x1C00315DC (RaUnitStartResetIo.c)
 *     RaidUnitAbortSrb @ 0x1C0032448 (RaidUnitAbortSrb.c)
 *     StorpLogPerUnitStatistics @ 0x1C0037550 (StorpLogPerUnitStatistics.c)
 *     RaWmiDispatchIrp @ 0x1C004F22C (RaWmiDispatchIrp.c)
 * Callees:
 *     RaUnitCheckRemoveState @ 0x1C00039C8 (RaUnitCheckRemoveState.c)
 */

__int64 __fastcall RaUnitAcquireRemoveLock(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r10

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
  v1 = RaUnitCheckRemoveState();
  if ( v1 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 624), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v2 + 160), 0, 0);
  return (unsigned int)v1;
}
