/*
 * XREFs of ndisIndicateToPmodeOpens @ 0x1C0002178
 * Callers:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001380 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0001AE0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002240 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C0021200 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisMIndicateSplitNblChain @ 0x1C00625A8 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C00029D0 (ndisMIndicateNetBufferListsToOpen.c)
 */

__int64 __fastcall ndisIndicateToPmodeOpens(__int64 a1)
{
  unsigned int v2; // r12d
  int v3; // r14d
  unsigned int v4; // r15d
  __int64 v5; // rbx
  __int64 result; // rax
  int v7; // ebp
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 16) | 2;
  v4 = *(_DWORD *)(a1 + 688);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  result = *(_QWORD *)a1;
  v7 = *(_DWORD *)(*(_QWORD *)a1 + 2252LL);
  while ( v5 )
  {
    result = *(unsigned int *)(v5 + 224);
    if ( (result & 4) != 0 )
    {
      v8 = 0LL;
      do
      {
        result = 5 * v8;
        v9 = (unsigned int)v8;
        v10 = *(_QWORD *)(a1 + 40 * v8 + 64);
        v8 = (unsigned int)(v8 + 1);
        if ( v10 )
        {
          result = 5 * v9;
          if ( *(_QWORD *)(a1 + 40 * v9 + 56) != v5 )
            result = ndisMIndicateNetBufferListsToOpen(v5, v10, v2, *(unsigned int *)(a1 + 40 * v9 + 80), v3);
        }
      }
      while ( (unsigned int)v8 <= v4 );
      if ( !--v7 )
        break;
    }
    v5 = *(_QWORD *)(v5 + 424);
  }
  return result;
}
