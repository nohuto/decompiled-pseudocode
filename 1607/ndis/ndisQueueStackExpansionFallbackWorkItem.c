/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C0058FA4
 * Callers:
 *     ndisQueueOidRequest @ 0x1C000A860 (ndisQueueOidRequest.c)
 *     NdisFOidRequestComplete @ 0x1C000E990 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x1C0011AE0 (NdisFNetPnPEvent.c)
 *     ndisDoOidRequests @ 0x1C001B980 (ndisDoOidRequests.c)
 *     NdisFIndicateStatus @ 0x1C001ED80 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00267D0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0057B30 (NdisFDevicePnPEventNotify.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0057D30 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 224) )
  {
    ndisReferenceRef((PKSPIN_LOCK)(a1 + 72), 1u);
    *(_BYTE *)(a1 + 224) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), NormalWorkQueue);
  }
}
