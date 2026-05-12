/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C00100A0
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C001073C (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C0034B50 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0035068 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C00351B4 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C005F7C0 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x1C0034AE4 (StorWaitForSingleObject.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 648), 0xFFFFFFFF);
  v3 = 0;
  if ( v2 > 1 )
    v3 = StorWaitForSingleObject(a1 + 168);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  return v3;
}
