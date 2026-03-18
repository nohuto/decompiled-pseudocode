/*
 * XREFs of KeInvalidateRangeAllCaches @ 0x14015A4C0
 * Callers:
 *     KiFlushRangeAllCaches @ 0x140203F24 (KiFlushRangeAllCaches.c)
 *     MiPersistMemory @ 0x140230CF4 (MiPersistMemory.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400E5C30 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeInvalidateAllCaches @ 0x140139E60 (KeInvalidateAllCaches.c)
 */

void __stdcall KeInvalidateRangeAllCaches(PVOID BaseAddress, ULONG Length)
{
  unsigned __int8 CurrentIrql; // bl

  if ( Length < KiLargestCacheSize )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1LL, 0LL, 0, 0LL, 7LL, 0LL, 0LL);
    __writecr8(CurrentIrql);
    KeInvalidateRangeAllCachesNoIpi((__int64)BaseAddress, Length);
  }
  else
  {
    KeInvalidateAllCaches();
  }
}
