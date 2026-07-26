/*
 * XREFs of ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C00228B4
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00024B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000A000 (NdisReturnNetBufferLists.c)
 *     NdisFReturnNetBufferLists @ 0x1C000C160 (NdisFReturnNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000CFC0 (NdisFIndicateReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0064358 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMarkNetBufferListCorrelationIdsAsUsed(_QWORD *a1)
{
  __int64 result; // rax

  while ( a1 )
  {
    result = 0x8000000000000000uLL;
    a1[31] |= 0x8000000000000000uLL;
    a1 = (_QWORD *)*a1;
  }
  return result;
}
