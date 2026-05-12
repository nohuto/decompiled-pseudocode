/*
 * XREFs of RaidUnitCancelWaitWakeIrp @ 0x1C000A8CC
 * Callers:
 *     StorPortUnitPoFxD0Completion @ 0x1C000A834 (StorPortUnitPoFxD0Completion.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0030230 (RaUnitDeregisterFromIdleDetection.c)
 *     StorPortUnitPoFxD3Completion @ 0x1C0031EE0 (StorPortUnitPoFxD3Completion.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 */

BOOLEAN __fastcall RaidUnitCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN v2; // di
  IRP *v3; // rcx

  v2 = 1;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v3 = *(IRP **)(*(_QWORD *)(a1 + 1456) + 64LL);
    if ( v3 )
    {
      v2 = IoCancelIrp(v3);
      *(_QWORD *)(*(_QWORD *)(a1 + 1456) + 64LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  return v2;
}
