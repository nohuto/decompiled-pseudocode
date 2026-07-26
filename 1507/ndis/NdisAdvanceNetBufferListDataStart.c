/*
 * XREFs of NdisAdvanceNetBufferListDataStart @ 0x1C0047160
 * Callers:
 *     NdisFreeReassembledNetBufferList @ 0x1C0047B90 (NdisFreeReassembledNetBufferList.c)
 * Callees:
 *     NdisAdvanceNetBufferDataStart @ 0x1C000AE40 (NdisAdvanceNetBufferDataStart.c)
 */

void __stdcall NdisAdvanceNetBufferListDataStart(
        PNET_BUFFER_LIST NetBufferList,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlMdlHandler)
{
  struct _NET_BUFFER *i; // rbx

  for ( i = NetBufferList->FirstNetBuffer; i; i = (struct _NET_BUFFER *)i->Link.Alignment )
    NdisAdvanceNetBufferDataStart(i, DataOffsetDelta, FreeMdl, FreeMdlMdlHandler);
}
