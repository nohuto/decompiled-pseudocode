/*
 * XREFs of NdisFreeRefCount @ 0x1C001BCE0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009F30 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B670 (ndisFOidRequestCompleteInternal.c)
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     ndisMTimerDpcX @ 0x1C000F400 (ndisMTimerDpcX.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0012CF8 (ndisIfDetachMiniportBlock.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     ndisDoOidRequests @ 0x1C001B980 (ndisDoOidRequests.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F8FC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisMTimerObjectDpc @ 0x1C00217D0 (ndisMTimerObjectDpc.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C009CBA4 (ndisDeinitializeZeroBasedRef.c)
 *     ndisFreeOpenBlock @ 0x1C00AC8AC (ndisFreeOpenBlock.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AD04C (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall NdisFreeRefCount(struct _NDIS_REFCOUNT_BLOCK *P)
{
  if ( P )
  {
    ndisFreeRefCountAuxiliaryMemory(P);
    ExFreePoolWithTag(P, 0);
  }
}
