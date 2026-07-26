/*
 * XREFs of NdisFreeFragmentNetBufferList @ 0x1C0014FA0
 * Callers:
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C000F670 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010DC0 (NdisFreeNetBufferListContext.c)
 *     ?ndisFreeMdl@@YAXPEAU_MDL@@@Z @ 0x1C0015510 (-ndisFreeMdl@@YAXPEAU_MDL@@@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall NdisFreeFragmentNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        ULONG DataOffsetDelta,
        ULONG FreeFragmentFlags)
{
  ULONG v3; // edi
  _NET_BUFFER *FirstNetBuffer; // rbx
  bool i; // r13
  struct _MDL *j; // rcx
  _NET_BUFFER *v8; // rdi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *Alignment; // r12
  char *NdisPoolHandle; // r14
  _MDL *v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _SLIST_HEADER *v16; // rsi
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v18; // rsi
  unsigned __int64 v19; // rax
  char *v20; // rbx
  _SLIST_HEADER *v21; // rdi
  _SLIST_HEADER *v22; // rcx

  v3 = DataOffsetDelta;
  FragmentNetBufferList->Link.Alignment = 0LL;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(FragmentNetBufferList, 0LL, (struct NDIS_NBL_TRACKER_HANDLE__ *)0x98, 8u, 0);
  FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
  for ( i = (*((_BYTE *)FragmentNetBufferList->NdisPoolHandle + 60) & 1) == 0;
        FirstNetBuffer;
        FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment )
  {
    FirstNetBuffer->DataOffset += v3;
    FirstNetBuffer->DataLength -= v3;
    for ( j = FirstNetBuffer->MdlChain; j; j = FirstNetBuffer->MdlChain )
    {
      *(_QWORD *)&DataOffsetDelta = FirstNetBuffer->DataOffset;
      if ( j->ByteCount > DataOffsetDelta )
        break;
      if ( j == (struct _MDL *)&FirstNetBuffer[1] )
        break;
      FirstNetBuffer->MdlChain = j->Next;
      FirstNetBuffer->DataOffset = DataOffsetDelta - j->ByteCount;
      ndisFreeMdl(j);
    }
    FirstNetBuffer->Link.Region = (unsigned __int64)FirstNetBuffer->MdlChain;
    FirstNetBuffer->CurrentMdlOffset = FirstNetBuffer->DataOffset;
  }
  v8 = FragmentNetBufferList->FirstNetBuffer;
  if ( v8 )
  {
    while ( 1 )
    {
      MdlChain = v8->MdlChain;
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
      Alignment = (_NET_BUFFER *)v8->Link.Alignment;
      if ( v8 == FragmentNetBufferList->FirstNetBuffer )
      {
        if ( i )
          NdisFreeNetBuffer(v8);
        goto LABEL_30;
      }
      NdisPoolHandle = (char *)v8->NdisPoolHandle;
      if ( (*((_DWORD *)NdisPoolHandle + 22) & 1) != 0 )
      {
        v13 = v8->MdlChain;
        if ( (v13->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages(v13->MappedSystemVa, v8->MdlChain);
      }
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_25;
      v14 = (unsigned __int64)LODWORD(v8[-1].SharedMemoryInfo) << 8;
      v15 = (unsigned __int64)&NdisPoolHandle[v14 + 384];
      if ( !*(_BYTE *)(v15 + 216) )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v14 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
      v16 = LODWORD(v8[-1].SharedMemoryInfo) == KeGetPcr()->Prcb.Number
          ? *(_SLIST_HEADER **)(v15 + 192)
          : *(_SLIST_HEADER **)(v15 + 200);
      ++*(_DWORD *)(v15 + 28);
      if ( ExQueryDepthSList(v16) >= *(_WORD *)(v15 + 16) )
        break;
      ExpInterlockedPushEntrySList(v16, (PSLIST_ENTRY)v8);
LABEL_30:
      v8 = Alignment;
      if ( !Alignment )
        goto LABEL_31;
    }
    ++*(_DWORD *)(v15 + 32);
LABEL_25:
    ++*((_DWORD *)NdisPoolHandle + 39);
    if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) < *((_WORD *)NdisPoolHandle + 72) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)NdisPoolHandle + 8, (PSLIST_ENTRY)v8);
    }
    else
    {
      ++*((_DWORD *)NdisPoolHandle + 40);
      (*((void (__fastcall **)(_NET_BUFFER *, char *))NdisPoolHandle + 23))(v8, NdisPoolHandle + 128);
    }
    goto LABEL_30;
  }
LABEL_31:
  Context = FragmentNetBufferList->Context;
  v18 = (char *)FragmentNetBufferList->NdisPoolHandle;
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
    v19 = (unsigned __int64)LODWORD(FragmentNetBufferList[-1].NetBufferListInfo[27]) << 8;
    v20 = &v18[v19 + 384];
    if ( !v20[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v18[v19 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v18 + 128));
    if ( LODWORD(FragmentNetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v21 = (_SLIST_HEADER *)*((_QWORD *)v20 + 24);
    else
      v21 = (_SLIST_HEADER *)*((_QWORD *)v20 + 25);
    ++*((_DWORD *)v20 + 7);
    if ( ExQueryDepthSList(v21) < *((_WORD *)v20 + 8) )
    {
      v22 = v21;
      goto LABEL_50;
    }
    ++*((_DWORD *)v20 + 8);
  }
  ++*((_DWORD *)v18 + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)v18 + 8) >= *((_WORD *)v18 + 72) )
  {
    ++*((_DWORD *)v18 + 40);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v18 + 23))(FragmentNetBufferList, v18 + 128);
    return;
  }
  v22 = (_SLIST_HEADER *)(v18 + 128);
LABEL_50:
  ExpInterlockedPushEntrySList(v22, (PSLIST_ENTRY)FragmentNetBufferList);
}
