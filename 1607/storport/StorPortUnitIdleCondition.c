/*
 * XREFs of StorPortUnitIdleCondition @ 0x1C00096A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0009820 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0030DE0 (RaidUnitAdaptiveIdleTimeout.c)
 *     Template_pqcccq @ 0x1C0032840 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitIdleCondition(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  int v5; // r8d
  __int64 v6; // rdx

  if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
  {
    if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_pqcccq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitIdleConditionStart,
        v4,
        **(_QWORD **)(a1 + 1456),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2);
    *(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) &= ~2u;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 0x80u) != 0 )
      RaidUnitAdaptiveIdleTimeout(a1);
    if ( !*(_BYTE *)(a1 + 439) )
      *(_BYTE *)(a1 + 439) = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 4) != 0 && (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
      RaidUnitSendPoFxActiveToMiniport(a1, v6, 0LL);
    PoFxCompleteIdleCondition(**(_QWORD **)(a1 + 1456), a2);
    if ( StorEtwLoggingEnabled )
    {
      if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
        Template_pqcccq(
          *(_QWORD *)(a1 + 24),
          (unsigned int)&EventUnitIdleConditionStop,
          v5,
          **(_QWORD **)(a1 + 1456),
          *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
          *(_BYTE *)(a1 + 88),
          *(_BYTE *)(a1 + 89),
          *(_BYTE *)(a1 + 90),
          a2);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
}
