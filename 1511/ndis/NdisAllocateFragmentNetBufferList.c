/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C0014630
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBuffer @ 0x1C000BB40 (NdisAllocateNetBuffer.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C000BDB0 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 *     NdisAllocateNetBufferList @ 0x1C000C9D0 (NdisAllocateNetBufferList.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisAdvanceNetBufferDataStart @ 0x1C000D910 (NdisAdvanceNetBufferDataStart.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C0014FA0 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z @ 0x1C00152D0 (-ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0048318 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateFragmentNetBufferList(
        PNET_BUFFER_LIST OriginalNetBufferList,
        NDIS_HANDLE NetBufferListPool,
        NDIS_HANDLE NetBufferPool,
        ULONG StartOffset,
        ULONG MaximumLength,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateFragmentFlags)
{
  unsigned __int64 v8; // rbp
  ULONG v9; // esi
  ULONG v10; // r14d
  NDIS_HANDLE v11; // rbx
  char *v12; // rdi
  struct _NET_BUFFER_LIST *v14; // r13
  int v15; // eax
  unsigned int Number; // r15d
  int v17; // r14d
  unsigned __int64 v18; // rax
  char *v19; // rsi
  _SLIST_HEADER *v20; // rcx
  PSLIST_ENTRY v21; // rax
  KIRQL v22; // al
  __int64 v23; // rdx
  PSLIST_ENTRY v24; // rax
  PSLIST_ENTRY v25; // rax
  SIZE_T v26; // rdx
  ULONG v27; // r8d
  POOL_TYPE v28; // ecx
  struct _NET_BUFFER_LIST *v29; // rax
  KIRQL v30; // al
  char **v31; // r8
  void **v32; // rcx
  int v33; // eax
  __int16 v34; // bx
  int v35; // eax
  bool v36; // zf
  _SLIST_HEADER *v37; // rax
  PNET_BUFFER_LIST NetBufferList; // rax
  PNET_BUFFER NetBuffer; // rax
  _NET_BUFFER *FirstNetBuffer; // rcx
  _QWORD *p_Alignment; // r15
  ULONG v42; // r12d
  ULONG DataLength; // edx
  struct _MDL *MdlChain; // rdi
  ULONG v45; // r13d
  ULONG ByteCount; // r14d
  unsigned int v47; // edx
  ULONG v48; // r14d
  ULONG v49; // ebx
  char *v50; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v52; // rsi
  void *v53; // r8
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rsi
  _SLIST_HEADER *v58; // rcx
  PSLIST_ENTRY v59; // rbx
  KIRQL v60; // al
  __int64 v61; // r8
  SIZE_T v62; // rdx
  ULONG v63; // r8d
  POOL_TYPE v64; // ecx
  _SLIST_ENTRY *v65; // rax
  KIRQL v66; // al
  __int64 v67; // r9
  _QWORD *v68; // rdx
  PNET_BUFFER v69; // rax
  struct _NET_BUFFER *Alignment; // rbx
  unsigned int DataOffset; // ecx
  ULONG v73; // ecx
  PMDL v74; // rax
  ULONG v75; // edx
  ULONG v76; // ecx
  _QWORD *v77; // rcx
  __int64 v78; // rax
  __int128 v79; // xmm0
  __int64 v80; // rax
  struct _NET_BUFFER *i; // rsi
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v83; // [rsp+28h] [rbp-58h]
  int v84; // [rsp+80h] [rbp+0h] BYREF

  v8 = (unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL;
  v9 = MaximumLength;
  *(_DWORD *)v8 = StartOffset;
  v10 = StartOffset;
  *(_QWORD *)(v8 + 40) = OriginalNetBufferList;
  v11 = NetBufferPool;
  *(_QWORD *)(v8 + 48) = 0LL;
  v12 = (char *)NetBufferListPool;
  v14 = 0LL;
  if ( !MaximumLength )
    return v14;
  if ( !NetBufferListPool )
    v12 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPool )
    v11 = ndisNetBufferPool;
  *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v11;
  v15 = *((_DWORD *)v12 + 15);
  if ( (v15 & 1) != 0 )
  {
    if ( (v15 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v12);
      return v14;
    }
    Number = KeGetPcr()->Prcb.Number;
    v17 = 1;
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v18 = (unsigned __int64)Number << 8;
      v19 = &v12[v18 + 384];
      if ( !v19[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&v12[v18 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v12 + 128));
      v20 = (_SLIST_HEADER *)*((_QWORD *)v19 + 24);
      ++*((_DWORD *)v19 + 5);
      v21 = ExpInterlockedPopEntrySList(v20);
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v21;
      v14 = (struct _NET_BUFFER_LIST *)v21;
      if ( !v21 )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v19 + 25)) < 0xAu )
          goto LABEL_14;
        v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v19 + 26);
        v23 = *((_QWORD *)v19 + 24);
        *((_QWORD *)v19 + 24) = *((_QWORD *)v19 + 25);
        *((_QWORD *)v19 + 25) = v23;
        KeReleaseSpinLock((PKSPIN_LOCK)v19 + 26, v22);
        v24 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v19 + 24));
        *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24;
        v14 = (struct _NET_BUFFER_LIST *)v24;
        if ( !v24 )
LABEL_14:
          ++*((_DWORD *)v19 + 6);
      }
      if ( v14 )
        goto LABEL_23;
    }
    ++*((_DWORD *)v12 + 37);
    v25 = ExpInterlockedPopEntrySList((PSLIST_HEADER)v12 + 8);
    *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v25;
    v14 = (struct _NET_BUFFER_LIST *)v25;
    if ( !v25 )
    {
      v26 = *((unsigned int *)v12 + 43);
      v27 = *((_DWORD *)v12 + 42);
      v28 = *((_DWORD *)v12 + 41);
      ++*((_DWORD *)v12 + 38);
      v29 = (struct _NET_BUFFER_LIST *)ndisAllocateFromNPagedPool(v28, v26, v27, (PLOOKASIDE_LIST_EX)(v12 + 128));
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v29;
      v14 = v29;
      if ( v29 )
      {
        v29[-1].NetBufferListInfo[24] = v12;
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v12 + 1);
        v31 = (char **)*((_QWORD *)v12 + 2);
        v32 = &v14[-1].NetBufferListInfo[25];
        *v32 = v31;
        v32[1] = v12 + 16;
        if ( v31[1] != v12 + 16 )
          __fastfail(3u);
        v31[1] = (char *)v32;
        *((_QWORD *)v12 + 2) = v32;
        KeReleaseSpinLock((PKSPIN_LOCK)v12 + 1, v30);
      }
      v17 = 0;
      if ( !v14 )
        return v14;
    }
    LODWORD(v14[-1].NetBufferListInfo[27]) = Number;
    if ( v17 )
LABEL_23:
      v33 = 27;
    else
      v33 = 28;
    v34 = WORD1(v14->NdisReserved[1]);
    memset(v14, 0, 8 * v33 + 136 + 8LL);
    v14->NdisPoolHandle = v12;
    v14->Flags = 256;
    if ( v17 )
      WORD1(v14->NdisReserved[1]) = v34;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(v14);
    LOBYTE(v14->NetBufferListInfo[7]) = v12[88];
    v35 = *((_DWORD *)v12 + 15);
    if ( (v35 & 2) != 0 )
    {
      v36 = (v35 & 1) == 0;
      v37 = (_SLIST_HEADER *)&v14[1].NetBufferListInfo[4];
      if ( v36 )
        v37 = (_SLIST_HEADER *)&v14[1];
      v14->Context = (_NET_BUFFER_LIST_CONTEXT *)v37;
      v37->Alignment = 0LL;
      v14->Context->Size = *((_WORD *)v12 + 17);
      v14->Context->Offset = *((_WORD *)v12 + 17);
    }
    memset(&v14[1], 0, 0xB0uLL);
    v14[1].NdisPoolHandle = 0LL;
    *((_DWORD *)&v14[1].NdisPoolHandle + 2) = 0;
    LODWORD(v14[1].ParentNetBufferList) = 0;
    v14[1].NdisReserved[1] = v12;
    v14[1].Link.Region = 0LL;
    LODWORD(v14[1].Context) = 0;
    v14->Link.Region = (unsigned __int64)&v14[1];
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v14, 0LL, 3u, 0LL, 0);
    if ( !v14 )
      return v14;
    v9 = MaximumLength;
    v10 = *(_DWORD *)v8;
  }
  else
  {
    NetBufferList = NdisAllocateNetBufferList(v12, 0, 0);
    *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = NetBufferList;
    v14 = NetBufferList;
    if ( !NetBufferList )
      return v14;
    NetBuffer = NdisAllocateNetBuffer(v11, 0LL, 0, 0LL);
    if ( !NetBuffer )
      goto LABEL_100;
    v14->Link.Region = (unsigned __int64)NetBuffer;
  }
  FirstNetBuffer = OriginalNetBufferList->FirstNetBuffer;
  *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = FirstNetBuffer;
  if ( !FirstNetBuffer )
    goto LABEL_100;
  while ( FirstNetBuffer->DataLength <= v10 )
  {
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = FirstNetBuffer;
    if ( !FirstNetBuffer )
      goto LABEL_100;
  }
  p_Alignment = &v14->FirstNetBuffer->$CCF7A2EAB29EF556866C95D84BF62ED5::$DDFDC228CE8E89126A97A3E69872BD0C::Link.Alignment;
  v42 = 0;
  while ( 1 )
  {
    DataLength = FirstNetBuffer->DataLength;
    if ( DataLength <= v10 )
      goto LABEL_95;
    MdlChain = FirstNetBuffer->MdlChain;
    v45 = v10 + FirstNetBuffer->DataOffset;
    if ( !MdlChain )
      goto LABEL_95;
    ByteCount = MdlChain->ByteCount;
    if ( v45 < ByteCount )
      break;
    while ( 1 )
    {
      MdlChain = MdlChain->Next;
      v45 -= ByteCount;
      if ( !MdlChain )
        break;
      ByteCount = MdlChain->ByteCount;
      if ( v45 < ByteCount )
        goto LABEL_51;
    }
    v10 = *(_DWORD *)v8;
LABEL_95:
    FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = FirstNetBuffer;
LABEL_96:
    if ( !FirstNetBuffer )
      goto LABEL_103;
    v9 = MaximumLength;
  }
LABEL_51:
  v47 = DataLength - *(_DWORD *)v8;
  v48 = ByteCount - v45;
  *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v47;
  if ( v48 > v47 )
    v48 = v47;
  while ( 1 )
  {
    if ( !v48 )
    {
      MdlChain = MdlChain->Next;
      goto LABEL_87;
    }
    v49 = v9 - v42;
    if ( v47 < v9 - v42 )
      v49 = v47;
    v50 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v45;
    *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v50;
    Mdl = IoAllocateMdl(v50, v49, 0, 0, 0LL);
    v52 = Mdl;
    if ( !Mdl )
      goto LABEL_100;
    v53 = *(void **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    if ( v49 < v48 )
    {
      IoBuildPartialMdl(MdlChain, Mdl, v53, v49);
      v45 += v49;
    }
    else
    {
      v49 = v48;
      IoBuildPartialMdl(MdlChain, Mdl, v53, v48);
    }
    v42 += v49;
    if ( p_Alignment[4] )
    {
      **(_QWORD **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v52;
    }
    else
    {
      p_Alignment[1] = v52;
      p_Alignment[4] = v52;
      *((_DWORD *)p_Alignment + 10) = 0;
      *((_DWORD *)p_Alignment + 4) = 0;
    }
    v48 -= v49;
    v47 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) - v49;
    *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v52;
    v52->Next = 0LL;
    *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v47;
    if ( !v47 )
      break;
    if ( v48 )
    {
      *((_DWORD *)p_Alignment + 6) = v42;
    }
    else
    {
      MdlChain = MdlChain->Next;
      if ( !MdlChain )
        break;
      v9 = MaximumLength;
      v45 = 0;
      v48 = MdlChain->ByteCount;
      if ( v42 < MaximumLength )
        goto LABEL_87;
      *((_DWORD *)p_Alignment + 6) = v42;
      if ( !v48 )
        goto LABEL_87;
    }
    v54 = *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v54 )
      goto LABEL_100;
    v55 = *(unsigned int *)(v54 + 88);
    if ( (v55 & 1) != 0 )
    {
      DbgPrint(
        "NdisAllocateNetBuffer: Pool %p wrong pool type.\n",
        *(const void **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
      goto LABEL_100;
    }
    LODWORD(v55) = KeGetPcr()->Prcb.Number;
    v36 = ndisMaxNumberOfProcessors == 1;
    *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v55;
    if ( v36 )
      goto LABEL_81;
    v56 = v55 << 8;
    v57 = v56 + v54 + 384;
    if ( !*(_BYTE *)(v57 + 216) )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)(v56 + v54 + 384),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v54 + 128));
    v58 = *(_SLIST_HEADER **)(v57 + 192);
    ++*(_DWORD *)(v57 + 20);
    v59 = ExpInterlockedPopEntrySList(v58);
    if ( !v59 )
    {
      if ( ExQueryDepthSList(*(PSLIST_HEADER *)(v57 + 200)) < 0xAu
        || (v60 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v57 + 208)),
            v61 = *(_QWORD *)(v57 + 192),
            *(_QWORD *)(v57 + 192) = *(_QWORD *)(v57 + 200),
            *(_QWORD *)(v57 + 200) = v61,
            KeReleaseSpinLock((PKSPIN_LOCK)(v57 + 208), v60),
            (v59 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v57 + 192))) == 0LL) )
      {
        ++*(_DWORD *)(v57 + 24);
      }
    }
    if ( !v59 )
    {
LABEL_81:
      ++*(_DWORD *)(v54 + 148);
      v59 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v54 + 128));
      if ( !v59 )
      {
        v62 = *(unsigned int *)(v54 + 172);
        v63 = *(_DWORD *)(v54 + 168);
        v64 = *(_DWORD *)(v54 + 164);
        ++*(_DWORD *)(v54 + 152);
        v65 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v64, v62, v63, (PLOOKASIDE_LIST_EX)(v54 + 128));
        v59 = v65;
        if ( !v65 )
          goto LABEL_100;
        v65[-2].Next = (_SLIST_ENTRY *)v54;
        v66 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v54 + 8));
        v67 = *(_QWORD *)(v54 + 16);
        v68 = &v59[-2].Next + 1;
        *v68 = v67;
        v68[1] = v54 + 16;
        if ( *(_QWORD *)(v67 + 8) != v54 + 16 )
          __fastfail(3u);
        *(_QWORD *)(v67 + 8) = v68;
        *(_QWORD *)(v54 + 16) = v68;
        KeReleaseSpinLock((PKSPIN_LOCK)(v54 + 8), v66);
      }
      *((_DWORD *)&v59[-1].Next + 2) = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
    }
    v47 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    v9 = MaximumLength;
    *((_QWORD *)&v59[3].Next + 1) = v54;
    v42 = 0;
    v59->Next = 0LL;
    LODWORD(v59[3].Next) = 0;
    *((_QWORD *)&v59[4].Next + 1) = 0LL;
    v59[4].Next = 0LL;
    *((_QWORD *)&v59[8].Next + 1) = 0LL;
    v59[8].Next = 0LL;
    *((_QWORD *)&v59[10].Next + 1) = 0LL;
    v59[2].Next = 0LL;
    *((_DWORD *)&v59[2].Next + 2) = 0;
    *((_DWORD *)&v59[1].Next + 2) = 0;
    *((_QWORD *)&v59->Next + 1) = 0LL;
    LODWORD(v59[1].Next) = 0;
    *p_Alignment = v59;
    p_Alignment = &v59->Next;
LABEL_87:
    if ( !MdlChain )
      goto LABEL_90;
  }
  *((_DWORD *)p_Alignment + 6) = v42;
LABEL_90:
  FirstNetBuffer = **(_NET_BUFFER ***)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = FirstNetBuffer;
  if ( FirstNetBuffer )
  {
    v10 = *(_DWORD *)v8;
    if ( FirstNetBuffer->DataLength <= *(_DWORD *)v8 )
      goto LABEL_96;
    v69 = NdisAllocateNetBuffer(*(NDIS_HANDLE *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40), 0LL, 0, 0LL);
    if ( v69 )
    {
      FirstNetBuffer = *(_NET_BUFFER **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *p_Alignment = v69;
      v42 = 0;
      p_Alignment = &v69->Link.Alignment;
      goto LABEL_96;
    }
LABEL_100:
    NdisFreeFragmentNetBufferList(*(PNET_BUFFER_LIST *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8), 0, 0);
    return 0LL;
  }
LABEL_103:
  if ( (ndisAllocateMdl == 0LL) != (ndisFreeMdl == 0LL) )
  {
    if ( (unsigned __int8)byte_1C008371C >= 4u )
      WPP_SF_(18LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, 0LL);
    v14 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    goto LABEL_107;
  }
  v14 = *(struct _NET_BUFFER_LIST **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  Alignment = v14->FirstNetBuffer;
  if ( !Alignment )
  {
LABEL_117:
    v77 = *(_QWORD **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    v14->NetBufferListInfo[16] = (void *)v77[34];
    v78 = v77[28];
    if ( (v78 & 1) == 0 && (v78 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v77, v14, 0LL, 0LL);
      v77 = *(_QWORD **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v77[31] & 0x7FFFFFFFFFFFFFFFLL;
      v79 = *(_OWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      v80 = (__int64)v14->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v79;
      *(_QWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v80;
      LODWORD(v80) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_OWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0x90);
      if ( (_DWORD)v80 )
      {
        EtwEx_tidActivityInfoTransfer(
          (unsigned __int64)v77,
          (const struct _EVENT_DESCRIPTOR *)0x7FFFFFFFFFFFFFFFLL,
          (const struct _GUID *)(v8 + 176),
          (const struct _GUID *)(v8 + 160),
          Irp,
          v83,
          2u);
        v77 = *(_QWORD **)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v14, 0LL, 7u, v77, 0);
    return v14;
  }
  while ( 2 )
  {
    DataOffset = Alignment->DataOffset;
    if ( DataOffset >= DataOffsetDelta )
    {
      Alignment->DataLength += DataOffsetDelta;
      v73 = DataOffset - DataOffsetDelta;
      v74 = Alignment->MdlChain;
      for ( Alignment->DataOffset = v73; v74; v73 -= v75 )
      {
        v75 = v74->ByteCount;
        if ( v73 < v75 )
          break;
        v74 = v74->Next;
      }
LABEL_116:
      Alignment->CurrentMdlOffset = v73;
      Alignment->Link.Region = (unsigned __int64)v74;
      Alignment = (struct _NET_BUFFER *)Alignment->Link.Alignment;
      if ( !Alignment )
        goto LABEL_117;
      continue;
    }
    break;
  }
  *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = DataBackFill + DataOffsetDelta - DataOffset;
  v74 = ndisAllocateMdl((PULONG)(v8 + 32));
  if ( v74 )
  {
    v74->Next = Alignment->MdlChain;
    v76 = *(_DWORD *)(((unsigned __int64)&v84 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) - DataOffsetDelta;
    Alignment->MdlChain = v74;
    Alignment->DataOffset += v76;
    Alignment->DataLength += DataOffsetDelta;
    v73 = Alignment->DataOffset;
    goto LABEL_116;
  }
  for ( i = v14->FirstNetBuffer; i != Alignment; i = (struct _NET_BUFFER *)i->Link.Alignment )
    NdisAdvanceNetBufferDataStart(i, DataOffsetDelta, 1u, ndisFreeMdl);
LABEL_107:
  NdisFreeFragmentNetBufferList(v14, 0, 0);
  return 0LL;
}
