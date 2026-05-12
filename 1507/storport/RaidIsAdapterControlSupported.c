/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C00099AC
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C0005C7C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterStop @ 0x1C0006B5C (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C0006BA4 (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0006C24 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C0006E10 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0006E70 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterRescanBus @ 0x1C0009A14 (RaidAdapterRescanBus.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 *     RaidCoalescingCallback @ 0x1C00236F0 (RaidCoalescingCallback.c)
 *     RaidPowerSettingCallback @ 0x1C0024730 (RaidPowerSettingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C002A968 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C002A9E8 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C002AA74 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C002AAF0 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C002AB6C (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C002ABF4 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterActiveCondition @ 0x1C002C1E0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C002C2D0 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterIdleState @ 0x1C002C3A0 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C002C570 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C002C640 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C002C7D0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C004CFA8 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0053420 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  int v6; // eax

  v2 = a1 + 296;
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 544) & 8) == 0 )
  {
    *(_QWORD *)(a1 + 564) = 0LL;
    *(_QWORD *)(a1 + 572) = 0LL;
    *(_QWORD *)(a1 + 580) = 0LL;
    *(_DWORD *)(a1 + 564) = 17;
    v6 = RaCallMiniportAdapterControl(a1 + 296);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 8u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 272);
}
