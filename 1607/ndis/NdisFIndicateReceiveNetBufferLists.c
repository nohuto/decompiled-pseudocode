/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C000E6D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0010AE4 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(NetBufferLists, NumberOfNetBufferLists);
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD, ULONG))NdisFilterHandle + 79))(
    NdisFilterHandle,
    NetBufferLists,
    PortNumber,
    NumberOfNetBufferLists,
    ReceiveFlags);
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    if ( (ReceiveFlags & 2) != 0 )
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists);
  }
}
