/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C000BD6C
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C000C390 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C00319A0 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0031D30 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0031E7C (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0058460 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x1C0031934 (StorWaitForSingleObject.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF);
  v3 = 0;
  if ( v2 > 1 )
    v3 = StorWaitForSingleObject(a1 + 160);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  return v3;
}
