/*
 * XREFs of NdisOffloadTcpReceive @ 0x1C0064A30
 * Callers:
 *     <none>
 * Callees:
 *     ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00647D8 (-StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpReceive(PNDIS_OFFLOAD_HANDLE NdisOffloadHandle, PNET_BUFFER_LIST NetBufferList)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r9

  StoreCompletionContext((struct _NDIS_OPEN_BLOCK *)NdisOffloadHandle->NdisReserved[0], NetBufferList);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 3816LL) + 608LL))(
           *(_QWORD *)(v2 + 56),
           *(_QWORD *)(v3 + 8),
           v4);
}
