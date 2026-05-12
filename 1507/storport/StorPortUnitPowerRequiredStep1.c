/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x1C002D5C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitReenablePendingTimer @ 0x1C002BCC0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1C002BF50 (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C002D71C (StorPortUnitPowerRequiredStep2.c)
 *     Template_pqccctx @ 0x1C002DC24 (Template_pqccctx.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(__int64 Context)
{
  unsigned __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // rcx
  int v5; // eax

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( *(_QWORD *)(Context + 1712) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1440) + 32LL) & 0x20) != 0
        || *(char *)(*(_QWORD *)(Context + 24) + 108LL) < 0 )
      {
        v2 = (MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 1712)) / 0x2710uLL;
        *(_QWORD *)(Context + 1720) += v2;
        if ( v2 >= 0x2710 )
          ++*(_DWORD *)(Context + 1760);
        if ( !*(_QWORD *)(Context + 1688) )
          *(_QWORD *)(Context + 1688) = *(_QWORD *)(*(_QWORD *)(Context + 24) + 5312LL);
      }
      *(_QWORD *)(Context + 1712) = 0LL;
    }
    ++*(_DWORD *)(Context + 1752);
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqccctx(
        *(_QWORD *)(Context + 24),
        v2,
        v3,
        **(_QWORD **)(Context + 1440),
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 88),
        *(_BYTE *)(Context + 89),
        *(_BYTE *)(Context + 90));
    RaidUnitReenablePendingTimer(Context);
    *(_DWORD *)(*(_QWORD *)(Context + 1440) + 32LL) |= 8u;
    v4 = *(_QWORD *)(Context + 1440);
    v5 = *(_DWORD *)(v4 + 32);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 32) = v5 & 0xFFFFFFEF;
    else
      *(_DWORD *)(Context + 528) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(Context + 1440) + 32LL) & 4) != 0 )
    {
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context);
    }
    StorPortUnitPowerRequiredStep2((PVOID)Context);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1432));
  }
}
