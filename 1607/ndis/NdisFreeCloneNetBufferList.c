/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0006C90
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C0005360 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0006450 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C000F5A0 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010000 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C0012AB0 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  bool v4; // r15
  _DWORD *NdisPoolHandle; // rdi
  __int64 v6; // rdx
  enum _NDIS_NBL_TRACKER_MODE v7; // eax
  bool v8; // r14
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rdi
  _NET_BUFFER *v12; // rdi
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v14; // rsi
  unsigned __int64 v15; // rax
  char *v16; // rdi
  _SLIST_HEADER *v17; // r14
  _SLIST_HEADER *v18; // rcx
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // r13
  PNET_BUFFER_LIST Alignment; // rsi
  void *v23; // rcx
  void *SourceHandle; // rax
  char *v25; // rsi
  char v26; // [rsp+70h] [rbp+0h] BYREF

  v2 = (_BYTE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (FreeCloneFlags & 2) != 0;
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  v6 = 0LL;
  CloneNetBufferList->Link.Alignment = 0LL;
  v7 = ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    v19 = 0LL;
    *v2 = 0;
    v20 = 0LL;
    v21 = 0LL;
    if ( v7 >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
      v6 = 0LL;
    }
    Alignment = CloneNetBufferList;
    do
    {
      v23 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v23 )
          break;
        if ( !v23 && !Alignment->SourceHandle )
          Alignment->SourceHandle = 0LL;
        if ( ((unsigned __int8)v23 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
        {
          Alignment->NetBufferListInfo[26] = (void *)140;
        }
        else if ( SourceHandle != (void *)136 || Alignment->ParentNetBufferList )
        {
          ++v19;
          Alignment->NetBufferListInfo[26] = (void *)136;
        }
        else
        {
          ++v21;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v19;
        }
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      if ( ((unsigned __int8)v23 & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(v23, v20 - v19, v2 + 1, (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
        v6 = 0LL;
      }
      v20 = v19;
    }
    while ( Alignment );
  }
  v8 = (NdisPoolHandle[15] & 1) == 0;
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v4 )
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
      }
      v12 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v8 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v12;
    }
    while ( v12 );
  }
  Context = CloneNetBufferList->Context;
  v14 = (char *)CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v6) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, v6);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v15 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) << 8;
    v16 = &v14[v15 + 384];
    if ( !v16[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v14[v15 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v14 + 128));
    if ( LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v17 = (_SLIST_HEADER *)*((_QWORD *)v16 + 24);
    else
      v17 = (_SLIST_HEADER *)*((_QWORD *)v16 + 25);
    ++*((_DWORD *)v16 + 7);
    if ( ExQueryDepthSList(v17) < *((_WORD *)v16 + 8) )
    {
      v18 = v17;
LABEL_21:
      ExpInterlockedPushEntrySList(v18, (PSLIST_ENTRY)CloneNetBufferList);
      return;
    }
    ++*((_DWORD *)v16 + 8);
  }
  v25 = v14 + 128;
  ++*((_DWORD *)v25 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v25) < *((_WORD *)v25 + 8) )
  {
    v18 = (_SLIST_HEADER *)v25;
    goto LABEL_21;
  }
  ++*((_DWORD *)v25 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v25 + 7))(CloneNetBufferList, v25);
}
