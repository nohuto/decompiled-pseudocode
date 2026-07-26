/*
 * XREFs of NdisAllocateCloneNetBufferList @ 0x1C000BDF0
 * Callers:
 *     <none>
 * Callees:
 *     NdisFreeCloneNetBufferList @ 0x1C0004280 (NdisFreeCloneNetBufferList.c)
 *     NdisAllocateNetBuffer @ 0x1C000BB40 (NdisAllocateNetBuffer.c)
 *     NdisAllocateNetBufferList @ 0x1C000C9D0 (NdisAllocateNetBufferList.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0048318 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateCloneNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPoolHandle,
        NDIS_HANDLE NetBufferPoolHandle,
        ULONG AllocateCloneFlags)
{
  unsigned __int64 v4; // rbp
  char *v5; // rsi
  NDIS_HANDLE v6; // r15
  int v7; // eax
  unsigned int Number; // r12d
  int v9; // r15d
  unsigned __int64 v10; // rax
  char *v11; // r14
  _SLIST_HEADER *v12; // rcx
  PSLIST_ENTRY v13; // rax
  struct _NET_BUFFER_LIST *v14; // rdi
  KIRQL v15; // al
  __int64 v16; // r8
  PSLIST_ENTRY v17; // rax
  PSLIST_ENTRY v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *PoolWithTagPriority; // rax
  KIRQL v21; // al
  char **v22; // r8
  void **v23; // rcx
  int v24; // eax
  __int16 v25; // bx
  int v26; // eax
  bool v27; // zf
  _SLIST_HEADER *v28; // rax
  PNET_BUFFER FirstNetBuffer; // r14
  PNET_BUFFER_LIST NetBufferList; // rax
  PNET_BUFFER NetBuffer; // rax
  _QWORD *v32; // rcx
  __int64 *v33; // rsi
  ULONG v34; // r12d
  ULONG v35; // edx
  struct _MDL *v36; // rbx
  PNET_BUFFER v37; // rax
  ULONG ByteCount; // edi
  ULONG v39; // edi
  struct _MDL *v40; // r15
  char *v41; // rcx
  struct _MDL *Mdl; // rax
  ULONG v43; // r12d
  struct _MDL *Next; // rbx
  ULONG v45; // r15d
  char *v46; // rax
  struct _MDL *v47; // rax
  struct _MDL *v48; // rdi
  struct _MDL **v49; // rax
  PNET_BUFFER v50; // rax
  __int64 v51; // rax
  __int128 v52; // xmm0
  __int64 v53; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v56; // [rsp+28h] [rbp-58h]
  char v57; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v4 + 16) = OriginalNetBufferList;
  *(_DWORD *)(v4 + 24) = AllocateCloneFlags;
  v5 = (char *)NetBufferListPoolHandle;
  v6 = NetBufferPoolHandle;
  *(_BYTE *)v4 = (AllocateCloneFlags & 2) != 0;
  if ( !NetBufferListPoolHandle )
    v5 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPoolHandle )
    v6 = ndisNetBufferPool;
  *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v6;
  v7 = *((_DWORD *)v5 + 15);
  if ( (v7 & 1) == 0 )
  {
    NetBufferList = NdisAllocateNetBufferList(v5, 0, 0);
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = NetBufferList;
    v14 = NetBufferList;
    if ( !NetBufferList )
      return v14;
    NetBuffer = NdisAllocateNetBuffer(v6, 0LL, 0, 0LL);
    FirstNetBuffer = NetBuffer;
    if ( !NetBuffer )
      goto LABEL_78;
    v14->Link.Region = (unsigned __int64)NetBuffer;
    goto LABEL_44;
  }
  if ( (v7 & 5) != 1 )
  {
    DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v5);
    return 0LL;
  }
  Number = KeGetPcr()->Prcb.Number;
  v9 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v10 = (unsigned __int64)Number << 8;
    v11 = &v5[v10 + 384];
    if ( !v11[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&v5[v10 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v5 + 128));
    v12 = (_SLIST_HEADER *)*((_QWORD *)v11 + 24);
    ++*((_DWORD *)v11 + 5);
    v13 = ExpInterlockedPopEntrySList(v12);
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v13;
    v14 = (struct _NET_BUFFER_LIST *)v13;
    if ( !v13 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v11 + 25)) < 0xAu )
        goto LABEL_13;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 26);
      v16 = *((_QWORD *)v11 + 24);
      *((_QWORD *)v11 + 24) = *((_QWORD *)v11 + 25);
      *((_QWORD *)v11 + 25) = v16;
      KeReleaseSpinLock((PKSPIN_LOCK)v11 + 26, v15);
      v17 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v11 + 24));
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v17;
      v14 = (struct _NET_BUFFER_LIST *)v17;
      if ( !v17 )
LABEL_13:
        ++*((_DWORD *)v11 + 6);
    }
    if ( v14 )
      goto LABEL_26;
  }
  ++*((_DWORD *)v5 + 37);
  v18 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v5 + 8);
  *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v18;
  v14 = (struct _NET_BUFFER_LIST *)v18;
  if ( v18 )
  {
LABEL_25:
    LODWORD(v14[-1].NetBufferListInfo[27]) = Number;
    if ( !v9 )
    {
      v24 = 28;
      goto LABEL_28;
    }
LABEL_26:
    v24 = 27;
LABEL_28:
    v25 = WORD1(v14->NdisReserved[1]);
    memset(v14, 0, 8 * v24 + 136 + 8LL);
    v14->NdisPoolHandle = v5;
    v14->Flags = 256;
    if ( v9 )
      WORD1(v14->NdisReserved[1]) = v25;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(v14, 1LL);
    LOBYTE(v14->NetBufferListInfo[7]) = v5[88];
    v26 = *((_DWORD *)v5 + 15);
    if ( (v26 & 2) != 0 )
    {
      v27 = (v26 & 1) == 0;
      v28 = (_SLIST_HEADER *)&v14[1].NetBufferListInfo[4];
      if ( v27 )
        v28 = (_SLIST_HEADER *)&v14[1];
      v14->Context = (_NET_BUFFER_LIST_CONTEXT *)v28;
      v28->Alignment = 0LL;
      v14->Context->Size = *((_WORD *)v5 + 17);
      v14->Context->Offset = *((_WORD *)v5 + 17);
    }
    memset(&v14[1], 0, 0xB0uLL);
    v14[1].NdisPoolHandle = 0LL;
    *((_DWORD *)&v14[1].NdisPoolHandle + 2) = 0;
    LODWORD(v14[1].ParentNetBufferList) = 0;
    v14[1].NdisReserved[1] = v5;
    v14[1].Link.Region = 0LL;
    LODWORD(v14[1].Context) = 0;
    v14->Link.Region = (unsigned __int64)&v14[1];
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v14, 0LL, 3u, 0LL, 0);
    goto LABEL_38;
  }
  v19 = *((unsigned int *)v5 + 43);
  ++*((_DWORD *)v5 + 38);
  if ( v19 + 32 >= v19 )
  {
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v19 + 32,
                            *((_DWORD *)v5 + 42),
                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      v14 = (struct _NET_BUFFER_LIST *)(PoolWithTagPriority + 4);
      *PoolWithTagPriority = 0LL;
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = PoolWithTagPriority + 4;
      if ( PoolWithTagPriority != (_QWORD *)-32LL )
      {
        *PoolWithTagPriority = v5;
        v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v5 + 1);
        v22 = (char **)*((_QWORD *)v5 + 2);
        v23 = &v14[-1].NetBufferListInfo[25];
        *v23 = v22;
        v23[1] = v5 + 16;
        if ( v22[1] != v5 + 16 )
          __fastfail(3u);
        v22[1] = (char *)v23;
        *((_QWORD *)v5 + 2) = v23;
        KeReleaseSpinLock((PKSPIN_LOCK)v5 + 1, v21);
      }
    }
    else
    {
      v14 = 0LL;
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
    }
    v9 = 0;
    if ( !v14 )
      return v14;
    goto LABEL_25;
  }
  v14 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
LABEL_38:
  if ( !v14 )
    return v14;
  FirstNetBuffer = v14->FirstNetBuffer;
  v6 = *(NDIS_HANDLE *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_44:
  v32 = *(_QWORD **)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  v33 = (__int64 *)v32[1];
  if ( !v33 )
  {
LABEL_70:
    v14->SourceHandle = (void *)v32[15];
    v14->NetBufferListInfo[16] = (void *)v32[34];
    v51 = v32[28];
    if ( (v51 & 1) == 0 && (v51 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v32, v14, 0LL, 0LL);
      v32 = *(_QWORD **)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v32[31] & 0x7FFFFFFFFFFFFFFFLL;
      v52 = *(_OWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
      v53 = (__int64)v14->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v52;
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v53;
      LODWORD(v53) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_OWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x80);
      if ( (_DWORD)v53 )
      {
        EtwEx_tidActivityInfoTransfer(
          (unsigned __int64)v32,
          (const struct _EVENT_DESCRIPTOR *)0x7FFFFFFFFFFFFFFFLL,
          (const struct _GUID *)(v4 + 160),
          (const struct _GUID *)(v4 + 176),
          Irp,
          v56,
          1u);
        v32 = *(_QWORD **)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v14, 0LL, 5u, v32, 0);
    return v14;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = *((_DWORD *)v33 + 6);
      v35 = *((_DWORD *)v33 + 10);
      v36 = (struct _MDL *)v33[4];
      if ( *(_BYTE *)v4 )
      {
        FirstNetBuffer->MdlChain = v36;
        FirstNetBuffer->Link.Region = v33[1];
        FirstNetBuffer->DataLength = *((_DWORD *)v33 + 6);
        FirstNetBuffer->DataOffset = v35;
        FirstNetBuffer->CurrentMdlOffset = *((_DWORD *)v33 + 4);
        goto LABEL_47;
      }
      if ( v36 )
        break;
LABEL_47:
      v33 = (__int64 *)*v33;
      if ( !v33 )
        goto LABEL_69;
      v37 = NdisAllocateNetBuffer(v6, 0LL, 0, 0LL);
      if ( !v37 )
        goto LABEL_78;
      FirstNetBuffer->Link.Alignment = (unsigned __int64)v37;
      FirstNetBuffer = v37;
    }
    while ( 1 )
    {
      ByteCount = v36->ByteCount;
      if ( v35 < ByteCount )
        break;
      v36 = v36->Next;
      v35 -= ByteCount;
      if ( !v36 )
        goto LABEL_47;
    }
    v39 = ByteCount - v35;
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0LL;
    v40 = 0LL;
    if ( v39 >= v34 )
      v39 = v34;
    if ( v39 )
    {
      v41 = (char *)v36->StartVa + v36->ByteOffset + v35;
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v41;
      Mdl = IoAllocateMdl(v41, v39, 0, 0, 0LL);
      *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = Mdl;
      v40 = Mdl;
      if ( !Mdl )
        goto LABEL_78;
      IoBuildPartialMdl(v36, Mdl, *(PVOID *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0), v39);
      v40->Next = 0LL;
    }
    FirstNetBuffer->Link.Region = (unsigned __int64)v40;
    FirstNetBuffer->MdlChain = v40;
    FirstNetBuffer->DataLength = *((_DWORD *)v33 + 6);
    FirstNetBuffer->CurrentMdlOffset = 0;
    FirstNetBuffer->DataOffset = 0;
    v43 = v34 - v39;
    if ( v43 )
    {
      Next = v36->Next;
      if ( Next )
        break;
    }
LABEL_66:
    v33 = (__int64 *)*v33;
    if ( !v33 )
    {
LABEL_69:
      v14 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      v32 = *(_QWORD **)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      goto LABEL_70;
    }
    v6 = *(NDIS_HANDLE *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    v50 = NdisAllocateNetBuffer(v6, 0LL, 0, 0LL);
    if ( !v50 )
      goto LABEL_78;
    FirstNetBuffer->Link.Alignment = (unsigned __int64)v50;
    FirstNetBuffer = v50;
  }
  while ( 1 )
  {
    v45 = Next->ByteCount;
    v46 = (char *)Next->StartVa + Next->ByteOffset;
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v46;
    if ( v45 > v43 )
      v45 = v43;
    v47 = IoAllocateMdl(v46, v45, 0, 0, 0LL);
    v48 = v47;
    if ( !v47 )
      break;
    IoBuildPartialMdl(Next, v47, *(PVOID *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0), v45);
    v49 = *(struct _MDL ***)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    *(_QWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v48;
    *v49 = v48;
    v48->Next = 0LL;
    v43 -= v45;
    if ( v43 )
    {
      Next = Next->Next;
      if ( Next )
        continue;
    }
    goto LABEL_66;
  }
LABEL_78:
  NdisFreeCloneNetBufferList(
    *(PNET_BUFFER_LIST *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(_DWORD *)(((unsigned __int64)&v57 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
  return 0LL;
}
