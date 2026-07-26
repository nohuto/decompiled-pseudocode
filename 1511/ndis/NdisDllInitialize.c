/*
 * XREFs of NdisDllInitialize @ 0x1C00FC060
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     NdispRegisterShim @ 0x1C0099FC0 (NdispRegisterShim.c)
 *     ndisInitializePerProcessorSlotAllocator @ 0x1C00FC0F4 (ndisInitializePerProcessorSlotAllocator.c)
 */

__int64 NdisDllInitialize()
{
  unsigned int v0; // ebx
  struct _NDIS_LEGACY_RWLOCK_TRACKER *PoolWithTag; // rax

  v0 = 0;
  if ( !LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) )
  {
    LOBYTE(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
    ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
    ndisNumberOfActiveGroup0ProcessorsAtBoot = KeQueryActiveProcessorCountEx(0);
    ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
    *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = KeGetRecommendedSharedDataAlignment();
    if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) < 0x40u )
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 64;
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
