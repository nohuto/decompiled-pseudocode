/*
 * XREFs of RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0026EF8
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00016A0 (RaidUnitCompleteRequest.c)
 *     StorPortExtendedFunction @ 0x1C0006190 (StorPortExtendedFunction.c)
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C0010744 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidPnPPassToMiniPort @ 0x1C0010A08 (RaidPnPPassToMiniPort.c)
 *     RaidUnitCompleteResetRequest @ 0x1C0033F70 (RaidUnitCompleteResetRequest.c)
 *     RaWmiPassToMiniPort @ 0x1C00529B0 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0011294 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 */

__int64 __fastcall RaidUnitPoFxIdleComponentFromMiniport(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  bool v4; // di
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 24);
  v4 = RaidUnitPoFxIdleComponent(a1, a2, 0, 0LL);
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1456) + 48LL));
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
  }
  v5 = *(_QWORD *)(v2 + 5088);
  if ( v5 )
    _InterlockedDecrement64((volatile signed __int64 *)(v5 + 88));
  return !v4 ? 0xC100000C : 0;
}
