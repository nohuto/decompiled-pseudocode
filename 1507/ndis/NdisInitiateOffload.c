/*
 * XREFs of NdisInitiateOffload @ 0x1C0060D20
 * Callers:
 *     <none>
 * Callees:
 *     ?AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z @ 0x1C0060A1C (-AdjustOffloadContext@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_OFFLOAD_BLOCK_LIST@@H@Z.c)
 */

void __stdcall NdisInitiateOffload(NDIS_HANDLE NdisBindingHandle, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2) + 3816LL) + 560LL) )
  {
    AdjustOffloadContext((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, OffloadBlockList, 0);
    (*(void (__fastcall **)(_QWORD, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST))(*(_QWORD *)(*((_QWORD *)NdisBindingHandle + 2)
                                                                                  + 3816LL)
                                                                      + 560LL))(
      *((_QWORD *)NdisBindingHandle + 7),
      OffloadBlockList);
  }
  else
  {
    AdjustOffloadContext((struct _NDIS_OPEN_BLOCK *)NdisBindingHandle, OffloadBlockList, -1073741637);
    (*(void (__fastcall **)(_QWORD, PNDIS_PROTOCOL_OFFLOAD_BLOCK_LIST))(*((_QWORD *)NdisBindingHandle + 3) + 776LL))(
      *((_QWORD *)NdisBindingHandle + 4),
      OffloadBlockList);
  }
}
