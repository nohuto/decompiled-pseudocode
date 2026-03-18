/*
 * XREFs of KeInvalidateAllCaches @ 0x140139E60
 * Callers:
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x1400E5C30 (KeInvalidateRangeAllCachesNoIpi.c)
 *     KeFlushIoBuffers @ 0x1401179F8 (KeFlushIoBuffers.c)
 *     MiFlushCacheMdl @ 0x14014C9D0 (MiFlushCacheMdl.c)
 *     KeInvalidateRangeAllCaches @ 0x14015A4C0 (KeInvalidateRangeAllCaches.c)
 *     MiFlushCacheRange @ 0x14022D8D8 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

BOOLEAN KeInvalidateAllCaches(void)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbp
  unsigned int v2; // ebx
  char v3; // cl
  int v4; // edi

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  _m_prefetchw(&KiCacheFlushTimeStamp);
  v3 = KiCacheFlushTimeStamp;
  v4 = KiCacheFlushTimeStamp;
  while ( (v3 & 1) != 0 || _interlockedbittestandset(&KiCacheFlushTimeStamp, 0) )
  {
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    v3 = KiCacheFlushTimeStamp;
    if ( KiCacheFlushTimeStamp - v4 >= 3 || KiCacheFlushTimeStamp - v4 >= 2 && (v4 & 1) == 0 )
      goto LABEL_13;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    1LL,
    0LL,
    0,
    0LL,
    6LL,
    (__int64 (__fastcall *)(__int64, __int64))KeSweepLocalCaches,
    0LL);
  _InterlockedIncrement(&KiCacheFlushTimeStamp);
LABEL_13:
  __writecr8(CurrentIrql);
  return 1;
}
