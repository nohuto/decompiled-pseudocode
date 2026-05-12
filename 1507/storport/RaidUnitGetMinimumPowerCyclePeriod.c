/*
 * XREFs of RaidUnitGetMinimumPowerCyclePeriod @ 0x1C002B920
 * Callers:
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C002B5DC (RaidUnitAdaptiveIdleTimeout.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0038368 (StorpTelemetrySendAdaptiveIdleCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitGetMinimumPowerCyclePeriod(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rax

  v1 = *(_QWORD *)(a1 + 1440);
  if ( v1 && (v2 = *(_DWORD **)(v1 + 8)) != 0LL && *v2 == 3 )
    return (unsigned int)v2[5];
  else
    return 300000LL;
}
