/*
 * XREFs of RaidIsAdapterControlSupported @ 0x1C000FF08
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C000A01C (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRestartAdapter @ 0x1C000A914 (RaidAdapterRestartAdapter.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C000A980 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterStopOnPowerdown @ 0x1C000BD20 (RaidAdapterStopOnPowerdown.c)
 *     RaidAdapterStop @ 0x1C000CA80 (RaidAdapterStop.c)
 *     RaidAdapterStopAdapter @ 0x1C000CAC8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C000D588 (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterRescanBus @ 0x1C000FF70 (RaidAdapterRescanBus.c)
 *     RaidPowerSettingCallback @ 0x1C0018A10 (RaidPowerSettingCallback.c)
 *     StorPortAdapterActiveCondition @ 0x1C00194E0 (StorPortAdapterActiveCondition.c)
 *     StorPortAdapterIdleCondition @ 0x1C0019590 (StorPortAdapterIdleCondition.c)
 *     RaidAdapterSendPoFxActiveToMiniport @ 0x1C0019620 (RaidAdapterSendPoFxActiveToMiniport.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0019C00 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaidAdapterSendPowerToMiniport @ 0x1C0019DEC (RaidAdapterSendPowerToMiniport.c)
 *     RaidCoalescingCallback @ 0x1C00295F0 (RaidCoalescingCallback.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C0030788 (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C0030808 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x1C0030890 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x1C003090C (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterIdleState @ 0x1C0031750 (StorPortAdapterIdleState.c)
 *     StorPortAdapterPowerControl @ 0x1C0031920 (StorPortAdapterPowerControl.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C00319F0 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0058020 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0058960 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C005E6F0 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C000EE90 (RaCallMiniportAdapterControl.c)
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
    *(_DWORD *)(a1 + 564) = 18;
    v6 = RaCallMiniportAdapterControl(a1 + 296);
    v4 = 0;
    if ( v6 < 0 )
      return v4;
    *(_BYTE *)(v2 + 248) |= 0x10u;
  }
  return *(unsigned __int8 *)(v3 + v2 + 272);
}
