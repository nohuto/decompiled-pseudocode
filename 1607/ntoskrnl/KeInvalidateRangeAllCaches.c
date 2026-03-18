/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x1401D6C2C
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1401D62A8 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x1401EDA3C (MiPersistMemory.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14001DC50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KiIpiSendRequestEx @ 0x140030DC0 (KiIpiSendRequestEx.c)
 *     KeInvalidateAllCaches @ 0x1400B5930 (KeInvalidateAllCaches.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1, 0LL, 0, 0LL, 7LL, 0LL, 0LL);
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
