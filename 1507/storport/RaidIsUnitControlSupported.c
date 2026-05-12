/*
 * XREFs of RaidIsUnitControlSupported @ 0x1C000E04C
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0006890 (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C000B288 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C002A55C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C002BD6C (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidUnitSendPoFxIdleStateToMiniport @ 0x1C002BDF8 (RaidUnitSendPoFxIdleStateToMiniport.c)
 *     RaidUnitSendPoFxPowerControlToMiniport @ 0x1C002BE7C (RaidUnitSendPoFxPowerControlToMiniport.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C002BF50 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     RaidUnitSendPowerToMiniport @ 0x1C002BFD4 (RaidUnitSendPowerToMiniport.c)
 *     StorPortUnitActiveConditionStep1 @ 0x1C002C990 (StorPortUnitActiveConditionStep1.c)
 *     StorPortUnitIdleCondition @ 0x1C002CBF0 (StorPortUnitIdleCondition.c)
 *     StorPortUnitIdleState @ 0x1C002CD30 (StorPortUnitIdleState.c)
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C002D2A0 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerRequiredStep1 @ 0x1C002D5C0 (StorPortUnitPowerRequiredStep1.c)
 *     RaUnitAdapterRemove @ 0x1C0030880 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C004D334 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitStartDeviceIrp @ 0x1C004D4DC (RaUnitStartDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaCallMiniportUnitControl @ 0x1C000E0CC (RaCallMiniportUnitControl.c)
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
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 24) + 544LL) & 4) == 0 )
    {
      v5 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 548LL);
      *v5 = 0LL;
      *(_QWORD *)(v3 + 260) = 0LL;
      *(_DWORD *)(v3 + 252) = 11;
      if ( (int)RaCallMiniportUnitControl(v3, 0LL, v5) < 0 )
        return v2;
      *(_BYTE *)(v3 + 248) |= 4u;
    }
    return *(_BYTE *)(v4 + v3 + 256);
  }
  return v2;
}
