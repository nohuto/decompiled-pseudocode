/*
 * XREFs of UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140037DA0
 * Callers:
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE_UNORDERED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rbx

  *(_BYTE *)(a1 + 1732) &= ~1u;
  v2 = a2 + 872;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 872), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 872));
  KeAbPostRelease(v2);
  return KiLeaveGuardedRegionUnsafe(a1);
}
