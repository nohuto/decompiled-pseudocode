/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C0004280
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000BDF0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000452C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBuffer @ 0x1C000F670 (NdisFreeNetBuffer.c)
 *     NdisFreeNetBufferListContext @ 0x1C0010DC0 (NdisFreeNetBufferListContext.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  _BYTE *NdisPoolHandle; // r13
  char v4; // r12
  __int64 v5; // rdx
  char v6; // r12
  enum _NDIS_NBL_TRACKER_MODE v7; // eax
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rsi
  PNET_BUFFER_LIST Alignment; // rbx
  void *v13; // rcx
  void *SourceHandle; // rax
  _NET_BUFFER *FirstNetBuffer; // rdi
  bool v16; // si
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rbx
  _NET_BUFFER *v19; // rbx
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v21; // rsi
  unsigned __int64 v22; // rax
  char *v23; // rbx
  _SLIST_HEADER *v24; // rdi
  _SLIST_HEADER *v25; // rcx
  char v26; // [rsp+70h] [rbp+0h] BYREF

  v2 = (_BYTE *)((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
  NdisPoolHandle = CloneNetBufferList->NdisPoolHandle;
  v4 = (unsigned __int8)FreeCloneFlags >> 1;
  v5 = 0LL;
  v6 = v4 & 1;
  CloneNetBufferList->Link.Alignment = 0LL;
  v7 = ndisNblTrackerMode;
  if ( ndisNblTrackerMode )
  {
    *(_BYTE *)(((unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 0;
    v9 = 0LL;
    *v2 = 0;
    v10 = 0LL;
    v11 = 0LL;
    if ( v7 >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
    Alignment = CloneNetBufferList;
    do
    {
      v13 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v13 )
          break;
        if ( !v13 && !Alignment->SourceHandle )
          Alignment->SourceHandle = 0LL;
        if ( ((unsigned __int8)v13 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
        {
          Alignment->NetBufferListInfo[26] = (void *)140;
        }
        else if ( SourceHandle != (void *)136 || Alignment->ParentNetBufferList )
        {
          ++v9;
          Alignment->NetBufferListInfo[26] = (void *)136;
        }
        else
        {
          ++v11;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v9;
        }
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      if ( ((unsigned __int8)v13 & 1) != 0 )
        ndisNblTrackerUpdateOwnershipCount(v13, v10 - v9, v2 + 1, (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
      v10 = v9;
      v5 = 0LL;
    }
    while ( Alignment );
  }
  FirstNetBuffer = CloneNetBufferList->FirstNetBuffer;
  v16 = (NdisPoolHandle[60] & 1) == 0;
  if ( FirstNetBuffer )
  {
    do
    {
      if ( !v6 )
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
      v19 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v16 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v19;
    }
    while ( v19 );
  }
  Context = CloneNetBufferList->Context;
  v21 = (char *)CloneNetBufferList->NdisPoolHandle;
  if ( Context && (CloneNetBufferList->Flags & 0x400) != 0 )
    NdisFreeNetBufferListContext(CloneNetBufferList, Context->Size - Context->Offset);
  CloneNetBufferList->Flags &= ~0x100u;
  if ( ((unsigned __int64)CloneNetBufferList->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    LOBYTE(v5) = 1;
    WfpNblInfoCleanup(CloneNetBufferList, v5);
  }
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 4u, 0LL, 0);
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v22 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) << 8;
    v23 = &v21[v22 + 384];
    if ( !v23[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v21[v22 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v21 + 128));
    if ( LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v24 = (_SLIST_HEADER *)*((_QWORD *)v23 + 24);
    else
      v24 = (_SLIST_HEADER *)*((_QWORD *)v23 + 25);
    ++*((_DWORD *)v23 + 7);
    if ( ExQueryDepthSList(v24) < *((_WORD *)v23 + 8) )
    {
      v25 = v24;
      goto LABEL_48;
    }
    ++*((_DWORD *)v23 + 8);
  }
  ++*((_DWORD *)v21 + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)v21 + 8) >= *((_WORD *)v21 + 72) )
  {
    ++*((_DWORD *)v21 + 40);
    (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v21 + 23))(CloneNetBufferList, v21 + 128);
    return;
  }
  v25 = (_SLIST_HEADER *)(v21 + 128);
LABEL_48:
  ExpInterlockedPushEntrySList(v25, (PSLIST_ENTRY)CloneNetBufferList);
}
