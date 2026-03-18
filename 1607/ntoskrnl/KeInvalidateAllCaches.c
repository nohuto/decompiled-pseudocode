/*
 * XREFs of KeInvalidateAllCaches @ 0x1400B5930
 * Callers:
 *     MiChangePageAttributeBatch @ 0x14001D640 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x14001DC50 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x14009D3F0 (KeFlushIoBuffers.c)
 *     MiFlushCacheMdl @ 0x140126B9C (MiFlushCacheMdl.c)
 *     KeInvalidateRangeAllCaches @ 0x1401D6C2C (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheRange @ 0x1401F499C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140030DC0 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x14009D6A8 (KxSetTimeStampBusy.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp) )
  {
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      1,
      0LL,
      0,
      0LL,
      6LL,
      (__int64 (__fastcall *)(__int64))KeSweepLocalCaches,
      0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  __writecr8(CurrentIrql);
  return 1;
}
