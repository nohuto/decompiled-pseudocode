/*
 * XREFs of ndisReferenceRef @ 0x1C001900C
 * Callers:
 *     ndisReferenceMiniportByHandle @ 0x1C0018C80 (ndisReferenceMiniportByHandle.c)
 *     ndisReferenceFilterDriver @ 0x1C0019000 (ndisReferenceFilterDriver.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001B784 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisReferenceDriver @ 0x1C001BD38 (ndisReferenceDriver.c)
 *     NdisAllocateIoWorkItem @ 0x1C001F760 (NdisAllocateIoWorkItem.c)
 *     NdisCancelDirectOidRequest @ 0x1C003ECA0 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C003FD08 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00435B8 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C0043884 (ndisRefNextFilterForOidCancellation.c)
 *     NdisFRestartFilter @ 0x1C0053080 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0053460 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00547D0 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ndisReferenceFilterByHandle @ 0x1C005480C (ndisReferenceFilterByHandle.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055C68 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisFNotifyDetach @ 0x1C00CF314 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 */

char __fastcall ndisReferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  char v4; // di
  KIRQL v5; // si
  unsigned __int16 v6; // cx

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( !*((_BYTE *)SpinLock + 10) )
  {
    v6 = *((_WORD *)SpinLock + 4);
    if ( v6 < 0xFFEBu )
    {
      v4 = 1;
      *((_WORD *)SpinLock + 4) = v6 + 1;
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2], a2);
    }
  }
  KeReleaseSpinLock(SpinLock, v5);
  return v4;
}
