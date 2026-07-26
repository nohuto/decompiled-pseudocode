/*
 * XREFs of NdisTerminateOffload @ 0x1C0064BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C006451C (-AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z.c)
 */

void __stdcall NdisTerminateOffload(NDIS_HANDLE NdisBindingHandle, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  AdjustOffloadContext((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, OffloadBlockList, 0);
  (*(void (__fastcall **)(_QWORD, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST))(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2)
                                                                                + 3816LL)
                                                                    + 568LL))(
    *((_QWORD *)NdisBindingHandle + 7),
    OffloadBlockList);
}
