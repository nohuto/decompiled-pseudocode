/*
 * XREFs of ndisFreeRefCount @ 0x1C0013468
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C00069E0 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000A040 (ndisMTimerDpcX.c)
 *     ndisDoOidRequests @ 0x1C000AF60 (ndisDoOidRequests.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0013364 (ndisIfDetachMiniportBlock.c)
 *     ndisMTimerObjectDpc @ 0x1C0015390 (ndisMTimerObjectDpc.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B2B0 (IFBLOCK_DECREMENT_REF.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisFreeOpenBlock @ 0x1C009892C (ndisFreeOpenBlock.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00989B0 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C00D6388 (ndisDeinitializeZeroBasedRef.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0010C10 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeRefCount(struct _NDIS_REFCOUNT_BLOCK *P)
{
  if ( P )
  {
    ndisFreeRefCountAuxiliaryMemory(P);
    ExFreePoolWithTag(P, 0);
  }
}
