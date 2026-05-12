/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C0002F60
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00017F4 (RaUnitScsiMiniportIoctl.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C000A834 (StorPortUnitPoFxD0Completion.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C002A39C (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0030230 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0030F90 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C00324C0 (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C0037434 (RaidUnitEndDeviceBusy.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0037C80 (RaidUnitPoFxIdleComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
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
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx() )
    {
      v12 = *(_QWORD *)(a1 + 1456);
      if ( *(_QWORD *)(v12 + 96) )
      {
        _InterlockedDecrement64((volatile signed __int64 *)(v12 + 96));
        PoFxIdleComponent(**(_QWORD **)(a1 + 1456), a2, a3);
        v5 = 1;
        v6 = (*(_BYTE *)(*(_QWORD *)(a1 + 1456) + 32LL) & 2) == 0;
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
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
