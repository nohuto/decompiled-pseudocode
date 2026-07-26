/*
 * XREFs of ndisMStartInitMode @ 0x1C00AC5D0
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     NdisSetTimer @ 0x1C0024B50 (NdisSetTimer.c)
 */

void __fastcall ndisMStartInitMode(__int64 a1)
{
  if ( ndisReferenceMiniport(a1) )
  {
    *(_BYTE *)(a1 + 1995) = 1;
    *(_QWORD *)(a1 + 2144) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_QWORD *)(a1 + 2152) = ndisMDispatchReceiveNetBufferListsWithLock;
    *(_BYTE *)(a1 + 2673) = 0;
    KeClearEvent((PRKEVENT)(a1 + 3024));
    NdisSetTimer((PNDIS_TIMER)(a1 + 2816), 0x7530u);
  }
}
