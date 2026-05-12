/*
 * XREFs of RaUnitStoragePowerIdle @ 0x1C0031950
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponentFromIoctl @ 0x1C0033100 (RaidUnitPoFxIdleComponentFromIoctl.c)
 */

__int64 __fastcall RaUnitStoragePowerIdle(__int64 a1, IRP *a2)
{
  unsigned int v4; // edi

  v4 = -1073741823;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxIdleComponentFromIoctl(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
    v4 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
