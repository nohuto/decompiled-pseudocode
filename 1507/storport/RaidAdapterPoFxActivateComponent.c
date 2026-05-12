/*
 * XREFs of RaidAdapterPoFxActivateComponent @ 0x1C0021C84
 * Callers:
 *     RaidStartIoPacket @ 0x1C0001C90 (RaidStartIoPacket.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C00062EC (RaidUnitSetDevicePowerIrp.c)
 *     RaidCreateUnit @ 0x1C000DEF0 (RaidCreateUnit.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C000E438 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C000EFC8 (RaidUnitPoFxActivateComponent.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0022EE8 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     RaidAdapterPoFxActivateComponentFromMiniport @ 0x1C0027074 (RaidAdapterPoFxActivateComponentFromMiniport.c)
 *     StorPortUnitIdleState @ 0x1C002CD30 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C002D71C (StorPortUnitPowerRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0053274 (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAdapterPoFxActivateComponent(__int64 a1, __int64 a2, __int64 a3)
{
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 5088) + 72LL));
  if ( *(char *)(a1 + 108) < 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5376));
    if ( (*(_BYTE *)(a1 + 109) & 1) != 0 )
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5384));
  }
  PoFxActivateComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  return *(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1;
}
