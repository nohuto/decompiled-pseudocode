/*
 * XREFs of RaUnitWaitForRemoveLock @ 0x1C0009B34
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C000A158 (RaidDeleteBusEnumerator.c)
 *     RaUnitAdapterRemove @ 0x1C0030880 (RaUnitAdapterRemove.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0030C10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x1C0030D5C (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x1C0054520 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     StorWaitForSingleObject @ 0x1C0030810 (StorWaitForSingleObject.c)
 */

__int64 __fastcall RaUnitWaitForRemoveLock(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 624), 0xFFFFFFFF);
  v3 = 0;
  if ( v2 > 1 )
    v3 = StorWaitForSingleObject(a1 + 160);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 624));
  return v3;
}
