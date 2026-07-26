/*
 * XREFs of NdisFreeCloneNetBufferList @ 0x1C000C3C0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000AEA0 (NdisAllocateCloneNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000BAC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000C614 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     NdisFreeNetBuffer @ 0x1C000D790 (NdisFreeNetBuffer.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     NdisFreeNetBufferListContext @ 0x1C00479F0 (NdisFreeNetBufferListContext.c)
 */

void __stdcall NdisFreeCloneNetBufferList(PNET_BUFFER_LIST CloneNetBufferList, ULONG FreeCloneFlags)
{
  _BYTE *v2; // rbp
  bool v4; // r15
  _DWORD *NdisPoolHandle; // rdi
  __int64 v6; // rdx
  enum _NDIS_NBL_TRACKER_MODE v7; // eax
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  PNET_BUFFER_LIST Alignment; // rsi
  void *v12; // rcx
  void *SourceHandle; // rax
  bool v14; // r14
  _NET_BUFFER *FirstNetBuffer; // rsi
  struct _MDL *MdlChain; // rcx
  struct _MDL *Next; // rdi
  _NET_BUFFER *v18; // rdi
  _NET_BUFFER_LIST_CONTEXT *Context; // rcx
  char *v20; // r14
  unsigned __int64 v21; // rax
  char *v22; // rdi
  _SLIST_HEADER *v23; // rsi
  _SLIST_HEADER *v24; // rcx
  char *v25; // r14
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
    v8 = 0LL;
    *v2 = 0;
    v9 = 0LL;
    v10 = 0LL;
    if ( v7 >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(CloneNetBufferList, 0LL, 6u, (void *)0x88, 0);
      v6 = 0LL;
    }
    Alignment = CloneNetBufferList;
    do
    {
      v12 = Alignment->NetBufferListInfo[26];
      do
      {
        if ( Alignment->NetBufferListInfo[26] != v12 )
          break;
        if ( !v12 && !Alignment->SourceHandle )
          Alignment->SourceHandle = 0LL;
        if ( ((unsigned __int8)v12 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
        {
          Alignment->NetBufferListInfo[26] = (void *)140;
        }
        else if ( SourceHandle != (void *)136 || Alignment->ParentNetBufferList )
        {
          ++v8;
          Alignment->NetBufferListInfo[26] = (void *)136;
        }
        else
        {
          ++v10;
          Alignment->NetBufferListInfo[26] = (void *)24;
          ++v8;
        }
        Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
      }
      while ( Alignment );
      if ( ((unsigned __int8)v12 & 1) != 0 )
      {
        ndisNblTrackerUpdateOwnershipCount(v12, v9 - v8, v2 + 1, (unsigned __int64)&v26 & 0xFFFFFFFFFFFFFFC0uLL);
        v6 = 0LL;
      }
      v9 = v8;
    }
    while ( Alignment );
  }
  v14 = (NdisPoolHandle[15] & 1) == 0;
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
      v18 = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
      if ( FirstNetBuffer != CloneNetBufferList->FirstNetBuffer || v14 )
        NdisFreeNetBuffer(FirstNetBuffer);
      FirstNetBuffer = v18;
    }
    while ( v18 );
  }
  Context = CloneNetBufferList->Context;
  v20 = (char *)CloneNetBufferList->NdisPoolHandle;
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
    v21 = (unsigned __int64)LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) << 8;
    v22 = &v20[v21 + 384];
    if ( !v22[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v20[v21 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v20 + 128));
    if ( LODWORD(CloneNetBufferList[-1].NetBufferListInfo[27]) == KeGetPcr()->Prcb.Number )
      v23 = (_SLIST_HEADER *)*((_QWORD *)v22 + 24);
    else
      v23 = (_SLIST_HEADER *)*((_QWORD *)v22 + 25);
    ++*((_DWORD *)v22 + 7);
    if ( ExQueryDepthSList(v23) < *((_WORD *)v22 + 8) )
    {
      v24 = v23;
LABEL_37:
      ExpInterlockedPushEntrySList(v24, (PSLIST_ENTRY)CloneNetBufferList);
      return;
    }
    ++*((_DWORD *)v22 + 8);
  }
  v25 = v20 + 128;
  ++*((_DWORD *)v25 + 7);
  if ( ExQueryDepthSList((PSLIST_HEADER)v25) < *((_WORD *)v25 + 8) )
  {
    v24 = (_SLIST_HEADER *)v25;
    goto LABEL_37;
  }
  ++*((_DWORD *)v25 + 8);
  (*((void (__fastcall **)(PNET_BUFFER_LIST, char *))v25 + 7))(CloneNetBufferList, v25);
}
