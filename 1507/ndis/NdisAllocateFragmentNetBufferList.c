/*
 * XREFs of NdisAllocateFragmentNetBufferList @ 0x1C0020B60
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferList @ 0x1C0009B90 (NdisAllocateNetBufferList.c)
 *     NdisAdvanceNetBufferDataStart @ 0x1C000AE40 (NdisAdvanceNetBufferDataStart.c)
 *     NdisAllocateNetBuffer @ 0x1C000B5D0 (NdisAllocateNetBuffer.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000BAC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C0021280 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00212C0 (NdisFreeFragmentNetBufferList.c)
 *     ?ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z @ 0x1C0021550 (-ndisAllocateMdl@@YAPEAU_MDL@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0046FF8 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0047FB0 (ndisGenerateNetBufferListCorrelationIds.c)
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
  unsigned int *v8; // rbp
  struct _NDIS_NET_BUFFER_POOL *v9; // rbx
  char *v10; // rdi
  struct _NET_BUFFER_LIST *NetBufferList; // r14
  int v12; // eax
  unsigned int Number; // r15d
  int v14; // r12d
  unsigned __int64 v15; // rax
  char *v16; // rsi
  _SLIST_HEADER *v17; // rcx
  int v18; // eax
  __int16 v19; // bx
  int v20; // eax
  unsigned __int64 v21; // rdx
  __int64 *v22; // rcx
  unsigned int v23; // r8d
  _QWORD *p_Alignment; // r15
  ULONG v25; // r12d
  unsigned int v26; // esi
  struct _MDL *v27; // r13
  unsigned int ByteCount; // edi
  ULONG v29; // edi
  ULONG v30; // esi
  ULONG v31; // ebx
  char *v32; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v34; // r15
  void *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  unsigned int v38; // r12d
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r15
  _SLIST_HEADER *v41; // rcx
  PSLIST_ENTRY v42; // rbx
  PSLIST_ENTRY *v43; // r15
  __int64 v44; // rax
  struct _NET_BUFFER *i; // rbx
  unsigned int DataOffset; // ecx
  PMDL MdlChain; // rax
  ULONG v48; // ecx
  unsigned int v49; // ecx
  _QWORD *v50; // r10
  KIRQL v52; // al
  __int64 v53; // r8
  KIRQL v54; // al
  __int64 v55; // rdx
  struct _LOOKASIDE_LIST_EX *v56; // r15
  SIZE_T v57; // rdx
  ULONG v58; // r8d
  POOL_TYPE v59; // ecx
  struct _NET_BUFFER_LIST *v60; // rax
  KIRQL v61; // al
  char **v62; // r8
  void **v63; // rcx
  SIZE_T Size; // rdx
  ULONG Tag; // r8d
  POOL_TYPE Type; // ecx
  __int64 v67; // rax
  KSPIN_LOCK *v68; // r15
  KIRQL v69; // al
  __int64 *v70; // rdx
  __int64 *v71; // r8
  __int64 v72; // r9
  bool v73; // zf
  _SLIST_HEADER *v74; // rax
  PNET_BUFFER NetBuffer; // rax
  PNET_BUFFER v76; // rax
  struct _NET_BUFFER *j; // rsi
  __int128 v78; // xmm0
  __int64 v79; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-60h]
  const struct _GUID *v81; // [rsp+28h] [rbp-58h]
  int v82; // [rsp+80h] [rbp+0h] BYREF

  v8 = (unsigned int *)((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL);
  v8[4] = StartOffset;
  v9 = (struct _NDIS_NET_BUFFER_POOL *)NetBufferPool;
  v10 = (char *)NetBufferListPool;
  NetBufferList = 0LL;
  *((_QWORD *)v8 + 8) = NetBufferPool;
  *((_QWORD *)v8 + 18) = OriginalNetBufferList;
  *((_QWORD *)v8 + 19) = 0LL;
  if ( !MaximumLength )
    return NetBufferList;
  if ( !NetBufferListPool )
    v10 = (char *)ndisNetBufferListPool;
  if ( !NetBufferPool )
  {
    v9 = ndisNetBufferPool;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ndisNetBufferPool;
  }
  v12 = *((_DWORD *)v10 + 15);
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 5) != 1 )
    {
      DbgPrint("NdisAllocateNetBufferAndNetBufferList: Pool %p wrong pool type.\n", v10);
      return NetBufferList;
    }
    Number = KeGetPcr()->Prcb.Number;
    v14 = 1;
    if ( ndisMaxNumberOfProcessors != 1 )
    {
      v15 = (unsigned __int64)Number << 8;
      v16 = &v10[v15 + 384];
      if ( !v16[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)&v10[v15 + 384],
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v10 + 128));
      v17 = (_SLIST_HEADER *)*((_QWORD *)v16 + 24);
      ++*((_DWORD *)v16 + 5);
      NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(v17);
      if ( !NetBufferList )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v16 + 25)) < 0xAu
          || (v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16 + 26),
              v55 = *((_QWORD *)v16 + 24),
              *((_QWORD *)v16 + 24) = *((_QWORD *)v16 + 25),
              *((_QWORD *)v16 + 25) = v55,
              KeReleaseSpinLock((PKSPIN_LOCK)v16 + 26, v54),
              (NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v16 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v16 + 6);
        }
      }
      if ( NetBufferList )
        goto LABEL_13;
    }
    ++*((_DWORD *)v10 + 37);
    NetBufferList = (struct _NET_BUFFER_LIST *)ExpInterlockedPopEntrySList((PSLIST_HEADER)v10 + 8);
    if ( !NetBufferList )
    {
      v57 = *((unsigned int *)v10 + 43);
      v58 = *((_DWORD *)v10 + 42);
      v59 = *((_DWORD *)v10 + 41);
      ++*((_DWORD *)v10 + 38);
      v60 = (struct _NET_BUFFER_LIST *)ndisAllocateFromNPagedPool(v59, v57, v58, (PLOOKASIDE_LIST_EX)(v10 + 128));
      NetBufferList = v60;
      if ( v60 )
      {
        v60[-1].NetBufferListInfo[24] = v10;
        v61 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 1);
        v62 = (char **)*((_QWORD *)v10 + 2);
        v63 = &NetBufferList[-1].NetBufferListInfo[25];
        *v63 = v62;
        v63[1] = v10 + 16;
        if ( v62[1] != v10 + 16 )
          __fastfail(3u);
        v62[1] = (char *)v63;
        *((_QWORD *)v10 + 2) = v63;
        KeReleaseSpinLock((PKSPIN_LOCK)v10 + 1, v61);
      }
      v14 = 0;
      if ( !NetBufferList )
        return NetBufferList;
    }
    LODWORD(NetBufferList[-1].NetBufferListInfo[27]) = Number;
    if ( v14 )
LABEL_13:
      v18 = 27;
    else
      v18 = 28;
    v19 = WORD1(NetBufferList->NdisReserved[1]);
    memset(NetBufferList, 0, 8 * v18 + 136 + 8LL);
    NetBufferList->NdisPoolHandle = v10;
    NetBufferList->Flags = 256;
    if ( v14 )
      WORD1(NetBufferList->NdisReserved[1]) = v19;
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
      ndisGenerateNetBufferListCorrelationIds(NetBufferList, 1LL);
    LOBYTE(NetBufferList->NetBufferListInfo[7]) = v10[88];
    v20 = *((_DWORD *)v10 + 15);
    if ( (v20 & 2) != 0 )
    {
      v73 = (v20 & 1) == 0;
      v74 = (_SLIST_HEADER *)&NetBufferList[1].NetBufferListInfo[4];
      if ( v73 )
        v74 = (_SLIST_HEADER *)&NetBufferList[1];
      NetBufferList->Context = (_NET_BUFFER_LIST_CONTEXT *)v74;
      v74->Alignment = 0LL;
      NetBufferList->Context->Size = *((_WORD *)v10 + 17);
      NetBufferList->Context->Offset = *((_WORD *)v10 + 17);
    }
    memset(&NetBufferList[1], 0, 0xB0uLL);
    NetBufferList[1].NdisReserved[1] = v10;
    NetBufferList[1].NdisPoolHandle = 0LL;
    *((_DWORD *)&NetBufferList[1].NdisPoolHandle + 2) = 0;
    LODWORD(NetBufferList[1].ParentNetBufferList) = 0;
    NetBufferList[1].Link.Region = 0LL;
    LODWORD(NetBufferList[1].Context) = 0;
    NetBufferList->Link.Region = (unsigned __int64)&NetBufferList[1];
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 3u, 0LL, 0);
  }
  else
  {
    NetBufferList = NdisAllocateNetBufferList(v10, 0, 0);
    if ( !NetBufferList )
      return NetBufferList;
    NetBuffer = NdisAllocateNetBuffer(v9, 0LL, 0, 0LL);
    if ( !NetBuffer )
      goto LABEL_99;
    NetBufferList->Link.Region = (unsigned __int64)NetBuffer;
  }
  v22 = *(__int64 **)(*(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) + 8LL);
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v22;
  if ( !v22 )
    goto LABEL_99;
  v23 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  while ( *((_DWORD *)v22 + 6) <= v23 )
  {
    v22 = (__int64 *)*v22;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v22;
    if ( !v22 )
      goto LABEL_99;
  }
  p_Alignment = &NetBufferList->FirstNetBuffer->$629E1C22BDE3F7131D248A226490B0FF::$7B3D76270C128D9C3174691E4F80FE7D::Link.Alignment;
  v25 = 0;
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = p_Alignment;
  while ( 1 )
  {
    v26 = *((_DWORD *)v22 + 6);
    if ( v26 <= v23 )
      goto LABEL_109;
    v27 = (struct _MDL *)v22[4];
    v21 = v23 + *((_DWORD *)v22 + 10);
    *v8 = v21;
    if ( !v27 )
      goto LABEL_109;
    ByteCount = v27->ByteCount;
    if ( (unsigned int)v21 < ByteCount )
      break;
    while ( 1 )
    {
      v27 = v27->Next;
      v21 = (unsigned int)v21 - ByteCount;
      *v8 = v21;
      if ( !v27 )
        break;
      ByteCount = v27->ByteCount;
      if ( (unsigned int)v21 < ByteCount )
        goto LABEL_28;
    }
LABEL_109:
    v22 = (__int64 *)*v22;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v22;
LABEL_110:
    if ( !v22 )
      goto LABEL_53;
  }
LABEL_28:
  v29 = ByteCount - v21;
  v30 = v26 - v23;
  if ( v29 > v30 )
    v29 = v30;
  while ( 1 )
  {
    if ( !v29 )
    {
      v27 = v27->Next;
      goto LABEL_49;
    }
    v31 = MaximumLength - v25;
    if ( v30 < MaximumLength - v25 )
      v31 = v30;
    v32 = (char *)v27->StartVa + v27->ByteOffset + (unsigned int)v21;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = v32;
    Mdl = IoAllocateMdl(v32, v31, 0, 0, 0LL);
    v34 = Mdl;
    if ( !Mdl )
      goto LABEL_99;
    v35 = *(void **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
    if ( v31 < v29 )
    {
      IoBuildPartialMdl(v27, Mdl, v35, v31);
      *v8 += v31;
    }
    else
    {
      v31 = v29;
      IoBuildPartialMdl(v27, Mdl, v35, v29);
    }
    v36 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v25 += v31;
    if ( *(_QWORD *)(v36 + 32) )
    {
      **(_QWORD **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v34;
    }
    else
    {
      *(_QWORD *)(v36 + 8) = v34;
      *(_QWORD *)(v36 + 32) = v34;
      *(_DWORD *)(v36 + 40) = 0;
      *(_DWORD *)(v36 + 16) = 0;
    }
    v29 -= v31;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v34;
    v34->Next = 0LL;
    v30 -= v31;
    if ( !v30 )
      break;
    if ( v29 )
    {
      *(_DWORD *)(v36 + 24) = v25;
    }
    else
    {
      v27 = v27->Next;
      if ( !v27 )
        break;
      v21 = 0LL;
      v29 = v27->ByteCount;
      *v8 = 0;
      if ( v25 < MaximumLength || (*(_DWORD *)(v36 + 24) = v25, !v29) )
      {
        p_Alignment = (_QWORD *)v36;
        goto LABEL_49;
      }
    }
    v37 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    if ( !v37 )
      goto LABEL_99;
    if ( (*(_DWORD *)(v37 + 88) & 1) != 0 )
    {
      DbgPrint(
        "NdisAllocateNetBuffer: Pool %p wrong pool type.\n",
        *(const void **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
      goto LABEL_99;
    }
    v38 = KeGetPcr()->Prcb.Number;
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_77;
    v39 = (unsigned __int64)v38 << 8;
    v40 = v39 + v37 + 384;
    if ( !*(_BYTE *)(v40 + 216) )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)(v39 + v37 + 384),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v37 + 128));
    v41 = *(_SLIST_HEADER **)(v40 + 192);
    ++*(_DWORD *)(v40 + 20);
    v42 = ExpInterlockedPopEntrySList(v41);
    if ( !v42 )
    {
      if ( ExQueryDepthSList(*(PSLIST_HEADER *)(v40 + 200)) < 0xAu
        || (v52 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 208)),
            v53 = *(_QWORD *)(v40 + 192),
            *(_QWORD *)(v40 + 192) = *(_QWORD *)(v40 + 200),
            *(_QWORD *)(v40 + 200) = v53,
            KeReleaseSpinLock((PKSPIN_LOCK)(v40 + 208), v52),
            (v42 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(v40 + 192))) == 0LL) )
      {
        ++*(_DWORD *)(v40 + 24);
      }
    }
    if ( !v42 )
    {
      v37 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
LABEL_77:
      v56 = (struct _LOOKASIDE_LIST_EX *)(v37 + 128);
      ++*(_DWORD *)(v37 + 148);
      v42 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v37 + 128));
      if ( !v42 )
      {
        Size = v56->L.Size;
        Tag = v56->L.Tag;
        Type = v56->L.Type;
        ++v56->L.AllocateMisses;
        v42 = (PSLIST_ENTRY)ndisAllocateFromNPagedPool(Type, Size, Tag, v56);
        if ( !v42 )
          goto LABEL_99;
        v67 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v42[-2].Next = (_SLIST_ENTRY *)v67;
        v68 = (KSPIN_LOCK *)(v67 + 8);
        v69 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v67 + 8));
        v70 = (__int64 *)(&v42[-2].Next + 1);
        v71 = (__int64 *)(*(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) + 16LL);
        v72 = *v71;
        *v70 = *v71;
        v70[1] = (__int64)v71;
        if ( *(__int64 **)(v72 + 8) != v71 )
          __fastfail(3u);
        *(_QWORD *)(v72 + 8) = v70;
        *v71 = (__int64)v70;
        KeReleaseSpinLock(v68, v69);
      }
      *((_DWORD *)&v42[-1].Next + 2) = v38;
    }
    v43 = *(PSLIST_ENTRY **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v44 = *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    v25 = 0;
    v21 = *v8;
    v42->Next = 0LL;
    *((_QWORD *)&v42[3].Next + 1) = v44;
    LODWORD(v42[3].Next) = 0;
    *((_QWORD *)&v42[4].Next + 1) = 0LL;
    v42[4].Next = 0LL;
    *((_QWORD *)&v42[8].Next + 1) = 0LL;
    v42[8].Next = 0LL;
    *((_QWORD *)&v42[10].Next + 1) = 0LL;
    v42[2].Next = 0LL;
    *((_DWORD *)&v42[2].Next + 2) = 0;
    *((_DWORD *)&v42[1].Next + 2) = 0;
    *((_QWORD *)&v42->Next + 1) = 0LL;
    LODWORD(v42[1].Next) = 0;
    *v43 = v42;
    p_Alignment = &v42->Next;
    *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v42;
LABEL_49:
    if ( !v27 )
      goto LABEL_52;
  }
  p_Alignment = (_QWORD *)v36;
  *(_DWORD *)(v36 + 24) = v25;
LABEL_52:
  v22 = **(__int64 ***)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
  *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v22;
  if ( v22 )
  {
    v23 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    if ( *((_DWORD *)v22 + 6) > v23 )
    {
      v76 = NdisAllocateNetBuffer(
              *(NDIS_HANDLE *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
              0LL,
              0,
              0LL);
      if ( !v76 )
        goto LABEL_99;
      v22 = *(__int64 **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      v23 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v25 = 0;
      *p_Alignment = v76;
      p_Alignment = &v76->Link.Alignment;
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v76;
    }
    goto LABEL_110;
  }
LABEL_53:
  if ( (ndisAllocateMdl == 0LL) != (ndisFreeMdl == 0LL) )
  {
    if ( (unsigned __int8)byte_1C008531C >= 4u )
      WPP_SF_(18LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids);
LABEL_99:
    NdisFreeFragmentNetBufferList(NetBufferList, 0, 0);
    return 0LL;
  }
  else
  {
    for ( i = NetBufferList->FirstNetBuffer; i; i = (struct _NET_BUFFER *)i->Link.Alignment )
    {
      DataOffset = i->DataOffset;
      if ( DataOffset >= DataOffsetDelta )
      {
        i->DataLength += DataOffsetDelta;
        v49 = DataOffset - DataOffsetDelta;
        MdlChain = i->MdlChain;
        for ( i->DataOffset = v49; MdlChain; v49 -= v21 )
        {
          v21 = MdlChain->ByteCount;
          if ( v49 < (unsigned int)v21 )
            break;
          MdlChain = MdlChain->Next;
        }
      }
      else
      {
        *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = DataBackFill
                                                                             + DataOffsetDelta
                                                                             - DataOffset;
        MdlChain = ndisAllocateMdl(v8 + 34);
        if ( !MdlChain )
        {
          for ( j = NetBufferList->FirstNetBuffer; j != i; j = (struct _NET_BUFFER *)j->Link.Alignment )
            NdisAdvanceNetBufferDataStart(j, DataOffsetDelta, 1u, ndisFreeMdl);
          goto LABEL_99;
        }
        MdlChain->Next = i->MdlChain;
        v48 = *(_DWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) - DataOffsetDelta;
        i->MdlChain = MdlChain;
        i->DataOffset += v48;
        i->DataLength += DataOffsetDelta;
        v49 = i->DataOffset;
      }
      i->CurrentMdlOffset = v49;
      i->Link.Region = (unsigned __int64)MdlChain;
    }
    v50 = *(_QWORD **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    NetBufferList->NetBufferListInfo[16] = (void *)v50[34];
    if ( (v50[28] & 0xFFFFFFFFFFFFFFFCuLL) != 0 && (v50[28] & 1) == 0 )
    {
      Irp = 1;
      WfpNblInfoClone(v50, NetBufferList, 0LL, 0LL);
      v50 = *(_QWORD **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    }
    if ( Microsoft_Windows_Networking_CorrelationEnabled )
    {
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v50[31] & 0x7FFFFFFFFFFFFFFFLL;
      v78 = *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 0LL;
      v79 = (__int64)NetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
      *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v78;
      *(_QWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v79;
      LODWORD(v79) = Microsoft_Windows_Networking_CorrelationEnabled;
      *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *(_OWORD *)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                       + 0xB0);
      if ( (_DWORD)v79 )
      {
        EtwEx_tidActivityInfoTransfer(
          0x7FFFFFFFFFFFFFFFuLL,
          (const struct _EVENT_DESCRIPTOR *)v21,
          (const struct _GUID *)v8 + 13,
          (const struct _GUID *)v8 + 12,
          Irp,
          v81,
          2u);
        v50 = *(_QWORD **)(((unsigned __int64)&v82 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(NetBufferList, 0LL, 7u, v50, 0);
  }
  return NetBufferList;
}
