/*
 * XREFs of NdisAllocateNetBufferMdlAndData @ 0x1C000C780
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 */

PNET_BUFFER __stdcall NdisAllocateNetBufferMdlAndData(NDIS_HANDLE PoolHandle)
{
  PSLIST_ENTRY v2; // rbx
  int v3; // r14d
  unsigned int Number; // r15d
  unsigned __int64 v5; // rax
  char *v6; // rsi
  _SLIST_HEADER *v7; // rcx
  unsigned __int64 v8; // rax
  _SLIST_ENTRY *PoolWithTagPriority; // rax
  KIRQL v10; // al
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _SLIST_ENTRY *v13; // rsi
  int v14; // ecx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // eax
  KIRQL v19; // al
  __int64 v20; // r8

  v2 = 0LL;
  if ( PoolHandle )
  {
    v3 = 1;
    if ( (*((_DWORD *)PoolHandle + 22) & 1) != 0 )
    {
      Number = KeGetPcr()->Prcb.Number;
      if ( ndisMaxNumberOfProcessors == 1 )
        goto LABEL_10;
      v5 = (unsigned __int64)Number << 8;
      v6 = (char *)PoolHandle + v5 + 384;
      if ( !v6[216] )
        ndisPplLazyInitializeLookaside(
          (PLOOKASIDE_LIST_EX)((char *)PoolHandle + v5 + 384),
          (struct _NDIS_NPAGED_LOOKASIDE_LIST *)((char *)PoolHandle + 128));
      v7 = (_SLIST_HEADER *)*((_QWORD *)v6 + 24);
      ++*((_DWORD *)v6 + 5);
      v2 = ExpInterlockedPopEntrySList(v7);
      if ( !v2 )
      {
        if ( ExQueryDepthSList(*((PSLIST_HEADER *)v6 + 25)) < 0xAu
          || (v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 26),
              v20 = *((_QWORD *)v6 + 24),
              *((_QWORD *)v6 + 24) = *((_QWORD *)v6 + 25),
              *((_QWORD *)v6 + 25) = v20,
              KeReleaseSpinLock((PKSPIN_LOCK)v6 + 26, v19),
              (v2 = ExpInterlockedPopEntrySList(*((PSLIST_HEADER *)v6 + 24))) == 0LL) )
        {
          ++*((_DWORD *)v6 + 6);
        }
      }
      if ( !v2 )
      {
LABEL_10:
        ++*((_DWORD *)PoolHandle + 37);
        v2 = ExpInterlockedPopEntrySList((PSLIST_HEADER)PoolHandle + 8);
        if ( !v2 )
        {
          v8 = *((unsigned int *)PoolHandle + 43);
          ++*((_DWORD *)PoolHandle + 38);
          if ( v8 + 32 < v8 )
            return 0LL;
          PoolWithTagPriority = (_SLIST_ENTRY *)ExAllocatePoolWithTagPriority(
                                                  NonPagedPoolNx,
                                                  v8 + 32,
                                                  *((_DWORD *)PoolHandle + 42),
                                                  NormalPoolPriority);
          if ( PoolWithTagPriority )
          {
            PoolWithTagPriority->Next = 0LL;
            v2 = PoolWithTagPriority + 2;
          }
          else
          {
            v2 = 0LL;
          }
          if ( v2 )
          {
            v2[-2].Next = (_SLIST_ENTRY *)PoolHandle;
            v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)PoolHandle + 1);
            v11 = *((_QWORD *)PoolHandle + 2);
            v12 = &v2[-2].Next + 1;
            *v12 = v11;
            v12[1] = (char *)PoolHandle + 16;
            if ( *(NDIS_HANDLE *)(v11 + 8) != (char *)PoolHandle + 16 )
              __fastfail(3u);
            *(_QWORD *)(v11 + 8) = v12;
            *((_QWORD *)PoolHandle + 2) = v12;
            KeReleaseSpinLock((PKSPIN_LOCK)PoolHandle + 1, v10);
          }
          v3 = 0;
          if ( !v2 )
            return 0LL;
        }
        *((_DWORD *)&v2[-1].Next + 2) = Number;
      }
      v13 = v2 + 11;
      if ( v3 )
      {
        *((_DWORD *)&v2[13].Next + 2) = *((_DWORD *)PoolHandle + 23);
        v13->Next = 0LL;
      }
      else
      {
        v16 = *((unsigned int *)PoolHandle + 23);
        v17 = (unsigned __int64)v13 + *((unsigned int *)PoolHandle + 24);
        v18 = (_DWORD)v13 + *((_DWORD *)PoolHandle + 24);
        v13->Next = 0LL;
        *((_WORD *)&v2[11].Next + 5) = 0;
        *((_DWORD *)&v2[13].Next + 2) = v16;
        v2[13].Next = (_SLIST_ENTRY *)(v17 & 0xFFFFFFFFFFFFF000uLL);
        *((_WORD *)&v2[11].Next + 4) = 8 * ((((unsigned __int64)(v18 & 0xFFF) + v16 + 4095) >> 12) + 6);
        *((_DWORD *)&v2[13].Next + 3) = v17 & 0xFFF;
        MmBuildMdlForNonPagedPool((PMDL)&v2[11]);
      }
      v14 = *((_DWORD *)PoolHandle + 23);
      v2->Next = 0LL;
      *((_QWORD *)&v2[3].Next + 1) = PoolHandle;
      *((_QWORD *)&v2->Next + 1) = v13;
      LODWORD(v2[1].Next) = v14;
      v2[2].Next = v13;
      *((_DWORD *)&v2[2].Next + 2) = v14;
      *((_DWORD *)&v2[1].Next + 2) = 0;
      LODWORD(v2[3].Next) = 0;
      *((_QWORD *)&v2[4].Next + 1) = 0LL;
      v2[4].Next = 0LL;
      *((_QWORD *)&v2[8].Next + 1) = 0LL;
      v2[8].Next = 0LL;
      *((_QWORD *)&v2[10].Next + 1) = 0LL;
    }
    else
    {
      DbgPrint("NdisAllocateNetBufferMdlAndData: Pool %p wrong pool type.\n", PoolHandle);
    }
  }
  return (PNET_BUFFER)v2;
}
