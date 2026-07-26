/*
 * XREFs of ndisVerifierFreePacketPool @ 0x1C0060380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ndisVerifierFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  ndisFreePacketPool(a1);
}
