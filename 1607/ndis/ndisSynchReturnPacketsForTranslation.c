/*
 * XREFs of ndisSynchReturnPacketsForTranslation @ 0x1C00676E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisSynchReturnPacketsForTranslation(__int64 a1, struct _NDIS_PACKET *a2)
{
  ndisReturnPacketToNetBufferList(a1, a2);
}
