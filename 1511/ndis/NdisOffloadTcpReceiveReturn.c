/*
 * XREFs of NdisOffloadTcpReceiveReturn @ 0x1C0060730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisOffloadTcpReceiveReturn(NDIS_HANDLE NdisBindingHandle, PNET_BUFFER_LIST NetBufferList)
{
  (*(void (__fastcall **)(_QWORD, PNET_BUFFER_LIST))(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 3816LL) + 632LL))(
    *((_QWORD *)NdisBindingHandle + 7),
    NetBufferList);
}
