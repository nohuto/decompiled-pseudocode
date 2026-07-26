/*
 * XREFs of ndisReferenceRef @ 0x1C0004A64
 * Callers:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004ADC (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceFilterDriver @ 0x1C0018DA8 (ndisReferenceFilterDriver.c)
 *     ndisReferenceProtocol @ 0x1C001BE60 (ndisReferenceProtocol.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C001C5C8 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001D878 (ndisReferenceMiniportByHandle.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001F444 (ndisGetLowerFilterWithPnpRef.c)
 *     NdisAllocateIoWorkItem @ 0x1C00245F0 (NdisAllocateIoWorkItem.c)
 *     ndisReferenceDriver @ 0x1C0025210 (ndisReferenceDriver.c)
 *     NdisCancelDirectOidRequest @ 0x1C0040490 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0041408 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0041654 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0044B50 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C0044E1C (ndisRefNextFilterForOidCancellation.c)
 *     NdisFRestartFilter @ 0x1C0053470 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0053850 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C00548B8 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ndisReferenceFilterByHandle @ 0x1C00548F4 (ndisReferenceFilterByHandle.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C0055B08 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisFNotifyDetach @ 0x1C00C8724 (ndisFNotifyDetach.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 */

char __fastcall ndisReferenceRef(PKSPIN_LOCK SpinLock)
{
  char v2; // di
  KIRQL v3; // si
  unsigned __int16 v4; // cx

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( !*((_BYTE *)SpinLock + 10) )
  {
    v4 = *((_WORD *)SpinLock + 4);
    if ( v4 < 0xFFEBu )
    {
      v2 = 1;
      *((_WORD *)SpinLock + 4) = v4 + 1;
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2]);
    }
  }
  KeReleaseSpinLock(SpinLock, v3);
  return v2;
}
