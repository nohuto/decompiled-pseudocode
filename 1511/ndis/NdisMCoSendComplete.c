/*
 * XREFs of NdisMCoSendComplete @ 0x1C00F4100
 * Callers:
 *     ndisMAllocSGList @ 0x1C0047730 (ndisMAllocSGList.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D6E0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisMCoSendComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, PNDIS_PACKET Packet)
{
  (*((void (__fastcall **)(NDIS_STATUS, NDIS_HANDLE, PNDIS_PACKET))NdisVcHandle + 34))(Status, NdisVcHandle, Packet);
}
