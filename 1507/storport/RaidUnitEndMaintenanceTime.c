/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x1C002B840
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitMaintenanceTime @ 0x1C002B9DC (RaidUnitMaintenanceTime.c)
 *     Template_qccctq @ 0x1C002E2B4 (Template_qccctq.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  int v3; // r8d
  __int64 v4; // rcx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v4 = *(_QWORD *)(a2 + 1440);
    if ( (*(_DWORD *)(v4 + 148) & 1) != 0 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_qccctq(
          *(_DWORD *)(v4 + 144) == 0,
          *(_QWORD *)(a2 + 24),
          v3,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 88),
          *(_BYTE *)(a2 + 89),
          *(_BYTE *)(a2 + 90),
          *(_DWORD *)(v4 + 144) == 0,
          *(_DWORD *)(v4 + 144));
      *(_DWORD *)(*(_QWORD *)(a2 + 1440) + 148LL) &= ~1u;
      RaidUnitPoFxIdleComponent(a2, 0, 0, 0LL);
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 1440) + 144LL) )
        RaidUnitMaintenanceTime(a2);
      else
        *(_QWORD *)(*(_QWORD *)(a2 + 1440) + 136LL) = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1432));
  }
}
