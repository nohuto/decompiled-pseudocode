/*
 * XREFs of RaidUnitPoFxActivateComponentFromMiniport @ 0x1C00294FC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0011398 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxActivateComponentFromMiniport(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  char v5; // di
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v5 = RaidUnitPoFxActivateComponent(a1, a2, a3, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 48LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  v6 = *(_QWORD *)(v3 + 5088);
  if ( v6 )
    _InterlockedIncrement64((volatile signed __int64 *)(v6 + 88));
  return v5 == 0 ? 0xC100000C : 0;
}
