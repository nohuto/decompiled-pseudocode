/*
 * XREFs of ndisQueueWorkItem @ 0x1C001B848
 * Callers:
 *     ndisSetDevicePowerOnComplete @ 0x1C0012780 (ndisSetDevicePowerOnComplete.c)
 *     ndisCreatePMRejectWorkItem @ 0x1C00254C4 (ndisCreatePMRejectWorkItem.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0047F94 (ndisQueueRequestOnTopAsync.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0048090 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisCreatePMAddRemoveWorkItem @ 0x1C0048E0C (ndisCreatePMAddRemoveWorkItem.c)
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0048EBC (ndisCreatePMPdcTaskClientWorkItem.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C00515A0 (NdisCmRegisterAddressFamilyEx.c)
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005B088 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x1C005F220 (NdisMAllocateSharedMemoryAsync.c)
 *     NdisOpenAdapterEx @ 0x1C00E75A0 (NdisOpenAdapterEx.c)
 *     ndisMFinishClose @ 0x1C00EB318 (ndisMFinishClose.c)
 *     NdisCmRegisterAddressFamily @ 0x1C00F3980 (NdisCmRegisterAddressFamily.c)
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
    KeSetTimer(&ndisThreadPoolTimer, ndisThreadPoolTimerDueTime, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v1);
}
