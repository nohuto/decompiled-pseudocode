/*
 * XREFs of ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0102140
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ @ 0x1C00D6DF0 (-ndisCalculateIdealNblTrackerHistoryBufferSize@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1C0102200 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 */

void ndisNblTrackerInitialize(void)
{
  ULONG v0; // esi
  ULONG v1; // edi
  unsigned __int64 *PoolWithTag; // rax

  ndisNblTrackerReadConfiguration();
  qword_1C0085980 = (__int64)&ndisNblTrackerList;
  ndisNblTrackerList = (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
  KeInitializeSpinLock(&ndisNblTrackerListLock);
  if ( ndisNblTrackerMode >= NdisTrackNblRuntimeCheck )
  {
    v0 = ndisNblTrackerNblTimeoutMilliseconds >> 2;
    v1 = ndisNblTrackerNblTimeoutMilliseconds + (ndisNblTrackerNblTimeoutMilliseconds >> 2);
    KeInitializeDpc(&ndisNblTrackerDpc, (PKDEFERRED_ROUTINE)ndisNblTrackerWatchdogTimer, 0LL);
    KeInitializeTimer(&ndisNblTrackerTimer);
    KeSetCoalescableTimer(&ndisNblTrackerTimer, (LARGE_INTEGER)(-10000LL * v1), v1, v0, &ndisNblTrackerDpc);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisCalculateIdealNblTrackerHistoryBufferSize();
      PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          8LL * ndisNblTrackerHistorySize,
                                          0x6B74444Eu);
      ndisNblTrackerHistoryBuffer = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 8LL * ndisNblTrackerHistorySize);
      else
        ndisNblTrackerMode = NdisTrackNblRuntimeCheck;
    }
  }
}
