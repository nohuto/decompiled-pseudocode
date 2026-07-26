/*
 * XREFs of ndisReturnPeriodicReceives @ 0x1C00230E4
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C00090E0 (ndisMTopReceiveNetBufferLists.c)
 *     NdisReturnNetBufferLists @ 0x1C000A000 (NdisReturnNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001C1B0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0061D5C (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C00630C0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C0063AB0 (ndisMIndicateSplitNblChain.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C0064358 (ndisReturnNetBufferListsInternal.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C000BB60 (NdisFreeNetBufferList.c)
 *     ExFreeToNPagedLookasideList @ 0x1C004E338 (ExFreeToNPagedLookasideList.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisReturnPeriodicReceives(__int64 a1, struct _NET_BUFFER_LIST *a2)
{
  struct _NET_BUFFER_LIST *v2; // rdi
  _QWORD *p_Alignment; // r14
  struct _NET_BUFFER_LIST *v4; // rbx
  struct _NET_BUFFER_LIST *Alignment; // rbp
  _NET_BUFFER *FirstNetBuffer; // rax
  struct _NPAGED_LOOKASIDE_LIST *v8; // r15
  _MDL *CurrentMdl; // rsi

  v2 = 0LL;
  p_Alignment = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)v4->Link.Alignment;
      v4->Link.Alignment = 0LL;
      if ( v4->NdisPoolHandle == PoolHandle )
      {
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 3272));
        FirstNetBuffer = v4->FirstNetBuffer;
        v8 = (struct _NPAGED_LOOKASIDE_LIST *)v4->MiniportReserved[1];
        CurrentMdl = FirstNetBuffer->CurrentMdl;
        if ( (CurrentMdl->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(CurrentMdl->MappedSystemVa, FirstNetBuffer->CurrentMdl);
        if ( v8 )
          ExFreeToNPagedLookasideList(v8, CurrentMdl);
        else
          ExFreePoolWithTag(CurrentMdl, 0);
        NdisFreeNetBufferList(v4);
      }
      else
      {
        if ( v2 )
          *p_Alignment = v4;
        else
          v2 = v4;
        p_Alignment = &v4->Link.Alignment;
      }
      v4 = Alignment;
    }
    while ( Alignment );
  }
  return v2;
}
