/*
 * XREFs of NdisDllInitialize @ 0x1C0105100
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0027500 (memset.c)
 *     NdispRegisterShim @ 0x1C00AEAAC (NdispRegisterShim.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C0105190 (ndisInitializePerProcessorSlotAllocator.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  struct _NDIS_LEGACY_RWLOCK_TRACKER *PoolWithTag; // rax

  v0 = 0;
  if ( !WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.Inserted )
  {
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.Inserted = 1;
    ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
    KeQueryActiveProcessorCountEx(0);
    ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
    WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = KeGetRecommendedSharedDataAlignment();
    if ( WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey < 0x40 )
      WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = 64;
    ndisInitializePerProcessorSlotAllocator();
    if ( _InterlockedIncrement(&NumNdisDllInitialize) == 1 )
      NdispRegisterShim();
    if ( ndisMaxNumberOfProcessors > 0x100 )
    {
      PoolWithTag = (struct _NDIS_LEGACY_RWLOCK_TRACKER *)ExAllocatePoolWithTag(
                                                            NonPagedPoolNx,
                                                            520LL * ndisMaxNumberOfProcessors,
                                                            0x2020444Eu);
      ndisRWLocksOwnedByThread = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, 520LL * ndisMaxNumberOfProcessors);
      else
        return (unsigned int)-1073741801;
    }
  }
  return v0;
}
