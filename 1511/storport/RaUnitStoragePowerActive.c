/*
 * XREFs of RaUnitStoragePowerActive @ 0x1C0033160
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0011408 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxActivateComponentFromIoctl @ 0x1C0034A0C (RaidUnitPoFxActivateComponentFromIoctl.c)
 */

__int64 __fastcall RaUnitStoragePowerActive(__int64 a1, IRP *a2)
{
  unsigned int v4; // edi

  v4 = -1073741823;
  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    RaidUnitPoFxActivateComponentFromIoctl(a1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1448));
    v4 = 0;
  }
  return RaidCompleteRequestEx(a2, 0, v4);
}
