/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C0019704
 * Callers:
 *     RaidUnitPoFxIdleComponent @ 0x1C0002F60 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0003028 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C000B700 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidUnitFreeResources @ 0x1C0014E08 (RaidUnitFreeResources.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00276B0 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterSendRPMBCommandSynchronously @ 0x1C0028520 (RaidAdapterSendRPMBCommandSynchronously.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C00289EC (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0028E54 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortUnitIdleState @ 0x1C0031BB0 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0031EE0 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C003211C (StorPortUnitPowerNotRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RaidAdapterPoFxIdleComponent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a1 + 5088);
  if ( *(_QWORD *)(v3 + 72) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(v3 + 72));
    PoFxIdleComponent(**(_QWORD **)(a1 + 5088), a2, a3);
  }
  return (*(_BYTE *)(*(_QWORD *)(a1 + 5088) + 20LL) & 1) == 0;
}
