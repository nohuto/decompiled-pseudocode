/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x1401D6A58
 * Callers:
 *     KiFlushRangeAllCaches @ 0x1401D60D4 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x1401ED868 (MiPersistMemory.c)
 * Callees:
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14001D7D0 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KiIpiSendRequestEx @ 0x140030940 (KiIpiSendRequestEx.c)
 *     KeInvalidateAllCaches @ 0x1400B3758 (KeInvalidateAllCaches.c)
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
