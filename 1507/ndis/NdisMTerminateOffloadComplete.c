/*
 * XREFs of NdisMTerminateOffloadComplete @ 0x1C0060E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMTerminateOffloadComplete(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)OffloadBlockList->SourceHandle + 3) + 784LL))(*((_QWORD *)OffloadBlockList->SourceHandle
                                                                                             + 4));
}
