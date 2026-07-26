/*
 * XREFs of ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00267B4
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C0004140 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C000E480 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000E6D0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00671E8 (ndisReturnNetBufferListsInternal.c)
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
