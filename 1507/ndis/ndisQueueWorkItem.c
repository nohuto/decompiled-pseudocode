/*
 * XREFs of ndisQueueWorkItem @ 0x1C000FD5C
 * Callers:
 *     ndisCreatePMRejectWorkItem @ 0x1C0002EAC (ndisCreatePMRejectWorkItem.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C000FC80 (ndisSetDevicePowerOnComplete.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C00434BC (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00435B8 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0044300 (ndisCreatePMAddRemoveWorkItem.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004C300 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0056A24 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C005B670 (NdisMAllocateSharedMemoryAsync.c)
 *     ndisMFinishClose @ 0x1C00E7034 (ndisMFinishClose.c)
 *     NdisOpenAdapterEx @ 0x1C00E9A60 (NdisOpenAdapterEx.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F2CB0 (NdisCmRegisterAddressFamily.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkItem(PLIST_ENTRY Entry)
{
  KIRQL v1; // bl

  KeInsertQueue(&ndisWorkerQueue, Entry);
  _InterlockedIncrement(&ndisWorkerQueueItemCount);
  v1 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !ndisThreadPoolTimerQueued )
  {
    ndisThreadPoolTimerQueued = 1;
    KeSetTimer(&ndisThreadPoolTimer, *(LARGE_INTEGER *)&WPP_MAIN_CB.DeviceQueue.Type, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v1);
}
