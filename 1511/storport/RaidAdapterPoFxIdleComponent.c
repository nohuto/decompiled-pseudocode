/*
 * XREFs of RaidAdapterPoFxIdleComponent @ 0x1C00078B0
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C0009650 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0011294 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitFreeResources @ 0x1C0011CBC (RaidUnitFreeResources.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C00242C4 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0024FE0 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     RaidAdapterSendSrbProtocolCommandSynchronously @ 0x1C0025428 (RaidAdapterSendSrbProtocolCommandSynchronously.c)
 *     StorPortUnitIdleState @ 0x1C002E960 (StorPortUnitIdleState.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C002ED70 (StorPortUnitPoFxD3Completion.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C002EFAC (StorPortUnitPowerNotRequiredStep2.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
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
