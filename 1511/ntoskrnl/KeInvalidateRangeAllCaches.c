/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x14011B944
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1401C72FC (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x1401E398C (MiPersistMemory.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400A9A70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x1400F3D78 (KeInvalidateAllCaches.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl

  if ( Length >= KiLargestCacheSize )
  {
    KeInvalidateAllCaches();
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1u, 0LL, 0LL, 0LL, 7LL, 0LL, 0LL);
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
}
