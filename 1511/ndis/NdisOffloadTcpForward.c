/*
 * XREFs of NdisOffloadTcpForward @ 0x1C00606B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0060498 (-StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpForward(PNDIS_OFFLOAD_HANDLE NdisOffloadHandle, PNET_BUFFER_LIST NetBufferList)
{
  __int64 v2; // rcx
  __int64 v3; // r9

  StoreCompletionContext((struct _NDIS_OPEN_BLOCK *)NdisOffloadHandle->NdisReserved[0], NetBufferList);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 3816LL) + 624LL))(
           *(_QWORD *)(*(_QWORD *)(v2 + 16) + 24LL),
           *(_QWORD *)(v3 + 8));
}
