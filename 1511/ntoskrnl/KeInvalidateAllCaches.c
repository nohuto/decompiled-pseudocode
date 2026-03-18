/*
 * XREFs of KeInvalidateAllCaches @ 0x1400F3D78
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400A9A70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x1400E249C (KeFlushIoBuffers.c)
 *     MiFlushCacheMdl @ 0x140117A20 (MiFlushCacheMdl.c)
 *     KeInvalidateRangeAllCaches @ 0x14011B944 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheRange @ 0x1401E1D4C (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x14007C440 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1400E2F30 (KxSetTimeStampBusy.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( KxSetTimeStampBusy(&KiCacheFlushTimeStamp, v0, v1) )
  {
    KiIpiSendRequestEx(
      (__int64)CurrentPrcb,
      1u,
      0LL,
      0LL,
      0LL,
      6LL,
      (__int64 (__fastcall *)(__int64))KeSweepLocalCaches,
      0LL);
    _InterlockedIncrement(&KiCacheFlushTimeStamp);
  }
  __writecr8(CurrentIrql);
  return 1;
}
