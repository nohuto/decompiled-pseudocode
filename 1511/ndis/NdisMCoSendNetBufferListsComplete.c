/*
 * XREFs of NdisMCoSendNetBufferListsComplete @ 0x1C0011EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMCoSendNetBufferListsComplete(
        NDIS_HANDLE NdisVcHandle,
        PNET_BUFFER_LIST NetBufferLists,
        ULONG SendCompleteFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 32))(
    NdisVcHandle,
    NetBufferLists,
    SendCompleteFlags);
}
