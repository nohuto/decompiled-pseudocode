/*
 * XREFs of NdisFIndicateReceiveNetBufferLists @ 0x1C000F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0048AF4 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 */

void __stdcall NdisFIndicateReceiveNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferLists,
        NDIS_PORT_NUMBER PortNumber,
        ULONG NumberOfNetBufferLists,
        ULONG ReceiveFlags)
{
  __int64 v9; // rdx
  __int64 v10; // r8

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
      ndisMarkNetBufferListCorrelationIdsAsUsed(NetBufferLists, v9, v10);
  }
}
