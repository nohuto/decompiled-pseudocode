/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C000EEC4
 * Callers:
 *     RaidPnPPassToMiniPort @ 0x1C000E6FC (RaidPnPPassToMiniPort.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C000F810 (RaUnitScsiMiniportIoctl.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0024A58 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C002A55C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C002B840 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C002D058 (StorPortUnitPoFxD0Completion.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C002D71C (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C00329D0 (RaidUnitEndDeviceBusy.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0033100 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C004E658 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C004EBFC (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitPoFxIdleComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // bl
  bool v10; // di
  __int64 v12; // rax
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      v12 = *(_QWORD *)(a1 + 1440);
      if ( *(_QWORD *)(v12 + 96) )
      {
        _InterlockedDecrement64((volatile signed __int64 *)(v12 + 96));
        PoFxIdleComponent(**(_QWORD **)(a1 + 1440), a2, a3);
        v5 = 1;
        v6 = (*(_BYTE *)(*(_QWORD *)(a1 + 1440) + 32LL) & 2) == 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
    }
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(v4 + 5088) )
    {
      v13 = RaidAdapterPoFxIdleComponent(v4, 0LL, a3);
      if ( !v5 )
        return v13;
    }
  }
  return v6;
}
