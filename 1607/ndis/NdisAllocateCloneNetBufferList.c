/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C0005360
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBuffer @ 0x1C0005850 (NdisAllocateNetBuffer.c)
 *     NdisAllocateNetBufferList @ 0x1C0006050 (NdisAllocateNetBufferList.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0006450 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeCloneNetBufferList @ 0x1C0006C90 (NdisFreeCloneNetBufferList.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0010AE4 (ndisGenerateNetBufferListCorrelationIds.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004C908 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  struct _NDIS_NET_BUFFER_POOL *v5; // rdi
  char *v6; // r14
  PNET_BUFFER_LIST v7; // r12
  int v8; // eax
  unsigned int Number; // r15d
  int v10; // r13d
  unsigned __int64 v11; // rax
  char *v12; // rdi
  _SLIST_HEADER *v13; // rcx
  struct _NET_BUFFER_LIST *NetBufferList; // rbx
  int v15; // eax
  __int16 v16; // di
  int v17; // eax
  SIZE_T DataOffset; // rdx
  PNET_BUFFER FirstNetBuffer; // r15
  _NET_BUFFER *Alignment; // rdi
  void *v21; // r14
  ULONG DataLength; // eax
  struct _MDL *MdlChain; // r13
  unsigned int ByteCount; // r14d
  ULONG v25; // r14d
  struct _MDL *v26; // r12
  char *v27; // rcx
  struct _MDL *Mdl; // rax
  unsigned int v29; // eax
  struct _MDL *Next; // r14
  ULONG v32; // ecx
  char *v33; // r13
  struct _MDL *v34; // rax
  struct _MDL *v35; // rax
  unsigned __int64 v36; // rax
  _QWORD *PoolWithTagPriority; // rax
  KIRQL v38; // al
  char **v39; // r8
  void ***v40; // rdx
  void **v41; // rcx
  KIRQL v42; // al
  __int64 v43; // r8
  bool v44; // zf
  _SLIST_HEADER *v45; // rax
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v47; // rax
  PNET_BUFFER v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v52; // [rsp+28h] [rbp-58h]
  _BYTE v53[4]; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(v4 + 128) = AllocateCloneFlags;
  v5 = (struct _NDIS_NET_BUFFER_POOL *)NetBufferPoolHandle;
  *(_QWORD *)(v4 + 64) = NetBufferPoolHandle;
  v6 = (char *)NetBufferListPoolHandle;
  *(_QWORD *)(v4 + 136) = OriginalNetBufferList;
  v7 = OriginalNetBufferList;
  *(_BYTE *)v4 = (AllocateCloneFlags & 2) != 0;
  if ( !NetBufferListPoolHandle )
    v6 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPoolHandle )
  {
    v5 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v8 = *((_DWORD *)v6 + 15);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v6);
      return 0LL;
    }
    Number = KeGetPcr()->Prcb.Number;
    v10 = 1;
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v11 = (unsigned __int64)Number << 8;
      v12 = &v6[v11 + 384];
      if ( !v12[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&v6[v11 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v6 + 128));
      v13 = (_SLIST_HEADER *)*((_QWORD *)v12 + 24);
      ++*((_DWORD *)v12 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v13);
      if ( !NetBufferList )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v12 + 25)) < 0xAu
          || (v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 26),
              v43 = *((_QWORD *)v12 + 24),
              *((_QWORD *)v12 + 24) = *((_QWORD *)v12 + 25),
              *((_QWORD *)v12 + 25) = v43,
              KeReleaseSpinLock((PKSPIN_LOCK)v12 + 26, v42),
              (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v12 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v12 + 6);
        }
      }
      if ( NetBufferList )
        goto LABEL_14;
    }
    ++*((_DWORD *)v6 + 37);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v6 + 8);
    if ( !NetBufferList )
    {
      v36 = *((unsigned int *)v6 + 43);
      ++*((_DWORD *)v6 + 38);
      DataOffset = v36 + 32;
      if ( v36 + 32 < v36 )
      {
        NetBufferList = 0LL;
LABEL_22:
        if ( !NetBufferList )
          return NetBufferList;
        FirstNetBuffer = NetBufferList->FirstNetBuffer;
        goto LABEL_24;
      }
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              NonPagedPoolNx,
                              DataOffset,
                              *((_DWORD *)v6 + 42),
                              NormalPoolPriority);
      if ( PoolWithTagPriority )
      {
        NetBufferList = (struct _NET_BUFFER_LIST *)(PoolWithTagPriority + 4);
        *PoolWithTagPriority = 0LL;
        if ( PoolWithTagPriority != (_QWORD *)-32LL )
        {
          *PoolWithTagPriority = v6;
          v38 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 1);
          v39 = (char **)*((_QWORD *)v6 + 2);
          v40 = (void ***)(v6 + 16);
          v41 = &NetBufferList[-1].NetBufferListInfo[25];
          if ( v39[1] != v6 + 16 )
            __fastfail(3u);
          v41[1] = v40;
          *v41 = v39;
          v39[1] = (char *)v41;
          *v40 = v41;
          KeReleaseSpinLock((PKSPIN_LOCK)v6 + 1, v38);
        }
      }
      else
      {
        NetBufferList = 0LL;
      }
      v10 = 0;
      if ( !NetBufferList )
        return NetBufferList;
    }
    LODWORD(NetBufferList[-1].NetBufferListInfo[27]) = Number;
    if ( v10 )
LABEL_14:
      v15 = 27;
    else
      v15 = 28;
    v16 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * v15 + 136 + 8LL);
    NetBufferList->NdisPoolHandle = v6;
    NetBufferList->Flags = 256;
    if ( v10 )
      WORD1(NetBufferList->NdisReserved[1]) = v16;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1LL);
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v6[88];
    v17 = *((_DWORD *)v6 + 15);
    if ( (v17 & 2) != 0 )
    {
      v44 = (v17 & 1) == 0;
      v45 = (_SLIST_HEADER *)&NetBufferList[1].NetBufferListInfo[4];
      if ( v44 )
        v45 = (_SLIST_HEADER *)&NetBufferList[1];
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)v45;
      v45->Alignment = 0LL;
      NetBufferList->Context->Size = *((_WORD *)v6 + 17);
      NetBufferList->Context->Offset = *((_WORD *)v6 + 17);
    }
    memset(&NetBufferList[1], 0, 0xB0uLL);
    NetBufferList[1].NdisPoolHandle = 0LL;
    *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
    LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
    NetBufferList[1].NdisReserved[1] = v6;
    NetBufferList[1].Link.Region = 0LL;
    LODWORD(NetBufferList[1].Context) = 0;
    NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 3u, 0LL, 0);
    goto LABEL_22;
  }
  NetBufferList = NdisAllocateNetBufferList(v6, 0, 0);
  if ( !NetBufferList )
    return NetBufferList;
  NetBuffer = NdisAllocateNetBuffer(v5, 0LL, 0, 0LL);
  FirstNetBuffer = NetBuffer;
  if ( !NetBuffer )
    goto LABEL_85;
  NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
LABEL_24:
  Alignment = v7->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_37:
    NetBufferList->SourceHandle = v7->SourceHandle;
    NetBufferList->NetBufferListInfo[16] = v7->NetBufferListInfo[16];
    if ( ((unsigned __int64)v7->NetBufferListInfo[10] & 0xFFFFFFFFFFFFFFFCuLL) != 0
      && ((__int64)v7->NetBufferListInfo[10] & 1) == 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v7, NetBufferList, 0LL, 0LL);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = (__int64)v7->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      v49 = *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      v50 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v49;
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v50;
      LODWORD(v50) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                      + 0xA0);
      if ( (_DWORD)v50 )
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)DataOffset,
          (const struct _GUID *)(v4 + 176),
          (const struct _GUID *)(v4 + 192),
          Irp,
          v52,
          1u);
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 5u, v7, 0);
    return NetBufferList;
  }
  v21 = *(void **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  while ( 1 )
  {
    while ( 1 )
    {
      DataLength = Alignment->DataLength;
      DataOffset = Alignment->DataOffset;
      MdlChain = Alignment->MdlChain;
      *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = DataLength;
      if ( !*(_BYTE *)v4 )
        break;
      FirstNetBuffer->MdlChain = MdlChain;
      FirstNetBuffer->Link.Region = Alignment->Link.Region;
      FirstNetBuffer->DataLength = Alignment->DataLength;
      FirstNetBuffer->DataOffset = DataOffset;
      FirstNetBuffer->CurrentMdlOffset = Alignment->CurrentMdlOffset;
LABEL_78:
      Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
      {
LABEL_36:
        v7 = *(PNET_BUFFER_LIST *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
        goto LABEL_37;
      }
      v47 = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
      if ( !v47 )
        goto LABEL_85;
      FirstNetBuffer->Link.Alignment = (unsigned __int64)v47;
      FirstNetBuffer = v47;
    }
    if ( !MdlChain )
      goto LABEL_78;
    while ( 1 )
    {
      ByteCount = MdlChain->ByteCount;
      if ( (unsigned int)DataOffset < ByteCount )
        break;
      MdlChain = MdlChain->Next;
      DataOffset = (unsigned int)DataOffset - ByteCount;
      if ( !MdlChain )
      {
        v21 = *(void **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        goto LABEL_78;
      }
    }
    v25 = ByteCount - DataOffset;
    v26 = 0LL;
    if ( v25 >= DataLength )
      v25 = DataLength;
    if ( v25 )
    {
      v27 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + (unsigned int)DataOffset;
      *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v27;
      Mdl = IoAllocateMdl(v27, v25, 0, 0, 0LL);
      v26 = Mdl;
      if ( !Mdl )
        goto LABEL_85;
      IoBuildPartialMdl(MdlChain, Mdl, *(PVOID *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0), v25);
      DataLength = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v26->Next = 0LL;
    }
    FirstNetBuffer->Link.Region = (unsigned __int64)v26;
    v29 = DataLength - v25;
    FirstNetBuffer->MdlChain = v26;
    FirstNetBuffer->DataLength = Alignment->DataLength;
    FirstNetBuffer->CurrentMdlOffset = 0;
    FirstNetBuffer->DataOffset = 0;
    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v29;
    if ( v29 )
    {
      Next = MdlChain->Next;
      if ( MdlChain->Next )
        break;
    }
LABEL_35:
    Alignment = (_NET_BUFFER *)Alignment->Link.Alignment;
    if ( !Alignment )
      goto LABEL_36;
    v21 = *(void **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    v48 = NdisAllocateNetBuffer(v21, 0LL, 0, 0LL);
    if ( !v48 )
      goto LABEL_85;
    FirstNetBuffer->Link.Alignment = (unsigned __int64)v48;
    FirstNetBuffer = v48;
  }
  while ( 1 )
  {
    v32 = Next->ByteCount;
    v33 = (char *)Next->StartVa + Next->ByteOffset;
    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v32;
    if ( v32 > v29 )
    {
      v32 = v29;
      *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v29;
    }
    v34 = IoAllocateMdl(v33, v32, 0, 0, 0LL);
    *(_QWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v34;
    if ( !v34 )
      break;
    IoBuildPartialMdl(Next, v34, v33, *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0));
    v35 = *(struct _MDL **)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    v26->Next = v35;
    v26 = v35;
    v35->Next = 0LL;
    v29 = *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4)
        - *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0);
    *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v29;
    if ( v29 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_35;
  }
LABEL_85:
  NdisFreeCloneNetBufferList(NetBufferList, *(_DWORD *)(((unsigned __int64)v53 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80));
  return 0LL;
}
