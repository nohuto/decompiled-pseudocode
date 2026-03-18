/*
 * XREFs of MiRestoreTransitionPte @ 0x1400B4ED0
 * Callers:
 *     MiRelinkStandbyPage @ 0x140014990 (MiRelinkStandbyPage.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiWriteCompletePfn @ 0x1400673F0 (MiWriteCompletePfn.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x1401E442C (MiReuseStandbyPage.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400A99A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400A9AE0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfn @ 0x1400B5418 (MiDereferenceControlAreaPfn.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiRestoreTransitionPte(__int64 a1, char a2)
{
  int v4; // r15d
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 TopLevelPfn; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v4 = MI_IS_PFN_FILE_ONLY(a1);
  MiClearPfnImageVerified(a1, 12LL);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    if ( v15 < 0 )
    {
      v16 = *(_QWORD *)(a1 + 16);
      if ( (v16 & 0x400) == 0
        && !(unsigned int)MI_GET_PAGING_FILE_OFFSET(a1 + 16)
        && (v16 & 1) == 0
        && (v16 & 0x800) == 0
        && (v16 & 0x2000) == 0
        && (v16 & 0x1000) == 0
        && HIDWORD(v16) == 1 )
      {
        *(_QWORD *)(a1 + 16) = (unsigned int)v16;
        if ( (unsigned int)MiPteInShadowRange(a1 + 16) )
          MiWritePteShadow(a1 + 16, (unsigned int)v16);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v15 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( !(unsigned int)MI_GET_PAGING_FILE_OFFSET(a1 + 16) )
    {
      v6 = *(_QWORD *)(a1 + 16);
      if ( (v6 & 1) == 0
        && (v6 & 0x800) == 0
        && (v6 & 0x400) == 0
        && (v6 & 0x2000) == 0
        && (v6 & 0x1000) == 0
        && HIDWORD(v6) == 1 )
      {
        v7 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = (unsigned int)v6;
        if ( (unsigned int)MiPteInShadowRange(a1 + 16) )
          MiWritePteShadow(a1 + 16, v7);
      }
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
      v9 = *(_QWORD *)TopLevelPfn;
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 920), 0xFFFFFFFFFFFFFFFFuLL);
    }
    v10 = *(_QWORD *)(a1 + 40);
    if ( (v10 & 0xFFFFFFFFFLL) == (a1 + 0x58000000000LL) / 48 )
    {
      v11 = (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) - 1088;
      if ( (*(_BYTE *)(8 * ((v11 >> 39) & 0x1FF) - 0x90482413000LL) & 1) != 0
        && (*(_BYTE *)(((v11 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) != 0
        && (v12 = *(_QWORD *)(((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL), (v12 & 0x81) == 0x81) )
      {
        v13 = ((v12 >> 12) & 0xFFFFFFFFFLL) + ((v11 >> 12) & 0x1FF);
      }
      else
      {
        v13 = MI_GET_PAGE_FRAME_FROM_PTE(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      }
      *(_QWORD *)(a1 + 40) = v10 ^ (v13 ^ v10) & 0xFFFFFFFFFLL;
      v14 = 48 * v13 - 0x58000000000LL;
      MiLockNestedPageAtDpcInline(v14, v13, v5);
      *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v17 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v18 = 48 * v17 - 0x58000000000LL;
  v19 = MiMapPageInHyperSpaceWorker(v17, 0LL, 0x80000000);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = (_QWORD *)(v19 + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF));
  *v21 = v20;
  if ( (unsigned int)MiPteInShadowRange(v21) )
    MiWritePteShadow(v21, v20);
  MiUnmapPageInHyperSpaceWorker((__int64)v21, 0x11u);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v24 = *(_QWORD *)(a1 + 16);
    if ( (v24 & 0x400) != 0 )
      MiDereferenceControlAreaPfn(*(_QWORD *)(v24 >> 16), v24 >> 16, 3LL);
  }
  MiLockNestedPageAtDpcInline(v18, v22, v23);
  result = MiDecrementShareCount(v18);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v4 != 1 )
  {
    v26 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    result = v26 & 0xFE3FFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 40) = result;
    if ( (a2 & 2) != 0 )
    {
      *(_BYTE *)(a1 + 35) &= 0xF8u;
    }
    else
    {
      MiPartitionIdToPointer((HIDWORD(result) >> 8) & 0x3FF);
      result = MI_GET_PFN_PRIORITY(a1);
      _InterlockedIncrement((volatile signed __int32 *)(v27 + 4LL * (unsigned int)result + 3688));
      *(_BYTE *)(a1 + 35) &= 0xF8u;
      if ( P )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_1402FEDC0, &LockHandle);
        v28 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_49;
        v29 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((a1 + 0x58000000000LL) / 48);
          *(_QWORD *)(v28 + 32) += 8LL;
          v29 = *(_QWORD *)(v28 + 32) & 0xFFFLL;
        }
        if ( v29 < 0xC00 )
        {
          if ( v29 )
            v28 = 0LL;
          else
            *(_QWORD *)(v28 + 24) = MEMORY[0xFFFFF78000000320];
          result = (__int64)KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        }
        else
        {
LABEL_49:
          v28 = (unsigned int)dword_1402FED88;
          result = (__int64)KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        }
      }
      else
      {
        v28 = (unsigned int)dword_1402FED88;
      }
      if ( v28 )
        return KiInsertQueueDpc((ULONG_PTR)&dword_1402FEF88, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
