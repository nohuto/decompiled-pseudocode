/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C000C9D0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000BDF0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0014630 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     NdisFreeNetBufferList @ 0x1C000DC40 (NdisFreeNetBufferList.c)
 *     NdisAllocateNetBufferListContext @ 0x1C0010EB0 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0011BA0 (ndisGenerateNetBufferListCorrelationIds.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  unsigned int Number; // r13d
  int v6; // r12d
  unsigned __int64 v7; // rax
  char *v8; // r14
  _SLIST_HEADER *v9; // rcx
  PSLIST_ENTRY v10; // rbx
  int v11; // eax
  __int16 v12; // r14
  int v13; // eax
  _SLIST_ENTRY *v14; // rax
  unsigned __int16 v15; // ax
  struct _MDL *v16; // r14
  __int64 v17; // rcx
  int v18; // eax
  KIRQL v20; // al
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v25; // al
  __int64 v26; // r8
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int16 v30; // ax

  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v6 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v7 = (unsigned __int64)Number << 8;
    v8 = (char *)PoolHandle + v7 + 384;
    if ( !v8[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v7 + 384),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
    v9 = (_SLIST_HEADER *)*((_QWORD *)v8 + 24);
    ++*((_DWORD *)v8 + 5);
    v10 = ExpInterlockedPopEntrySList(v9);
    if ( !v10 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v8 + 25)) < 0xAu
        || (v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26),
            v21 = *((_QWORD *)v8 + 24),
            *((_QWORD *)v8 + 24) = *((_QWORD *)v8 + 25),
            *((_QWORD *)v8 + 25) = v21,
            KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v20),
            (v10 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v8 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v8 + 6);
      }
    }
    if ( v10 )
      goto LABEL_8;
  }
  ++*((_DWORD *)PoolHandle + 37);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( !v10 )
  {
    v23 = *((unsigned int *)PoolHandle + 43);
    ++*((_DWORD *)PoolHandle + 38);
    if ( v23 + 32 < v23 )
      return 0LL;
    PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v23 + 32,
                                            *((_DWORD *)PoolHandle + 42),
                                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      v10 = PoolWithTagPriority + 2;
      PoolWithTagPriority->Next = 0LL;
      if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
      {
        PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v26 = *((_QWORD *)PoolHandle + 2);
        v27 = &v10[-2].Next + 1;
        *v27 = v26;
        v27[1] = (char *)PoolHandle + 16;
        if ( *(NDIS_HANDLE *)(v26 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        *(_QWORD *)(v26 + 8) = v27;
        *((_QWORD *)PoolHandle + 2) = v27;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v25);
      }
    }
    else
    {
      v10 = 0LL;
    }
    v6 = 0;
    if ( !v10 )
      return 0LL;
  }
  *((_DWORD *)&v10[-1].Next + 2) = Number;
LABEL_8:
  if ( v6 )
    v11 = 27;
  else
    v11 = 28;
  v12 = *((_WORD *)&v10[3].Next + 5);
  memset(v10, 0, 8 * v11 + 136 + 8LL);
  v10[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v10[8].Next + 2) = 256;
  if ( v6 )
    *((_WORD *)&v10[3].Next + 5) = v12;
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
    ndisGenerateNetBufferListCorrelationIds(v10, 1LL);
  *((_BYTE *)&v10[12].Next + 8) = *((_BYTE *)PoolHandle + 88);
  v13 = *((_DWORD *)PoolHandle + 15);
  if ( (v13 & 2) != 0
    && ((v13 & 1) == 0 ? (v14 = v10 + 23) : (v14 = v10 + 34),
        v10[1].Next = v14,
        v14->Next = 0LL,
        *((_WORD *)&v10[1].Next->Next + 4) = *((_WORD *)PoolHandle + 17),
        *((_WORD *)&v10[1].Next->Next + 5) = *((_WORD *)PoolHandle + 17),
        *((_WORD *)PoolHandle + 17) >= ContextSize) )
  {
    *((_WORD *)&v10[1].Next->Next + 5) -= ContextSize;
  }
  else if ( ContextSize )
  {
    if ( NdisAllocateNetBufferListContext(
           (PNET_BUFFER_LIST)v10,
           ContextSize,
           ContextBackFill,
           *((_DWORD *)PoolHandle + 14)) )
    {
      NdisFreeNetBufferList((PNET_BUFFER_LIST)v10);
      v10 = 0LL;
    }
    else
    {
      *((_DWORD *)&v10[8].Next + 2) |= 0x400u;
    }
  }
  if ( v10 )
  {
    if ( (*((_DWORD *)PoolHandle + 15) & 1) != 0 )
      *((_QWORD *)&v10->Next + 1) = v10 + 23;
    if ( (*((_DWORD *)PoolHandle + 15) & 4) != 0 )
    {
      v15 = *((_WORD *)PoolHandle + 17);
      if ( v15 )
        v16 = (struct _MDL *)((char *)&v10[35] + v15);
      else
        v16 = (struct _MDL *)&v10[34];
      if ( v6 )
      {
        v16->ByteCount = *((_DWORD *)PoolHandle + 23);
        v16->Next = 0LL;
      }
      else
      {
        v28 = *((unsigned int *)PoolHandle + 23);
        v29 = (unsigned __int64)v16 + *((unsigned int *)PoolHandle + 24);
        v30 = (_WORD)v16 + *((_DWORD *)PoolHandle + 24);
        v16->Next = 0LL;
        v16->MdlFlags = 0;
        v16->ByteCount = v28;
        v16->StartVa = (PVOID)(v29 & 0xFFFFFFFFFFFFF000uLL);
        v16->Size = 8 * ((((unsigned __int64)(v30 & 0xFFF) + v28 + 4095) >> 12) + 6);
        v16->ByteOffset = v29 & 0xFFF;
        MmBuildMdlForNonPagedPool(v16);
      }
      v17 = *((_QWORD *)&v10->Next + 1);
      if ( v17 )
      {
        v18 = *((_DWORD *)PoolHandle + 23);
        *(_QWORD *)v17 = 0LL;
        *(_QWORD *)(v17 + 56) = PoolHandle;
        *(_QWORD *)(v17 + 8) = v16;
        *(_DWORD *)(v17 + 16) = v18;
        *(_QWORD *)(v17 + 32) = v16;
        *(_DWORD *)(v17 + 40) = v18;
        *(_DWORD *)(v17 + 24) = 0;
        *(_DWORD *)(v17 + 48) = 0;
        *(_QWORD *)(v17 + 72) = 0LL;
        *(_QWORD *)(v17 + 64) = 0LL;
        *(_QWORD *)(v17 + 136) = 0LL;
        *(_QWORD *)(v17 + 128) = 0LL;
        *(_QWORD *)(v17 + 168) = 0LL;
      }
    }
    else
    {
      v22 = *((_QWORD *)&v10->Next + 1);
      if ( v22 )
      {
        *(_QWORD *)v22 = 0LL;
        *(_QWORD *)(v22 + 56) = PoolHandle;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_DWORD *)(v22 + 16) = 0;
        *(_QWORD *)(v22 + 32) = 0LL;
        *(_DWORD *)(v22 + 40) = 0;
        *(_DWORD *)(v22 + 24) = 0;
        *(_DWORD *)(v22 + 48) = 0;
        *(_QWORD *)(v22 + 72) = 0LL;
        *(_QWORD *)(v22 + 64) = 0LL;
        *(_QWORD *)(v22 + 136) = 0LL;
        *(_QWORD *)(v22 + 128) = 0LL;
        *(_QWORD *)(v22 + 168) = 0LL;
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v10, 0LL, 2u, 0LL, 0);
  }
  return (PNET_BUFFER_LIST)v10;
}
