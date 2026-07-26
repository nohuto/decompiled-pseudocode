/*
 * XREFs of NdisMUpdateOffloadComplete @ 0x1C0060E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMUpdateOffloadComplete(
        NDIS_HANDLE NdisMiniportHandle,
        PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST OffloadBlockList)
{
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)OffloadBlockList->SourceHandle + 3) + 792LL))(*((_QWORD *)OffloadBlockList->SourceHandle
                                                                                             + 4));
}
