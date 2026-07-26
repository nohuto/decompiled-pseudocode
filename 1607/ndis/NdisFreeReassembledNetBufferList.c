/*
 * XREFs of NdisFreeReassembledNetBufferList @ 0x1C004CE30
 * Callers:
 *     NdisAllocateReassembledNetBufferList @ 0x1C004CA30 (NdisAllocateReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferListDataStart @ 0x1C0006710 (NdisAdvanceNetBufferListDataStart.c)
 */

void __stdcall NdisFreeReassembledNetBufferList(
        PNET_BUFFER_LIST ReassembledNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeReassembleFlags)
{
  struct _MDL *v4; // rcx
  struct _MDL *Next; // rbx

  NdisAdvanceNetBufferListDataStart(
    ReassembledNetBufferList,
    DataOffsetDelta,
    1u,
    (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdl);
  v4 = *(struct _MDL **)(ReassembledNetBufferList->Link.Region + 32);
  if ( v4 )
  {
    do
    {
      Next = v4->Next;
      IoFreeMdl(v4);
      v4 = Next;
    }
    while ( Next );
  }
  NdisFreeNetBufferList(ReassembledNetBufferList);
}
