/*
 * XREFs of MiRestoreTransitionPte @ 0x1400E5CA0
 * Callers:
 *     MiRelinkStandbyPage @ 0x140012270 (MiRelinkStandbyPage.c)
 *     MiWriteCompletePfn @ 0x1400B51B0 (MiWriteCompletePfn.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     MiReuseStandbyPage @ 0x14022E2A0 (MiReuseStandbyPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x140225960 (MI_CLEAR_RESET_PTE.c)
 *     MI_IS_RESET_PTE @ 0x1402259E8 (MI_IS_RESET_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiBadShareCount @ 0x140226228 (MiBadShareCount.c)
 */

__int64 __fastcall MiRestoreTransitionPte(__int64 a1, char a2)
{
  __int64 v4; // r10
  __int64 v5; // rax
  _QWORD *v6; // r9
  __int64 v7; // r9
  __int64 TopLevelPfn; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 *v14; // r8
  unsigned __int64 PteShadow; // rcx
  __int64 v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // rax
  _QWORD *v19; // r9
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  int v28; // ebp
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *PrototypePteDirect; // rax
  unsigned int v32; // ebx
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 result; // rax
  __int64 v36; // rax
  __int16 *v37; // rax
  char v38; // cl
  __int16 *v39; // r8
  unsigned int v40; // ecx
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  MiClearPfnImageVerified(a1, 12LL);
  v4 = 0x58000000000LL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    v18 = *(_QWORD *)(a1 + 8);
    if ( v18 < 0 )
    {
      v19 = (_QWORD *)(a1 + 16);
      if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
      {
        v20 = *v19;
        if ( (unsigned __int64)(a1 + 0x90482413010LL) <= 0x7F8 )
          LOBYTE(v20) = MiReadPteShadow(a1 + 16, *v19);
        if ( (v20 & 4) == 0 && (unsigned int)MI_IS_RESET_PTE(*v19) )
          MI_CLEAR_RESET_PTE(v21);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v18 | 0x8000000000000000uLL;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = (_QWORD *)(a1 + 16);
    if ( (unsigned __int64)(a1 + 0x90482413010LL) <= 0x7F8 )
      LOBYTE(v5) = MiReadPteShadow(a1 + 16, *(_QWORD *)(a1 + 16));
    if ( (v5 & 4) == 0 )
    {
      if ( (unsigned int)MI_IS_RESET_PTE(*v6) )
        MI_CLEAR_RESET_PTE(v7);
      TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
      v9 = *(_QWORD *)TopLevelPfn;
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      v4 = 0x58000000000LL;
    }
    v10 = *(_QWORD *)(a1 + 40);
    if ( (v10 & 0xFFFFFFFFFLL) == (a1 + v4) / 48 )
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
        v14 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v14;
        if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(v14, *v14);
        v13 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
      }
      v16 = 48 * v13 - v4;
      v17 = 0;
      *(_QWORD *)(a1 + 40) = v10 ^ (v13 ^ v10) & 0xFFFFFFFFFLL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v17 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v17);
        }
        while ( (*(_QWORD *)(v16 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
      }
      *(_QWORD *)(v16 + 24) ^= (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v22 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  v23 = 48 * v22 - 0x58000000000LL;
  v24 = MiMapPageInHyperSpaceWorker(v22, 0LL, 0x80000000LL);
  v25 = *(_QWORD *)(a1 + 16);
  v26 = (_QWORD *)(v24 + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF));
  *v26 = v25;
  if ( (unsigned __int64)(v26 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v26, v25);
  MiUnmapPageInHyperSpaceWorker((__int64)v26, 0x11u);
  v28 = MI_IS_PFN_FILE_ONLY(a1);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), v27, v29, v30);
    MiDereferenceControlAreaPfn(*PrototypePteDirect, PrototypePteDirect, 3LL);
  }
  v32 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v32);
    }
    while ( (*(_QWORD *)(v23 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) );
  }
  if ( (*(_BYTE *)(v23 + 34) & 7) != 6 )
    MiBadShareCount(v23);
  v33 = *(_QWORD *)(v23 + 24);
  v34 = (v33 & 0x3FFFFFFFFFFFFFFFLL) - 1;
  *(_QWORD *)(v23 + 24) = v33 ^ (v34 ^ v33) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v33 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    MiPfnShareCountIsZero(v23, v34);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 != 1 )
  {
    v36 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
    result = v36 & 0xFE3FFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 40) = result;
    if ( (a2 & 2) != 0 )
    {
      *(_BYTE *)(a1 + 35) &= 0xF8u;
      return result;
    }
    v37 = MiPartitionIdToPointer((HIDWORD(result) >> 8) & 0x3FF);
    v38 = *(_BYTE *)(a1 + 35);
    v39 = v37;
    if ( (v38 & 8) != 0 )
      v40 = 5;
    else
      v40 = v38 & 7;
    result = v40;
    _InterlockedIncrement((volatile signed __int32 *)&v39[2 * v40 + 1748]);
    *(_BYTE *)(a1 + 35) &= 0xF8u;
    if ( P )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_14034F280, &LockHandle);
      v41 = (unsigned __int64)P;
      if ( !P )
        goto LABEL_64;
      v42 = (__int64)P[2].Next & 0xFFF;
      if ( ((__int64)P[2].Next & 0xFFF) != 0 )
      {
        P[2].Next->Next = (_SLIST_ENTRY *)((a1 + 0x58000000000LL) / 48);
        *(_QWORD *)(v41 + 32) += 8LL;
        v42 = *(_QWORD *)(v41 + 32) & 0xFFFLL;
      }
      if ( v42 < 0xC00 )
      {
        if ( v42 )
          v41 = 0LL;
        else
          *(_QWORD *)(v41 + 24) = MEMORY[0xFFFFF78000000320];
      }
      else
      {
LABEL_64:
        v41 = (unsigned int)dword_14034F248;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        result = KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_72;
      }
      _m_prefetchw(&LockHandle);
      result = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                   0LL,
                   (signed __int64)&LockHandle);
        if ( (struct _KLOCK_QUEUE_HANDLE *)result == &LockHandle )
          goto LABEL_72;
        result = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    }
    else
    {
      v41 = (unsigned int)dword_14034F248;
    }
LABEL_72:
    if ( v41 )
      return KiInsertQueueDpc((__int64)&dword_14034F448, 0LL, 0LL, 0LL, 0);
  }
  return result;
}
