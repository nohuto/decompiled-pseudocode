/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C00196AC
 * Callers:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0003308 (RaidUnitPoFxActivateComponent.c)
 *     RaidStartIoPacket @ 0x1C0003FF0 (RaidStartIoPacket.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C000A488 (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C0014634 (RaidCreateUnit.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C002CE94 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C0031BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00324C0 (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C005E544 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 72LL));
  if ( *(char *)(a1 + 108) < 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5400));
    if ( (*(_BYTE *)(a1 + 109) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5408));
  }
  PoFxActivateComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return *(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1;
}
