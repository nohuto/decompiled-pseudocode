/*
 * XREFs of ?ndisIPsecPktInfoToNBLInfo@@YAXPEAU_NDIS_IPSEC_PACKET_INFO@@W4_NDIS_XLATE_TYPE@@PEAU_NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO@@@Z @ 0x1C004C9C0
 * Callers:
 *     ndisCopyPacketInfoToNBL @ 0x1C004CFAC (ndisCopyPacketInfoToNBL.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIPsecPktInfoToNBLInfo(
        struct _NDIS_IPSEC_PACKET_INFO *a1,
        enum _NDIS_XLATE_TYPE a2,
        struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *a3)
{
  __int16 v4; // cx

  if ( a1 )
  {
    if ( a2 == XlateSend )
      a3->Transmit.OffloadHandle = a1->Transmit.OffloadHandle;
    if ( a2 == XlateReceive )
    {
      LOWORD(a3->Transmit.OffloadHandle) ^= ((__int64)a3->Transmit.OffloadHandle ^ LOWORD(a1->Transmit.OffloadHandle)) & 1;
      v4 = (__int64)a3->Transmit.OffloadHandle ^ ((__int64)a3->Transmit.OffloadHandle ^ (2
                                                                                       * ((unsigned __int64)a1->Transmit.OffloadHandle >> 1))) & 2;
      LOWORD(a3->Transmit.OffloadHandle) = v4;
      LOWORD(a3->Transmit.OffloadHandle) = v4 ^ ((unsigned __int8)v4 ^ (__int64)a1->Transmit.OffloadHandle & 0xFC) & 4;
      a3->Receive.CryptoStatus = a1->Receive.CryptoStatus;
    }
  }
}
