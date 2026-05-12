/*
 * XREFs of StorPortUnitPowerNotRequiredStep1 @ 0x1C002EED0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitReenablePendingTimer @ 0x1C000758C (RaidUnitReenablePendingTimer.c)
 *     RaidIsUnitControlSupported @ 0x1C00102BC (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C002DCC4 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerNotRequiredStep2 @ 0x1C002EFAC (StorPortUnitPowerNotRequiredStep2.c)
 *     Template_pqccctq @ 0x1C002F784 (Template_pqccctq.c)
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
        **(_QWORD **)(Context + 1456),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90));
    RaidUnitReenablePendingTimer(Context, 0);
    *(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) &= ~8u;
    *(_DWORD *)(Context + 552) = 0;
    if ( *(_DWORD *)(Context + 656) && (*(_BYTE *)(Context + 145) & 0x40) != 0 )
      *(_BYTE *)(Context + 1446) = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1456) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerNotRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1448));
  }
}
