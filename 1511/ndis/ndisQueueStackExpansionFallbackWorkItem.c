/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C00548B8
 * Callers:
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisDoOidRequests @ 0x1C000AF60 (ndisDoOidRequests.c)
 *     NdisFOidRequestComplete @ 0x1C000EF40 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x1C00128B0 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C0012C90 (NdisFDevicePnPEventNotify.c)
 *     NdisFIndicateStatus @ 0x1C0022D70 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0053150 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 */

void __fastcall ndisQueueStackExpansionFallbackWorkItem(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 224) )
  {
    ndisReferenceRef((PKSPIN_LOCK)(a1 + 72));
    *(_BYTE *)(a1 + 224) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), NormalWorkQueue);
  }
}
