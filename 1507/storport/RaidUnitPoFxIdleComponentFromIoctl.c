/*
 * XREFs of RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0033100
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C0031950 (RaUnitStoragePowerIdle.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C000EEC4 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromIoctl(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  RaidUnitPoFxIdleComponent(a1, 0, 2u, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1440) + 40LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
  }
  result = *(_QWORD *)(v1 + 5088);
  if ( result )
    _InterlockedDecrement64((volatile signed __int64 *)(result + 80));
  return result;
}
