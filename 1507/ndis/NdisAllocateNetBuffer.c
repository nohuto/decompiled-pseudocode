/*
 * XREFs of NdisAllocateNetBuffer @ 0x1C000B5D0
 * Callers:
 *     NdisAllocateCloneNetBufferList @ 0x1C000AEA0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0020B60 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000BAC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBuffer(NDIS_HANDLE PoolHandle, PMDL MdlChain, ULONG DataOffset, SIZE_T DataLength)
{
  PSLIST_ENTRY v4; // rbx
  int v5; // r13d
  unsigned int Number; // r14d
  unsigned __int64 v10; // rax
  char *v11; // rdi
  _SLIST_HEADER *v12; // rcx
  unsigned __int64 v13; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v15; // al
  __int64 v16; // r8
  _QWORD *v17; // rcx
  ULONG v18; // ecx
  PMDL v19; // rax
  ULONG ByteCount; // edx
  KIRQL v22; // al
  __int64 v23; // r8

  v4 = 0LL;
  v5 = DataLength;
  if ( PoolHandle )
  {
    if ( (*((_DWORD *)PoolHandle + 22) & 1) != 0 )
    {
      DbgPrint("NdisAllocateNetBuffer: Pool %p wrong pool type.\n", PoolHandle);
      return (PNET_BUFFER)v4;
    }
    Number = KeGetPcr()->Prcb.Number;
    if ( ndisMaxNumberOfProcessors == 1 )
      goto LABEL_10;
    v10 = (unsigned __int64)Number << 8;
    v11 = (char *)PoolHandle + v10 + 384;
    if ( !v11[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v10 + 384),
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
    v12 = (_SLIST_HEADER *)*((_QWORD *)v11 + 24);
    ++*((_DWORD *)v11 + 5);
    v4 = ExpInterlockedPopEntrySList(v12);
    if ( !v4 )
    {
      if ( ExQueryDepthSList(*((PSLIST_HEADER *)v11 + 25)) < 0xAu
        || (v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v11 + 26),
            v23 = *((_QWORD *)v11 + 24),
            *((_QWORD *)v11 + 24) = *((_QWORD *)v11 + 25),
            *((_QWORD *)v11 + 25) = v23,
            KeReleaseSpinLock((PKSPIN_LOCK)v11 + 26, v22),
            (v4 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v11 + 24))) == 0LL) )
      {
        ++*((_DWORD *)v11 + 6);
      }
    }
    if ( !v4 )
    {
LABEL_10:
      ++*((_DWORD *)PoolHandle + 37);
      v4 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
      if ( !v4 )
      {
        v13 = *((unsigned int *)PoolHandle + 43);
        ++*((_DWORD *)PoolHandle + 38);
        if ( v13 + 32 < v13 )
          return 0LL;
        PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                v13 + 32,
                                                *((_DWORD *)PoolHandle + 42),
                                                NormalPoolPriority);
        if ( PoolWithTagPriority )
        {
          PoolWithTagPriority->Next = 0LL;
          v4 = PoolWithTagPriority + 2;
        }
        else
        {
          v4 = 0LL;
        }
        if ( !v4 )
          return 0LL;
        v4[-2].Next = (_SLIST_ENTRY *)PoolHandle;
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
        v16 = *((_QWORD *)PoolHandle + 2);
        v17 = &v4[-2].Next + 1;
        *v17 = v16;
        v17[1] = (char *)PoolHandle + 16;
        if ( *(NDIS_HANDLE *)(v16 + 8) != (char *)PoolHandle + 16 )
          __fastfail(3u);
        *(_QWORD *)(v16 + 8) = v17;
        *((_QWORD *)PoolHandle + 2) = v17;
        KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v15);
      }
      *((_DWORD *)&v4[-1].Next + 2) = Number;
    }
    v4->Next = 0LL;
    v18 = DataOffset;
    *((_QWORD *)&v4[3].Next + 1) = PoolHandle;
    v19 = MdlChain;
    *((_QWORD *)&v4->Next + 1) = 0LL;
    LODWORD(v4[1].Next) = 0;
    v4[2].Next = 0LL;
    *((_DWORD *)&v4[2].Next + 2) = 0;
    *((_DWORD *)&v4[1].Next + 2) = 0;
    LODWORD(v4[3].Next) = 0;
    *((_QWORD *)&v4[4].Next + 1) = 0LL;
    v4[4].Next = 0LL;
    *((_QWORD *)&v4[8].Next + 1) = 0LL;
    v4[8].Next = 0LL;
    for ( *((_QWORD *)&v4[10].Next + 1) = 0LL; v19; v18 -= ByteCount )
    {
      ByteCount = v19->ByteCount;
      if ( v18 < ByteCount )
        break;
      v19 = v19->Next;
    }
    v4[2].Next = (_SLIST_ENTRY *)MdlChain;
    *((_DWORD *)&v4[2].Next + 2) = DataOffset;
    *((_DWORD *)&v4[1].Next + 2) = v5;
    *((_QWORD *)&v4->Next + 1) = v19;
    LODWORD(v4[1].Next) = v18;
  }
  return (PNET_BUFFER)v4;
}
