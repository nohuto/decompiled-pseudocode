/*
 * XREFs of StorPortUnitIdleCondition @ 0x1C002CBF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C000E04C (RaidIsUnitControlSupported.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002B5DC (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C002BD6C (RaidUnitSendPoFxActiveToMiniport.c)
 *     Template_pqcccq @ 0x1C002D894 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  int v5; // r8d

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
      Template_pqcccq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStart,
        v4,
        **(_QWORD **)(a1 + 1440),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2);
    *(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL) &= ~2u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL) & 0x80u) != 0 )
      RaidUnitAdaptiveIdleTimeout(a1);
    if ( !*(_BYTE *)(a1 + 439) )
      *(_BYTE *)(a1 + 439) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1440) + 32LL) & 4) != 0 && RaidIsUnitControlSupported(a1, 6) )
      RaidUnitSendPoFxActiveToMiniport(a1);
    PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1440), a2);
    if ( StorEtwLoggingEnabled )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
        Template_pqcccq(
          *(_QWORD *)(a1 + 24),
          (unsigned int)&EventUnitIdleConditionStop,
          v5,
          **(_QWORD **)(a1 + 1440),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          a2);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
  }
}
