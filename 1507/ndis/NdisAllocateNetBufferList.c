/*
 * XREFs of NdisAllocateNetBufferList @ 0x1C0009B90
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000AEA0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0020B60 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C000BB60 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     NdisAllocateNetBufferListContext @ 0x1C00471B0 (NdisAllocateNetBufferListContext.c)
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0047FB0 (ndisGenerateNetBufferListCorrelationIds.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateNetBufferList(
        NDIS_HANDLE PoolHandle,
        USHORT ContextSize,
        USHORT ContextBackFill)
{
  KIRQL *v3; // rbp
  unsigned int Number; // r13d
  int v7; // r12d
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
  unsigned __int64 v22; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v24; // al
  __int64 v25; // r8
  _QWORD *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int16 v29; // ax
  __int64 v30; // rax
  PFREE_FUNCTION_EX *v31; // rbx
  KIRQL v32; // al
  __int64 v33; // [rsp+90h] [rbp+90h] BYREF

  v3 = (KIRQL *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !PoolHandle || (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    return 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v7 = 1;
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v8 = (char *)PoolHandle + 256 * (unsigned __int64)Number + 384;
    if ( !v8[216] )
    {
      v31 = (PFREE_FUNCTION_EX *)((char *)PoolHandle + 384);
      v32 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v8 + 26);
      *v3 = v32;
      if ( !v8[216] )
      {
        ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)v8,
          ndisAllocateFromNPagedPool,
          *(v31 - 25),
          NonPagedPoolNx,
          0,
          *((unsigned int *)v31 - 53),
          *((_DWORD *)v31 - 54),
          0x400u);
        v32 = *v3;
        v8[216] = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)v8 + 26, v32);
    }
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
      goto LABEL_7;
  }
  ++*((_DWORD *)PoolHandle + 37);
  v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
  if ( !v10 )
  {
    v22 = *((unsigned int *)PoolHandle + 43);
    ++*((_DWORD *)PoolHandle + 38);
    if ( v22 + 32 < v22 )
      return 0LL;
    PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                            NonPagedPoolNx,
                                            v22 + 32,
                                            *((_DWORD *)PoolHandle + 42),
                                            NormalPoolPriority);
    if ( PoolWithTagPriority )
    {
      v10 = PoolWithTagPriority + 2;
      PoolWithTagPriority->Next = 0LL;
      if ( PoolWithTagPriority != (_SLIST_ENTRY *)-32LL )
      {
        PoolWithTagPriority->Next = (_SLIST_ENTRY *)PoolHandle;
        v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v25 = *((_QWORD *)PoolHandle + 2);
        v26 = &v10[-2].Next + 1;
        *v26 = v25;
        v26[1] = (char *)PoolHandle + 16;
        if ( *(NDIS_HANDLE *)(v25 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        *(_QWORD *)(v25 + 8) = v26;
        *((_QWORD *)PoolHandle + 2) = v26;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v24);
      }
    }
    else
    {
      v10 = 0LL;
    }
    v7 = 0;
    if ( !v10 )
      return 0LL;
  }
  *((_DWORD *)&v10[-1].Next + 2) = Number;
LABEL_7:
  if ( v7 )
    v11 = 27;
  else
    v11 = 28;
  v12 = *((_WORD *)&v10[3].Next + 5);
  memset(v10, 0, 8 * v11 + 136 + 8LL);
  v10[2].Next = (_SLIST_ENTRY *)PoolHandle;
  *((_DWORD *)&v10[8].Next + 2) = 256;
  if ( v7 )
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
      if ( v7 )
      {
        v16->ByteCount = *((_DWORD *)PoolHandle + 23);
        v16->Next = 0LL;
      }
      else
      {
        v27 = *((unsigned int *)PoolHandle + 23);
        v28 = (unsigned __int64)v16 + *((unsigned int *)PoolHandle + 24);
        v29 = (_WORD)v16 + *((_DWORD *)PoolHandle + 24);
        v16->Next = 0LL;
        v16->MdlFlags = 0;
        v16->ByteCount = v27;
        v16->StartVa = (PVOID)(v28 & 0xFFFFFFFFFFFFF000uLL);
        v16->Size = 8 * ((((unsigned __int64)(v29 & 0xFFF) + v27 + 4095) >> 12) + 6);
        v16->ByteOffset = v28 & 0xFFF;
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
      v30 = *((_QWORD *)&v10->Next + 1);
      if ( v30 )
      {
        *(_QWORD *)v30 = 0LL;
        *(_QWORD *)(v30 + 56) = PoolHandle;
        *(_QWORD *)(v30 + 8) = 0LL;
        *(_DWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 32) = 0LL;
        *(_DWORD *)(v30 + 40) = 0;
        *(_DWORD *)(v30 + 24) = 0;
        *(_DWORD *)(v30 + 48) = 0;
        *(_QWORD *)(v30 + 72) = 0LL;
        *(_QWORD *)(v30 + 64) = 0LL;
        *(_QWORD *)(v30 + 136) = 0LL;
        *(_QWORD *)(v30 + 128) = 0LL;
        *(_QWORD *)(v30 + 168) = 0LL;
      }
    }
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((struct _NET_BUFFER_LIST *)v10, 0LL, 2u, 0LL, 0);
  }
  return (PNET_BUFFER_LIST)v10;
}
