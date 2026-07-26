/*
 * XREFs of NdisCoSendNetBufferLists @ 0x1C004E780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCoSendNetBufferLists(NDIS_HANDLE NdisVcHandle, PNET_BUFFER_LIST NetBufferLists, ULONG SendFlags)
{
  (*((void (__fastcall **)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG))NdisVcHandle + 31))(
    NdisVcHandle,
    NetBufferLists,
    SendFlags);
}
