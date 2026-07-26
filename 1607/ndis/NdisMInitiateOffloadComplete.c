/*
 * XREFs of NdisMInitiateOffloadComplete @ 0x1C0064910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMInitiateOffloadComplete(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)OffloadBlockList->SourceHandle + 3) + 776LL))(*((_QWORD *)OffloadBlockList->SourceHandle
                                                                                             + 4));
}
