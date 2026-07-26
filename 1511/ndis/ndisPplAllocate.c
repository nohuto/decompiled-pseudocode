/*
 * XREFs of ndisPplAllocate @ 0x1C000BC30
 * Callers:
 *     NdisAllocateNetBuffer @ 0x1C000BB40 (NdisAllocateNetBuffer.c)
 * Callees:
 *     ?ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z @ 0x1C000BD54 (-ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C000BDB0 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000CDC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 */

PSLIST_ENTRY __fastcall ndisPplAllocate(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int Number; // ebp
  bool v5; // zf
  unsigned __int64 v7; // rax
  struct _NDIS_NPAGED_LOOKASIDE_LIST *v8; // rbx
  PSLIST_ENTRY v9; // rbx
  SIZE_T v10; // rdx
  ULONG v11; // r8d
  POOL_TYPE v12; // ecx
  _SLIST_ENTRY *v13; // rax
  KSPIN_LOCK *v14; // rdi
  KIRQL v15; // al
  __int64 *v16; // rsi
  __int64 *v17; // rcx
  __int64 v18; // rdx

  Number = KeGetPcr()->Prcb.Number;
  v5 = ndisMaxNumberOfProcessors == 1;
  *a3 = 1;
  if ( v5 )
    goto LABEL_5;
  v7 = (unsigned __int64)Number << 8;
  v8 = (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v7 + a1 + 384);
  if ( !v8->Initialized )
    ndisPplLazyInitializeLookaside(
      (PLOOKASIDE_LIST_EX)(v7 + a1 + 384),
      (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(a1 + 128));
  v9 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v8);
  if ( !v9 )
  {
LABEL_5:
    ++*(_DWORD *)(a1 + 148);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 128));
    if ( v9 )
      goto LABEL_10;
    v10 = *(unsigned int *)(a1 + 172);
    v11 = *(_DWORD *)(a1 + 168);
    v12 = *(_DWORD *)(a1 + 164);
    ++*(_DWORD *)(a1 + 152);
    v13 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v12, v10, v11, (PLOOKASIDE_LIST_EX)(a1 + 128));
    v9 = v13;
    if ( v13 )
    {
      v14 = (KSPIN_LOCK *)(a1 + 8);
      v13[-2].Next = (_SLIST_ENTRY *)a1;
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v16 = (__int64 *)(a1 + 16);
      v17 = (__int64 *)(&v9[-2].Next + 1);
      v18 = *v16;
      *v17 = *v16;
      v17[1] = (__int64)v16;
      if ( *(__int64 **)(v18 + 8) != v16 )
        __fastfail(3u);
      *(_QWORD *)(v18 + 8) = v17;
      *v16 = (__int64)v17;
      KeReleaseSpinLock(v14, v15);
    }
    *a3 = 0;
    if ( v9 )
LABEL_10:
      *((_DWORD *)&v9[-1].Next + 2) = Number;
  }
  return v9;
}
