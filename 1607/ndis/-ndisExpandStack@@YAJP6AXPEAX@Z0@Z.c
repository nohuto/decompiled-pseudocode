/*
 * XREFs of ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0012B0C
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMSendNetBufferListsComplete @ 0x1C0001F60 (NdisMSendNetBufferListsComplete.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C0004140 (NdisReturnNetBufferLists.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C00104B8 (ndisInvokeNextSendCompleteHandler.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0010604 (ndisInvokeNextReceiveHandler.c)
 *     NdisFNetPnPEvent @ 0x1C0011AE0 (NdisFNetPnPEvent.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C001E204 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisDoDirectOidRequest @ 0x1C0045154 (ndisDoDirectOidRequest.c)
 *     NdisFCancelDirectOidRequest @ 0x1C0057A20 (NdisFCancelDirectOidRequest.c)
 *     NdisFCancelOidRequest @ 0x1C0057A50 (NdisFCancelOidRequest.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0057B30 (NdisFDevicePnPEventNotify.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0057D30 (NdisFDirectOidRequestComplete.c)
 *     ndisFilterCancelSendNetBufferLists @ 0x1C0058D30 (ndisFilterCancelSendNetBufferLists.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0058D80 (ndisInvokeNextReceiveCompleteHandler.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisExpandStack(void (*a1)(void *), void *a2)
{
  return KeExpandKernelStackAndCalloutEx(a1, a2, 0x4CCCuLL, 0, 0LL);
}
