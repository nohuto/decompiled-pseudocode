/*
 * XREFs of NdisOffloadTcpDisconnect @ 0x1C00649B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ?StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C00647D8 (-StoreCompletionContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisOffloadTcpDisconnect(
        PNDIS_OFFLOAD_HANDLE NdisOffloadHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG Flags)
{
  __int64 v3; // rcx
  __int64 v4; // r11
  unsigned int v5; // r8d
  __int64 v6; // r10

  StoreCompletionContext((struct _NDIS_OPEN_BLOCK *)NdisOffloadHandle->NdisReserved[0], NetBufferList);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 3816LL) + 616LL))(
           *(_QWORD *)(v3 + 56),
           *(_QWORD *)(v4 + 8),
           v6,
           v5);
}
