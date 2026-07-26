/*
 * XREFs of ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00647D8
 * Callers:
 *     ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C006451C (-AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z.c)
 *     NdisOffloadTcpDisconnect @ 0x1C00649B0 (NdisOffloadTcpDisconnect.c)
 *     NdisOffloadTcpForward @ 0x1C00649F0 (NdisOffloadTcpForward.c)
 *     NdisOffloadTcpReceive @ 0x1C0064A30 (NdisOffloadTcpReceive.c)
 *     NdisOffloadTcpSend @ 0x1C0064A90 (NdisOffloadTcpSend.c)
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
