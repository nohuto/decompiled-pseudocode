/*
 * XREFs of ndisIndicateToPmodeOpens @ 0x1C0001E98
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001870 (ndisMDispatchReceiveNetBufferLists.c)
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00025B0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C00031A0 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001D890 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00667E8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003810 (ndisMIndicateNetBufferListsToOpen.c)
 */

__int64 __fastcall ndisIndicateToPmodeOpens(__int64 a1)
{
  int v2; // r14d
  unsigned int v3; // r15d
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _NET_BUFFER_LIST *v9; // rdx

  v2 = *(_DWORD *)(a1 + 16) | 2;
  v3 = *(_DWORD *)(a1 + 688);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  result = *(_QWORD *)a1;
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 2252LL);
  while ( v4 )
  {
    result = *(unsigned int *)(v4 + 224);
    if ( (result & 4) != 0 )
    {
      v7 = 0LL;
      do
      {
        result = 5 * v7;
        v8 = (unsigned int)v7;
        v9 = *(struct _NET_BUFFER_LIST **)(a1 + 40 * v7 + 64);
        v7 = (unsigned int)(v7 + 1);
        if ( v9 )
        {
          result = 5 * v8;
          if ( *(_QWORD *)(a1 + 40 * v8 + 56) != v4 )
            result = ndisMIndicateNetBufferListsToOpen((NDIS_HANDLE)v4, v9, v2);
        }
      }
      while ( (unsigned int)v7 <= v3 );
      if ( !--v6 )
        break;
    }
    v4 = *(_QWORD *)(v4 + 424);
  }
  return result;
}
