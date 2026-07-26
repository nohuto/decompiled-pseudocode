/*
 * XREFs of ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C0048AF4
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002240 (ndisMTopReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00039D0 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000CF90 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C000E8D0 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000F0A0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0062E18 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(_QWORD *a1)
{
  unsigned __int64 result; // rax

  while ( a1 )
  {
    result = 0x8000000000000000uLL;
    a1[31] |= 0x8000000000000000uLL;
    a1 = (_QWORD *)*a1;
  }
  return result;
}
