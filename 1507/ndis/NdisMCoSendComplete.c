/*
 * XREFs of NdisMCoSendComplete @ 0x1C00FA100
 * Callers:
 *     ndisMAllocSGList @ 0x1C0046410 (ndisMAllocSGList.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D110 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMCoSendComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, PNDIS_PACKET Packet)
{
  (*((void (__fastcall **)(NDIS_STATUS, NDIS_HANDLE, PNDIS_PACKET))NdisVcHandle + 34))(Status, NdisVcHandle, Packet);
}
