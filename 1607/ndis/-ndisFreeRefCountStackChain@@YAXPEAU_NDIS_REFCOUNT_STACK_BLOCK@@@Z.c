/*
 * XREFs of ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfDereferenceMiniport @ 0x1C0009E74 (ndisIfDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0009F30 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C000A3BC (ndisDereferenceMiniportForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000B670 (ndisFOidRequestCompleteInternal.c)
 *     ndisOidRequestComplete @ 0x1C000BB40 (ndisOidRequestComplete.c)
 *     NdisDereferenceWithTag @ 0x1C000CE60 (NdisDereferenceWithTag.c)
 *     ndisQueuedCheckForHang @ 0x1C000F020 (ndisQueuedCheckForHang.c)
 *     ndisMTimerDpcX @ 0x1C000F400 (ndisMTimerDpcX.c)
 *     ndisDoOidRequests @ 0x1C001B980 (ndisDoOidRequests.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0021260 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMTimerObjectDpc @ 0x1C00217D0 (ndisMTimerObjectDpc.c)
 * Callees:
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A43C (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 */

void __fastcall ndisFreeRefCountStackChain(struct _NDIS_REFCOUNT_STACK_BLOCK *a1)
{
  _NDIS_REFCOUNT_STACK_BLOCK *Next; // rbx
  struct _NDIS_REFCOUNT_STACK_BLOCK *v3; // rcx

  while ( a1->Next )
  {
    Next = a1->Next;
    v3 = a1->Next;
    a1->Next = a1->Next->Next;
    ndisFreeRefCountStacksInBlock(v3);
    ExFreePoolWithTag(Next, 0);
  }
  ndisFreeRefCountStacksInBlock(a1);
}
