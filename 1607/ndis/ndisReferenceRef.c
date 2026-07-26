/*
 * XREFs of ndisReferenceRef @ 0x1C0015D1C
 * Callers:
 *     ndisReferenceFilterByHandle @ 0x1C0011B3C (ndisReferenceFilterByHandle.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0015B70 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisReferenceProtocol @ 0x1C0015C20 (ndisReferenceProtocol.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015C58 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001791C (ndisReferenceMiniportByHandle.c)
 *     ndisReferenceFilterDriver @ 0x1C001A4DC (ndisReferenceFilterDriver.c)
 *     ndisGetLowerFilterWithPnpRef @ 0x1C001B130 (ndisGetLowerFilterWithPnpRef.c)
 *     ndisReferenceDriver @ 0x1C001BDD0 (ndisReferenceDriver.c)
 *     NdisAllocateIoWorkItem @ 0x1C00202A0 (NdisAllocateIoWorkItem.c)
 *     NdisCancelDirectOidRequest @ 0x1C0043FE0 (NdisCancelDirectOidRequest.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044EF8 (ndisDoCancelDirectOidRequest.c)
 *     ndisDoDirectOidRequest @ 0x1C0045154 (ndisDoDirectOidRequest.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0048090 (ndisQueueRestoreRequestsOnTop.c)
 *     ndisRefNextFilterForOidCancellation @ 0x1C004835C (ndisRefNextFilterForOidCancellation.c)
 *     NdisFRestartFilter @ 0x1C0058050 (NdisFRestartFilter.c)
 *     ndisFCancelDirectOidRequestInternal @ 0x1C0058280 (ndisFCancelDirectOidRequestInternal.c)
 *     ndisQueueStackExpansionFallbackWorkItem @ 0x1C0058FA4 (ndisQueueStackExpansionFallbackWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005A2F4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ndisFNotifyDetach @ 0x1C009CD48 (ndisFNotifyDetach.c)
 * Callees:
 *     ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000D200 (-ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

char __fastcall ndisReferenceRef(PKSPIN_LOCK SpinLock, unsigned __int8 a2)
{
  char v4; // bl
  KIRQL v5; // bp
  unsigned __int16 v6; // ax
  struct _NDIS_REFCOUNT_BLOCK *v7; // r8

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  if ( !*((_BYTE *)SpinLock + 10) )
  {
    v6 = *((_WORD *)SpinLock + 4);
    if ( v6 < 0xFFEBu )
    {
      v7 = (struct _NDIS_REFCOUNT_BLOCK *)SpinLock[2];
      *((_WORD *)SpinLock + 4) = v6 + 1;
      if ( v7 )
      {
        if ( v7->Type )
        {
          if ( v7->Type == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v7->8 + a2, 1u);
        }
        else
        {
          ndisReferenceWithTagCompact(v7, a2);
        }
      }
      v4 = 1;
    }
  }
  KeReleaseSpinLock(SpinLock, v5);
  return v4;
}
