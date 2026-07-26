/*
 * XREFs of ndisMStartInitMode @ 0x1C00AC400
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C001B600 (NdisSetTimer.c)
 */

void __fastcall ndisMStartInitMode(__int64 a1)
{
  if ( ndisReferenceMiniport(a1, 0x17u) )
  {
    *(_BYTE *)(a1 + 1995) = 1;
    *(_QWORD *)(a1 + 2144) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_QWORD *)(a1 + 2152) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_BYTE *)(a1 + 2673) = 0;
    KeClearEvent((PRKEVENT)(a1 + 3024));
    NdisSetTimer((PNDIS_TIMER)(a1 + 2816), 0x7530u);
  }
}
