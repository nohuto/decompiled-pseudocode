/*
 * XREFs of ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C
 * Callers:
 *     NdisSendNetBufferLists @ 0x1C00016E0 (NdisSendNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C00021E0 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00024B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000A000 (NdisReturnNetBufferLists.c)
 *     NdisFNetPnPEvent @ 0x1C000F0B0 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C00109A0 (NdisFDevicePnPEventNotify.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0010F78 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C00200F0 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisDoDirectOidRequest @ 0x1C003FF54 (ndisDoDirectOidRequest.c)
 *     NdisFCancelDirectOidRequest @ 0x1C0052A80 (NdisFCancelDirectOidRequest.c)
 *     NdisFCancelOidRequest @ 0x1C0052AB0 (NdisFCancelOidRequest.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0052CA0 (NdisFDirectOidRequestComplete.c)
 *     ndisFilterCancelSendNetBufferLists @ 0x1C0054220 (ndisFilterCancelSendNetBufferLists.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0054270 (ndisInvokeNextReceiveHandler.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0054578 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisExpandStack(void (*a1)(void *), void *a2)
{
  return KeExpandKernelStackAndCalloutEx(a1, a2, 0x2000uLL, 0, 0LL);
}
