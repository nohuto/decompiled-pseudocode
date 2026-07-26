/*
 * XREFs of NdisAllocatePacketPool @ 0x1C00503B0
 * Callers:
 *     ndisVerifierAllocatePacketPool @ 0x1C0063D40 (ndisVerifierAllocatePacketPool.c)
 * Callees:
 *     NdisAllocatePacketPoolEx @ 0x1C001C310 (NdisAllocatePacketPoolEx.c)
 */

void __stdcall NdisAllocatePacketPool(
        PNDIS_STATUS Status,
        PNDIS_HANDLE PoolHandle,
        UINT NumberOfDescriptors,
        UINT ProtocolReservedLength)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  NdisAllocatePacketPoolEx(Status, PoolHandle, NumberOfDescriptors, 0, ProtocolReservedLength);
  if ( !*Status )
    *((_QWORD *)*PoolHandle + 3) = retaddr;
}
