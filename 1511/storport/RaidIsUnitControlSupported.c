/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C00102BC
 * Callers:
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C00076CC (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00085A0 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000D4F0 (RaUnitDeviceUsageNotificationIrp.c)
 *     StorPortUnitIdleCondition @ 0x1C00156B0 (StorPortUnitIdleCondition.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C002C51C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C002DB6C (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C002DBF0 (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C002DCC4 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C002DD48 (RaidUnitSendPowerToMiniport.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C002E700 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleState @ 0x1C002E960 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002EED0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002F1F0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C00319A0 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0031D30 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitStartDeviceIrp @ 0x1C00510B8 (RaUnitStartDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0052234 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0058460 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C001033C (RaCallMiniportUnitControl.c)
 */

char __fastcall RaidIsUnitControlSupported(__int64 a1, int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // r8

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 24) + 296LL;
  v4 = a2;
  if ( **(_DWORD **)(*(_QWORD *)(a1 + 24) + 528LL) == 208 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 544LL) & 8) == 0 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 548LL);
      *v5 = 0LL;
      *(_QWORD *)(v3 + 260) = 0LL;
      *(_DWORD *)(v3 + 252) = 11;
      if ( (int)RaCallMiniportUnitControl(v3, 0LL, v5) < 0 )
        return v2;
      *(_BYTE *)(v3 + 248) |= 8u;
    }
    return *(_BYTE *)(v4 + v3 + 256);
  }
  return v2;
}
