/*
 * XREFs of RaUnitStoragePowerActive @ 0x1C00318F8
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00036E0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000F038 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C00330A0 (RaidUnitPoFxActivateComponentFromIoctl.c)
 */

__int64 __fastcall RaUnitStoragePowerActive(__int64 a1, IRP *a2)
{
  unsigned int v4; // edi

  v4 = -1073741823;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxActivateComponentFromIoctl(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1432));
    v4 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
