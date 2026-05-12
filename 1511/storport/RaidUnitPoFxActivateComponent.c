/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0011398
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C00106B4 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C0028F00 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C00294FC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C002D91C (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C002EE10 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C0034A0C (RaidUnitPoFxActivateComponentFromIoctl.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00523C0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C00077E0 (RaidAdapterPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
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
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1744));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1752));
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
