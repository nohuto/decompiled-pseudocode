/*
 * XREFs of ndisDereferenceRef @ 0x1C00172CC
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ndisDereferenceDriver @ 0x1C000F414 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0014580 (ndisDereferenceFilterDriver.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisCancelOidRequestInternal @ 0x1C003F6F0 (ndisCancelOidRequestInternal.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C003FD08 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00435B8 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisDereferenceFilter @ 0x1C00532D0 (ndisDereferenceFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0053460 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00535B0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C00549F0 (ndisStackExpansionFallbackWorker.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C009B34C (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisFNetPnPEventInternal @ 0x1C009B450 (ndisFNetPnPEventInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C009C150 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00AB9A8 (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00CF0E0 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 *     ndisFNotifyDetach @ 0x1C00CF314 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 */

char __fastcall ndisDereferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  KIRQL v4; // si
  char v6; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  ndisDereferenceWithTag(SpinLock[2], a2);
  if ( (*((_WORD *)SpinLock + 4))-- == 1 )
  {
    v6 = 1;
    if ( !*((_BYTE *)SpinLock + 11) )
    {
      ndisFreeRefCount((struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2]);
      SpinLock[2] = 0LL;
    }
  }
  else
  {
    v6 = 0;
  }
  KeReleaseSpinLock(SpinLock, v4);
  return v6;
}
