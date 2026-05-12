/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0003308
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00017F4 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C00166FC (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C002CA7C (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C002CEF4 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C00310FC (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0031F80 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C0037C20 (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C005B544 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00196AC (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r14d
  char v9; // si
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5088) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 96LL));
    if ( *(char *)(v4 + 108) < 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1760));
    }
    v11 = *(_QWORD *)(a1 + 1456);
    if ( (*(_DWORD *)(v11 + 148) & 1) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 144));
    PoFxActivateComponent(**(_QWORD **)(a1 + 1456), a2, v6);
    v9 = (*(_BYTE *)(*(_QWORD *)(a1 + 1456) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  return v9;
}
