/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C000BBE4
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000792C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C00088B8 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0008900 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0008980 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0008B70 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0008BD0 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C000BC4C (RaidAdapterRescanBus.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C0025B50 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0026BB0 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C002C928 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C002C9A8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C002CA34 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C002CAB0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C002CB2C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002CBB4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C002DF50 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C002E040 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C002E110 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C002E2E0 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C002E3B0 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C002E540 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0050D74 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0057390 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 296;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 544) & 0x10) == 0 )
  {
    *(_QWORD *)(a1 + 564) = 0LL;
    *(_QWORD *)(a1 + 572) = 0LL;
    *(_QWORD *)(a1 + 580) = 0LL;
    *(_DWORD *)(a1 + 564) = 17;
    v6 = RaCallMiniportAdapterControl(a1 + 296);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 272);
}
