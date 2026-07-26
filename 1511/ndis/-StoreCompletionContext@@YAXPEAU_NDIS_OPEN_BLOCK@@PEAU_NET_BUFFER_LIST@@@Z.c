/*
 * XREFs of ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0060498
 * Callers:
 *     ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C00601E0 (-AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z.c)
 *     NdisOffloadTcpDisconnect @ 0x1C0060670 (NdisOffloadTcpDisconnect.c)
 *     NdisOffloadTcpForward @ 0x1C00606B0 (NdisOffloadTcpForward.c)
 *     NdisOffloadTcpReceive @ 0x1C00606F0 (NdisOffloadTcpReceive.c)
 *     NdisOffloadTcpSend @ 0x1C0060750 (NdisOffloadTcpSend.c)
 * Callees:
 *     <none>
 */

void __fastcall StoreCompletionContext(struct _NDIS_OPEN_BLOCK *a1, struct _NET_BUFFER_LIST *Alignment)
{
  while ( Alignment )
  {
    Alignment->SourceHandle = a1;
    Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
  }
}
