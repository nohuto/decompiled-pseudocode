/*
 * XREFs of RaidUnitIoCoalescingCallback @ 0x1C002B950
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002B5DC (RaidUnitAdaptiveIdleTimeout.c)
 *     RaidUnitMaintenanceTime @ 0x1C002B9DC (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitIoCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  BOOLEAN v5; // al
  unsigned __int8 v6; // cl
  __int64 v7; // r8

  v5 = RaidUnitCheckAndAcquirePoFx(a3);
  v6 = 0;
  if ( v5 )
  {
    if ( a1 == 1 )
    {
      v6 = 1;
    }
    else if ( a1 != 2 )
    {
LABEL_9:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 1432));
      return;
    }
    v7 = *(_QWORD *)(a3 + 1440);
    if ( ((*(_DWORD *)(v7 + 32) >> 8) & 1) != v6 )
    {
      *(_DWORD *)(v7 + 32) ^= ((unsigned __int16)*(_DWORD *)(v7 + 32) ^ (unsigned __int16)(v6 << 8)) & 0x100;
      if ( (*(_DWORD *)(*(_QWORD *)(a3 + 1440) + 32LL) & 0x80u) != 0 )
      {
        RaidUnitMaintenanceTime(a3);
        RaidUnitAdaptiveIdleTimeout(a3);
      }
    }
    goto LABEL_9;
  }
}
