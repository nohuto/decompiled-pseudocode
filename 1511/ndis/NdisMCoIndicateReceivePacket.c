/*
 * XREFs of NdisMCoIndicateReceivePacket @ 0x1C00F4060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMCoIndicateReceivePacket(NDIS_HANDLE NdisVcHandle, PPNDIS_PACKET PacketArray, UINT NumberOfPackets)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PPNDIS_PACKET, UINT))NdisVcHandle + 35))(
    NdisVcHandle,
    PacketArray,
    NumberOfPackets);
}
