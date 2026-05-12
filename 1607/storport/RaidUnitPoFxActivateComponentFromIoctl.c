/*
 * XREFs of RaidUnitPoFxActivateComponentFromIoctl @ 0x1C0037C20
 * Callers:
 *     RaUnitStoragePowerActive @ 0x1C00362F0 (RaUnitStoragePowerActive.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0003308 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0003544 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromIoctl(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 40LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  result = *(_QWORD *)(v1 + 5088);
  if ( result )
    _InterlockedIncrement64((volatile signed __int64 *)(result + 80));
  return result;
}
