/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x1C002D2A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C002BCC0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C002BF50 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C002D37C (StorPortUnitPowerNotRequiredStep2.c)
 *     Template_pqccctq @ 0x1C002DB50 (Template_pqccctq.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep1(__int64 Context)
{
  int v2; // edx
  int v3; // r8d

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqccctq(
        *(_QWORD *)(Context + 24),
        v2,
        v3,
        **(_QWORD **)(Context + 1440),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90));
    RaidUnitReenablePendingTimer(Context);
    *(_DWORD *)(*(_QWORD *)(Context + 1440) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 528) = 0;
    if ( *(_DWORD *)(Context + 632) && (*(_BYTE *)(Context + 145) & 0x40) != 0 )
      *(_BYTE *)(Context + 1430) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1440) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1432));
  }
}
