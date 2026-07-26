/*
 * XREFs of ndisCopyPacketInfoToNBL @ 0x1C004CFAC
 * Callers:
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D3CC (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnPacketToNetBufferList @ 0x1C004D738 (ndisXlateReturnPacketToNetBufferList.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004D850 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     ndisXlateSendPacketArrayToNetBufferLists @ 0x1C004DD5C (ndisXlateSendPacketArrayToNetBufferLists.c)
 * Callees:
 *     ?ndisIPsecPktInfoToNBLInfo@@YAXPEAU_NDIS_IPSEC_PACKET_INFO@@W4_NDIS_XLATE_TYPE@@PEAU_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO@@@Z @ 0x1C004C9C0 (-ndisIPsecPktInfoToNBLInfo@@YAXPEAU_NDIS_IPSEC_PACKET_INFO@@W4_NDIS_XLATE_TYPE@@PEAU_NDIS_IPSEC_.c)
 */

void __fastcall ndisCopyPacketInfoToNBL(
        __int64 a1,
        struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *a2,
        enum _NDIS_XLATE_TYPE a3)
{
  struct _NDIS_IPSEC_PACKET_INFO *v3; // rcx

  a2[18].Transmit.OffloadHandle = *(void **)(*(unsigned __int16 *)(a1 + 42) + a1 + 40);
  a2[20].Transmit.OffloadHandle = *(void **)(*(unsigned __int16 *)(a1 + 42) + a1 + 56);
  a2[21].Transmit.OffloadHandle = *(void **)(*(unsigned __int16 *)(a1 + 42) + a1 + 64);
  a2[22].Transmit.OffloadHandle = *(void **)(*(unsigned __int16 *)(a1 + 42) + a1 + 88);
  a2[23].Transmit.OffloadHandle = *(void **)(*(unsigned __int16 *)(a1 + 42) + a1 + 104);
  if ( (a3 & 0xFFFFFFFD) == 0 )
  {
    v3 = *(struct _NDIS_IPSEC_PACKET_INFO **)(*(unsigned __int16 *)(a1 + 42) + a1 + 48);
    if ( v3 )
      ndisIPsecPktInfoToNBLInfo(v3, a3, a2 + 19);
  }
}
