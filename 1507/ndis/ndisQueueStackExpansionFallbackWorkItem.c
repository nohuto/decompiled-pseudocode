/*
 * XREFs of ndisQueueStackExpansionFallbackWorkItem @ 0x1C00547D0
 * Callers:
 *     ndisDoOidRequests @ 0x1C0002EF0 (ndisDoOidRequests.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     NdisFOidRequestComplete @ 0x1C000D120 (NdisFOidRequestComplete.c)
 *     NdisFNetPnPEvent @ 0x1C000F0B0 (NdisFNetPnPEvent.c)
 *     NdisFDevicePnPEventNotify @ 0x1C00109A0 (NdisFDevicePnPEventNotify.c)
 *     NdisFIndicateStatus @ 0x1C001E510 (NdisFIndicateStatus.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     NdisFDirectOidRequestComplete @ 0x1C0052CA0 (NdisFDirectOidRequestComplete.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C001900C (ndisReferenceRef.c)
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
