/*
 * XREFs of ndisFreeRefCount @ 0x1C000ED8C
 * Callers:
 *     ndisDoOidRequests @ 0x1C0002EF0 (ndisDoOidRequests.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003870 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004170 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0004BD0 (ndisFOidRequestCompleteInternal.c)
 *     ndisMTimerDpcX @ 0x1C0004ED0 (ndisMTimerDpcX.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0005060 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisIfDetachMiniportBlock @ 0x1C000EC88 (ndisIfDetachMiniportBlock.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ndisDereferenceProtocol @ 0x1C0019724 (ndisDereferenceProtocol.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001A110 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001ACF0 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisMTimerObjectDpc @ 0x1C0021640 (ndisMTimerObjectDpc.c)
 *     ndisFreeOpenBlock @ 0x1C009AD7C (ndisFreeOpenBlock.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009AE00 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00DCA38 (ndisDeinitializeZeroBasedRef.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000EDB0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeRefCount(struct _NDIS_REFCOUNT_BLOCK *P)
{
  if ( P )
  {
    ndisFreeRefCountAuxiliaryMemory(P);
    ExFreePoolWithTag(P, 0);
  }
}
