/*
 * XREFs of NdisMInvalidateOffloadComplete @ 0x1C00605F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMInvalidateOffloadComplete(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)OffloadBlockList->SourceHandle + 3) + 800LL))(*((_QWORD *)OffloadBlockList->SourceHandle
                                                                                             + 4));
}
