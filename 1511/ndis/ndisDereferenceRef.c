/*
 * XREFs of ndisDereferenceRef @ 0x1C001C6C4
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0018DB4 (ndisDereferenceFilterDriver.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceProtocol @ 0x1C001C678 (ndisDereferenceProtocol.c)
 *     ndisCancelOidRequestInternal @ 0x1C0040DEC (ndisCancelOidRequestInternal.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0041408 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0041654 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0044B50 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisDereferenceFilter @ 0x1C00536C0 (ndisDereferenceFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0053850 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00539A0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisStackExpansionFallbackWorker @ 0x1C0054AD0 (ndisStackExpansionFallbackWorker.c)
 *     ndisFNetPnPEventInternal @ 0x1C00980A0 (ndisFNetPnPEventInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00982A0 (ndisFDevicePnPEventNotifyInternal.c)
 *     ndisDevicePnPEventNotifyFiltersAndAllTransports @ 0x1C0099000 (ndisDevicePnPEventNotifyFiltersAndAllTransports.c)
 *     ndisDevicePnPEventNotifyMiniport @ 0x1C00A85C4 (ndisDevicePnPEventNotifyMiniport.c)
 *     ?ndisQueuedRestartFilter@@YAXPEAX@Z @ 0x1C00C84F0 (-ndisQueuedRestartFilter@@YAXPEAX@Z.c)
 *     ndisFNotifyDetach @ 0x1C00C8724 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
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
