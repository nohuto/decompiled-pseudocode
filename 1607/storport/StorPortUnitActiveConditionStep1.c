/*
 * XREFs of StorPortUnitActiveConditionStep1 @ 0x1C00033F0
 * Callers:
 *     <none>
 * Callees:
 *     StorPortUnitActiveConditionStep2 @ 0x1C0003468 (StorPortUnitActiveConditionStep2.c)
 *     RaidUnitSendPoFxActiveToMiniport @ 0x1C0009820 (RaidUnitSendPoFxActiveToMiniport.c)
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     Template_pqcccq @ 0x1C0032840 (Template_pqcccq.c)
 */

void __fastcall StorPortUnitActiveConditionStep1(__int64 a1, unsigned int a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( *(char *)(a1 + 153) < 0 && ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448)) )
  {
    if ( StorEtwLoggingEnabled && (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_pqcccq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitActiveConditionStart,
        v4,
        **(_QWORD **)(a1 + 1456),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        *(_BYTE *)(a1 + 89),
        *(_BYTE *)(a1 + 90),
        a2);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1456) + 32LL) & 4) != 0 )
    {
      if ( (unsigned __int8)RaidIsUnitControlSupported(a1, 6LL) )
      {
        LOBYTE(v6) = 1;
        RaidUnitSendPoFxActiveToMiniport(a1, v5, v6);
      }
    }
    StorPortUnitActiveConditionStep2(a1, a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
}
