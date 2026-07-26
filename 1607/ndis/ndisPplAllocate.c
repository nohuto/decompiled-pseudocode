/*
 * XREFs of ndisPplAllocate @ 0x1C000592C
 * Callers:
 *     NdisAllocateNetBuffer @ 0x1C0005850 (NdisAllocateNetBuffer.c)
 * Callees:
 *     ?ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z @ 0x1C0005A54 (-ndisAllocateFromLookasideList@@YAPEAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@@Z.c)
 *     ?ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C0005AB0 (-ndisAllocateFromNPagedPool@@YAPEAXW4_POOL_TYPE@@_KKPEAU_LOOKASIDE_LIST_EX@@@Z.c)
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C0006450 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 */

PSLIST_ENTRY __fastcall ndisPplAllocate(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int Number; // ebp
  bool v5; // zf
  unsigned __int64 v7; // rax
  struct _NDIS_NPAGED_LOOKASIDE_LIST *v8; // rbx
  PSLIST_ENTRY v9; // rbx
  SIZE_T v11; // rdx
  ULONG v12; // r8d
  POOL_TYPE v13; // ecx
  _SLIST_ENTRY *v14; // rax
  KSPIN_LOCK *v15; // rdi
  KIRQL v16; // al
  __int64 *v17; // rsi
  _QWORD *v18; // rcx
  __int64 v19; // rdx

  Number = KeGetPcr()->Prcb.Number;
  v5 = ndisMaxNumberOfProcessors == 1;
  *a3 = 1;
  if ( v5 )
    goto LABEL_6;
  v7 = (unsigned __int64)Number << 8;
  v8 = (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(v7 + a1 + 384);
  if ( !v8->Initialized )
    ndisPplLazyInitializeLookaside(
      (PLOOKASIDE_LIST_EX)(v7 + a1 + 384),
      (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(a1 + 128));
  v9 = (PSLIST_ENTRY)ndisAllocateFromLookasideList(v8);
  if ( !v9 )
  {
LABEL_6:
    ++*(_DWORD *)(a1 + 148);
    v9 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 128));
    if ( v9 )
      goto LABEL_11;
    v11 = *(unsigned int *)(a1 + 172);
    v12 = *(_DWORD *)(a1 + 168);
    v13 = *(_DWORD *)(a1 + 164);
    ++*(_DWORD *)(a1 + 152);
    v14 = (_SLIST_ENTRY *)ndisAllocateFromNPagedPool(v13, v11, v12, (PLOOKASIDE_LIST_EX)(a1 + 128));
    v9 = v14;
    if ( v14 )
    {
      v15 = (KSPIN_LOCK *)(a1 + 8);
      v14[-2].Next = (_SLIST_ENTRY *)a1;
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v17 = (__int64 *)(a1 + 16);
      v18 = &v9[-2].Next + 1;
      v19 = *v17;
      if ( *(__int64 **)(*v17 + 8) != v17 )
        __fastfail(3u);
      *v18 = v19;
      v18[1] = v17;
      *(_QWORD *)(v19 + 8) = v18;
      *v17 = (__int64)v18;
      KeReleaseSpinLock(v15, v16);
    }
    *a3 = 0;
    if ( v9 )
LABEL_11:
      *((_DWORD *)&v9[-1].Next + 2) = Number;
  }
  return v9;
}
