/*
 * XREFs of MiRestoreTransitionPte @ 0x14001CD70
 * Callers:
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     MiWriteCompletePfn @ 0x14004E120 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     MiRelinkStandbyPage @ 0x1400BC3A4 (MiRelinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x1401F38B0 (MiReuseStandbyPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MI_IS_RESET_PTE @ 0x14001E930 (MI_IS_RESET_PTE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiVaToPfn @ 0x140081B60 (MiVaToPfn.c)
 *     MiDereferenceControlAreaPfnList @ 0x14008F3D0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiGetPfnPriority @ 0x1400E4644 (MiGetPfnPriority.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

__int64 __fastcall MiRestoreTransitionPte(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  int IsPfnFileOnly; // r15d
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 TopLevelPfn; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  int *v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // r11
  int v23; // r10d
  __int64 v24; // rsi
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r9
  _QWORD *PrototypePteDirect; // rax
  __int64 result; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 updated; // rax
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  IsPfnFileOnly = MiIsPfnFileOnly(a1, a2, a3, a4);
  MiClearPfnImageVerified(a1, 12LL);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v32 = *(_QWORD *)(a1 + 8);
    v17 = 0x8000000000000000uLL;
    if ( v32 < 0 )
    {
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 && !(unsigned int)MiGetPagingFileOffset(a1 + 16) )
      {
        if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(a1 + 16)) )
        {
          v33 = MI_READ_PTE_LOCK_FREE(a1 + 16);
          updated = MiUpdatePageFileHighInPte(v33, 0LL);
          *(_QWORD *)(a1 + 16) = updated;
          if ( (unsigned int)MiPteInShadowRange(a1 + 16, updated) )
            MiWritePteShadow(a1 + 16, v17);
        }
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v32 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 16) & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(a1 + 16)) )
      {
        v11 = MI_READ_PTE_LOCK_FREE(a1 + 16);
        v12 = MiUpdatePageFileHighInPte(v11, 0LL);
        *(_QWORD *)(a1 + 16) = v12;
        if ( (unsigned int)MiPteInShadowRange(a1 + 16, v12) )
          MiWritePteShadow(a1 + 16, v13);
      }
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, v9, v10);
      v15 = *(_QWORD *)TopLevelPfn;
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v15 + 1467) & 0xC0) == 0x80 )
        _InterlockedIncrement64((volatile signed __int64 *)(v15 + 1488));
    }
    v16 = *(_QWORD *)(a1 + 40);
    v17 = (a1 + 0x58000000000LL) / 48;
    if ( (v16 & 0xFFFFFFFFFLL) == v17 )
    {
      v18 = MiVaToPfn((*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) - 1088);
      *(_QWORD *)(a1 + 40) = v16 ^ (v18 ^ v16) & 0xFFFFFFFFFLL;
      v19 = 48 * v18 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v19);
      v17 = 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v19 + 24) ^= (*(_QWORD *)(v19 + 24) ^ (*(_QWORD *)(v19 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v20 = (int *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF, v17, v7, v8);
  v21 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), 0LL, 0LL, 4LL);
  if ( v23 == 1 && v20 != &MiSystemPartition )
    v21 |= 8uLL;
  v24 = 48 * (v22 & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v25 = (__int64 *)(MiMapPageInHyperSpaceWorker(v22 & 0xFFFFFFFFFLL, 0LL, 0x80000000LL)
                  + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF));
  *v25 = v21;
  if ( (unsigned int)MiPteInShadowRange(v25, v26) )
    MiWritePteShadow(v28, v21);
  LOBYTE(v27) = 17;
  MiUnmapPageInHyperSpaceWorker(v29, v27, 0x80000000LL);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, PrototypePteDirect, 1LL);
  }
  MiLockNestedPageAtDpcInline(v24);
  result = MiDecrementShareCount(v24);
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( IsPfnFileOnly != 1 )
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    result = 0xFE3FFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
    if ( (v4 & 2) != 0 )
    {
      *(_BYTE *)(a1 + 35) &= 0xF8u;
    }
    else
    {
      result = MiGetPfnPriority(a1);
      _InterlockedIncrement(&v20[(unsigned int)result + 954]);
      *(_BYTE *)(a1 + 35) &= 0xF8u;
      if ( P )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327200, &LockHandle);
        v35 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_39;
        v36 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((a1 + 0x58000000000LL) / 48);
          *(_QWORD *)(v35 + 32) += 8LL;
          v36 = *(_QWORD *)(v35 + 32) & 0xFFFLL;
        }
        if ( v36 < 0xC00 )
        {
          if ( v36 )
            v35 = 0LL;
          else
            *(_QWORD *)(v35 + 24) = MEMORY[0xFFFFF78000000320];
          result = KxReleaseQueuedSpinLock(&LockHandle);
        }
        else
        {
LABEL_39:
          v35 = (unsigned int)dword_1403271C8;
          result = KxReleaseQueuedSpinLock(&LockHandle);
        }
      }
      else
      {
        v35 = (unsigned int)dword_1403271C8;
      }
      if ( v35 )
        return KiInsertQueueDpc((ULONG_PTR)&dword_1403273C8, 0);
    }
  }
  return result;
}
