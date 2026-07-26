/*
 * XREFs of NdisFreeFragmentNetBufferList @ 0x1C0020E90
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C00206A0 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003F60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0006450 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C000F5A0 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010000 (NdisFreeNetBufferListContext.c)
 *     ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C0021120 (-ndisFreeMdl@@YAXPEAU_MDL@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeFragmentNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeFragmentFlags)
{
  ULONG v3; // esi
  bool v5; // r12
  _NET_BUFFER *i; // rbx
  struct _MDL *j; // rcx
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *Alignment; // r14
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v13; // r14
  unsigned __int64 v14; // rax
  char *v15; // rbx
  _SLIST_HEADER *v16; // rsi
  _SLIST_HEADER *v17; // rcx
  char *NdisPoolHandle; // r13
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rbx
  _SLIST_HEADER *v21; // r15
  char *v22; // r13
  char *v23; // r14
  _MDL *v24; // rcx

  FragmentNetBufferList->Link.Alignment = 0LL;
  v3 = DataOffsetDelta;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(FragmentNetBufferList, 0LL, 0x98uLL, 8u, 0);
  v5 = (*((_DWORD *)FragmentNetBufferList->NdisPoolHandle + 15) & 1) == 0;
  for ( i = FragmentNetBufferList->FirstNetBuffer; i; i = (_NET_BUFFER *)i->Link.Alignment )
  {
    i->DataOffset += v3;
    i->DataLength -= v3;
    for ( j = i->MdlChain; j; j = i->MdlChain )
    {
      *(_QWORD *)&DataOffsetDelta = i->DataOffset;
      if ( j->ByteCount > DataOffsetDelta )
        break;
      if ( j == (struct _MDL *)&i[1] )
        break;
      i->MdlChain = j->Next;
      i->DataOffset = DataOffsetDelta - j->ByteCount;
      ndisFreeMdl(j);
    }
    i->Link.Region = (unsigned __int64)i->MdlChain;
    i->CurrentMdlOffset = i->DataOffset;
  }
  FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    while ( 1 )
    {
      MdlChain = FirstNetBuffer->MdlChain;
      if ( MdlChain )
      {
        do
        {
          Next = MdlChain->Next;
          IoFreeMdl(MdlChain);
          MdlChain = Next;
        }
        while ( Next );
      }
      Alignment = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer == FragmentNetBufferList->FirstNetBuffer )
      {
        if ( v5 )
          NdisFreeNetBuffer(FirstNetBuffer);
        goto LABEL_15;
      }
      NdisPoolHandle = (char *)FirstNetBuffer->NdisPoolHandle;
      if ( (*((_DWORD *)NdisPoolHandle + 22) & 1) != 0 )
      {
        v24 = FirstNetBuffer->MdlChain;
        if ( (v24->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v24->MappedSystemVa, FirstNetBuffer->MdlChain);
      }
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_38;
      v19 = (unsigned __int64)LODWORD(FirstNetBuffer[-1].SharedMemoryInfo) << 8;
      v20 = (unsigned __int64)&NdisPoolHandle[v19 + 384];
      if ( !*(_BYTE *)(v20 + 216) )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v19 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
      v21 = LODWORD(FirstNetBuffer[-1].SharedMemoryInfo) == KeGetPcr()->Prcb.Number
          ? *(_SLIST_HEADER **)(v20 + 192)
          : *(_SLIST_HEADER **)(v20 + 200);
      ++*(_DWORD *)(v20 + 28);
      if ( ExQueryDepthSList(v21) >= *(_WORD *)(v20 + 16) )
        break;
      ExpInterlockedPushEntrySList(v21, (PSLIST_ENTRY)FirstNetBuffer);
LABEL_15:
      FirstNetBuffer = Alignment;
      if ( !Alignment )
        goto LABEL_16;
    }
    ++*(_DWORD *)(v20 + 32);
LABEL_38:
    v22 = NdisPoolHandle + 128;
    ++*((_DWORD *)v22 + 7);
    if ( ExQueryDepthSList((PSLIST_HEADER)v22) >= *((_WORD *)v22 + 8) )
    {
      ++*((_DWORD *)v22 + 8);
      (*((void (__fastcall **)(_NET_BUFFER *, char *))v22 + 7))(FirstNetBuffer, v22);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v22, (PSLIST_ENTRY)FirstNetBuffer);
    }
    goto LABEL_15;
  }
LABEL_16:
  Context = FragmentNetBufferList->Context;
  v13 = (char *)FragmentNetBufferList->NdisPoolHandle;
  if ( Context && (FragmentNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(FragmentNetBufferList, Context->Size - Context->Offset);
  FragmentNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)FragmentNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(DataOffsetDelta) = 1;
    WfpNblInfoCleanup(FragmentNetBufferList, *(_QWORD *)&DataOffsetDelta);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(FragmentNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v14 = (unsigned __int64)LODWORD(FragmentNetBufferList[-1].NetBufferListInfo[27]) << 8;
    v15 = &v13[v14 + 384];
    if ( !v15[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v13[v14 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v13 + 128));
    if ( LODWORD(FragmentNetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v16 = (_SLIST_HEADER *)*((_QWORD *)v15 + 24);
    else
      v16 = (_SLIST_HEADER *)*((_QWORD *)v15 + 25);
    ++*((_DWORD *)v15 + 7);
    if ( ExQueryDepthSList(v16) < *((_WORD *)v15 + 8) )
    {
      v17 = v16;
LABEL_28:
      ExpInterlockedPushEntrySList(v17, (PSLIST_ENTRY)FragmentNetBufferList);
      return;
    }
    ++*((_DWORD *)v15 + 8);
  }
  v23 = v13 + 128;
  ++*((_DWORD *)v23 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v23) < *((_WORD *)v23 + 8) )
  {
    v17 = (_SLIST_HEADER *)v23;
    goto LABEL_28;
  }
  ++*((_DWORD *)v23 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v23 + 7))(FragmentNetBufferList, v23);
}
