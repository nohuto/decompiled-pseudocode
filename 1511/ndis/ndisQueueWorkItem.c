/*
 * XREFs of ndisQueueWorkItem @ 0x1C0014314
 * Callers:
 *     ndisCreatePMRejectWorkItem @ 0x1C00049E8 (ndisCreatePMRejectWorkItem.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012E30 (ndisSetDevicePowerOnComplete.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0044A54 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0044B50 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0045898 (ndisCreatePMAddRemoveWorkItem.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C004CB40 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C00568B4 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C005B3E0 (NdisMAllocateSharedMemoryAsync.c)
 *     ndisMFinishClose @ 0x1C00E1498 (ndisMFinishClose.c)
 *     NdisOpenAdapterEx @ 0x1C00E3930 (NdisOpenAdapterEx.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00ECC90 (NdisCmRegisterAddressFamily.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisQueueWorkItem(PLIST_ENTRY Entry)
{
  KIRQL v1; // bl

  KeInsertQueue(&ndisWorkerQueue, Entry);
  _InterlockedIncrement(&ndisWorkerQueueItemCount);
  v1 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !LOBYTE(WPP_MAIN_CB.AlignmentRequirement) )
  {
    LOBYTE(WPP_MAIN_CB.AlignmentRequirement) = 1;
    KeSetTimer(&ndisThreadPoolTimer, *(LARGE_INTEGER *)&WPP_MAIN_CB.DeviceQueue.Type, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v1);
}
