/*
 * XREFs of MiReplaceTransitionPage @ 0x140059C70
 * Callers:
 *     MiObtainTransitionPage @ 0x14005A730 (MiObtainTransitionPage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiReplaceNumaStandbyPage @ 0x14005B3C0 (MiReplaceNumaStandbyPage.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     MI_IS_DECAY_PFN @ 0x14011B378 (MI_IS_DECAY_PFN.c)
 *     MiDetermineModifiedPageListHead @ 0x14012C364 (MiDetermineModifiedPageListHead.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14020ACBC (KeMakeKernelDirectoryTableBase.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 */

unsigned __int64 __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  ULONG_PTR v8; // r12
  unsigned __int16 v9; // ax
  __int16 *v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // rbp
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // ebp
  int v20; // eax
  char v21; // al
  _QWORD *v22; // rdx
  __int64 v23; // r11
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rdx
  signed __int64 v27; // rdx
  signed __int64 v28; // r8
  signed __int64 v29; // rcx
  _QWORD *v30; // r8
  __int64 updated; // rax
  __int64 v32; // r8
  ULONG_PTR v33; // r10
  unsigned __int64 v34; // r9
  volatile signed __int32 *v35; // r8
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  int v38; // r14d
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v40; // rcx
  unsigned __int64 v41; // rbx
  __int64 v42; // r8
  int v43; // edx
  __int64 v44; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 *v48; // rcx
  __int64 PteShadow; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r9
  unsigned __int64 result; // rax
  signed __int32 v54[8]; // [rsp+0h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  ULONG_PTR v57; // [rsp+80h] [rbp+8h]

  v5 = 0xFFFFFF;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v57 = (a1 + 0x58000000000LL) / 48;
  v9 = (HIDWORD(v6) >> 8) & 0x3FF;
  if ( v9 == 1023 )
    v10 = MiSystemPartition;
  else
    v10 = *(__int16 **)(qword_14034F0E8 + 8LL * v9);
  v11 = *(_QWORD *)&v10[4 * (*(_BYTE *)(a1 + 34) & 7) + 1716];
  if ( (*(_BYTE *)(a1 + 34) & 7) == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v12 = v6 >> 58;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 1LL, (unsigned __int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63) << 58);
  }
  else
  {
    LODWORD(v12) = (unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 40)) >> 2;
  }
  v13 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v13);
    }
    while ( (*(_QWORD *)(a2 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) );
  }
  v14 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( *(unsigned __int8 *)(a2 + 34) >> 6 != (_DWORD)v14 )
    MiChangePageAttribute(a2, v14, 1LL);
  MiSetPfnTbFlushStamp(a2, 0LL, 1);
  MiCopyPfnEntry(a2, a1);
  v15 = ((unsigned __int64)(unsigned int)v12 << 58) | *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL;
  v16 = (unsigned int)v12;
  *(_QWORD *)(a2 + 40) = v15;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v57 )
    *(_QWORD *)(a2 + 40) = v15 ^ (v8 ^ v15) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v57, a3, 6);
  _InterlockedOr(v54, 0);
  v18 = 0LL;
  v19 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v20 = *(_DWORD *)(v11 + 8);
  if ( v20 != 2 )
  {
    if ( v20 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 32), &LockHandle);
        v11 = MiDetermineModifiedPageListHead(a2, v10);
LABEL_35:
        v24 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
        v25 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
        *(_QWORD *)a2 ^= (v24 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
        MiSetPfnBlink(a2, v25, 0LL);
        v23 = 0xFFFFFFFFFLL;
        goto LABEL_36;
      }
      v11 = (__int64)&v10[16 * v16 + 1376 + 4 * v16];
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 32), &LockHandle);
    goto LABEL_35;
  }
  v21 = *(_BYTE *)(a1 + 35);
  if ( (v21 & 8) != 0 )
    v5 = 5;
  else
    v5 = v21 & 7;
  LockHandle.LockQueue.Next = 0LL;
  v11 = (__int64)&v10[16 * v5 + 864 + 4 * v5];
  if ( (v21 & 8) != 0 )
    v19 = 1;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 32);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle, v11 + 32);
  }
  else
  {
    v22 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v11 + 32), (__int64)&LockHandle);
    if ( v22 )
      KxWaitForLockOwnerShip((__int64)&LockHandle, v22);
  }
  v23 = 0xFFFFFFFFFLL;
  v24 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v25 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v24 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (v25 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFFFFFLL;
LABEL_36:
  v26 = 0x58000000000LL;
  if ( v24 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v11 + 24) = v8;
  }
  else
  {
    v17 = 48 * v24 - 0x58000000000LL;
    if ( v5 == 0xFFFFFF )
    {
      MiSetPfnBlink(v17, v8, 0LL);
      v23 = 0xFFFFFFFFFLL;
    }
    else
    {
      if ( v19 == 1 && (unsigned int)MI_IS_DECAY_PFN(v24, 0x58000000000LL, v18, v17) == 1 )
      {
        *(_QWORD *)(v17 + 40) ^= v23 & (*(_QWORD *)(v17 + 40) ^ v8);
        goto LABEL_44;
      }
      v27 = *(_QWORD *)(v17 + 24);
      v28 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v17 + 24),
              v23 & v8 | v27 & 0xFFFFFFF000000000uLL,
              v27);
      if ( v27 != v28 )
      {
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v17 + 24),
                  v23 & v8 | v28 & 0xFFFFFFF000000000uLL,
                  v28);
        }
        while ( v29 != v28 );
      }
    }
    v26 = 0x58000000000LL;
  }
LABEL_44:
  if ( v25 == v23 )
  {
    *(_QWORD *)(v11 + 16) = v8;
  }
  else
  {
    v30 = (_QWORD *)(48 * v25 - v26);
    if ( v5 == 0xFFFFFF )
    {
      *v30 ^= v23 & (v8 ^ *v30);
      goto LABEL_56;
    }
    if ( v19 == 1 && (unsigned int)MI_IS_DECAY_PFN(v25, v26, v30, v17) == 1 )
    {
      updated = MiUpdateTransitionPteFrame(v30[2], v8);
      *(_QWORD *)(v32 + 16) = updated;
    }
    else
    {
      *v30 ^= v23 & (v8 ^ *v30);
    }
  }
  if ( v5 != 0xFFFFFF )
    MiReplaceNumaStandbyPage(a1, a2);
LABEL_56:
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_14034F150 != 1 )
    goto LABEL_66;
  v33 = v57 & 0x1F;
  LOBYTE(v34) = 1;
  v35 = (volatile signed __int32 *)qword_14034F160->Buffer + (v57 >> 5);
  if ( v33 + 1 <= 0x20 )
  {
    v36 = 1 << v33;
LABEL_65:
    _InterlockedOr(v35, v36);
    goto LABEL_66;
  }
  if ( (v57 & 0x1F) == 0 )
    goto LABEL_64;
  _InterlockedOr(v35++, ((1 << (32 - (v57 & 0x1F))) - 1) << v33);
  v34 = 1LL - (32 - (unsigned int)(v57 & 0x1F));
  if ( v34 >= 0x20 )
  {
    v37 = v34 >> 5;
    v34 += -32LL * (v34 >> 5);
    do
    {
      *v35++ = -1;
      --v37;
    }
    while ( v37 );
  }
  if ( v34 )
  {
LABEL_64:
    v36 = (1 << v34) - 1;
    goto LABEL_65;
  }
LABEL_66:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
    v38 = 0;
    goto LABEL_72;
  }
  _m_prefetchw(&LockHandle);
  Next = LockHandle.LockQueue.Next;
  v38 = 0;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_72;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
LABEL_72:
  _InterlockedOr(v54, 0);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xF0FFFFF000000000uLL | ((unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56);
  v40 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  if ( v40 == v57 )
  {
    v41 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  else
  {
    v38 = 1;
    v42 = 4LL;
    v43 = *(unsigned __int8 *)(48 * v40 - 0x58000000000LL + 34) >> 6;
    if ( !v43 || v43 == 3 )
    {
      v42 = 12LL;
    }
    else if ( v43 == 2 )
    {
      v42 = 28LL;
    }
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(
                         0LL,
                         MmProtectToPteMask[(unsigned int)v42] ^ ((v40 << 12) ^ MmProtectToPteMask[(unsigned int)v42]) & 0xFFFFFFFFF000LL | 0x21,
                         v42) )
      v44 |= 0x100uLL;
    CurrentPrcb = KeGetCurrentPrcb();
    v46 = v44 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    v47 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v48 = (unsigned __int64 *)(((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v48 = v46;
    if ( (unsigned __int64)(v48 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v48, v46);
    v41 = v47 + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  }
  PteShadow = *(_QWORD *)v41;
  if ( v41 + 0x90482413000LL <= 0x7F8 )
    PteShadow = MiReadPteShadow(v41, *(_QWORD *)v41);
  v50 = MiUpdateTransitionPteFrame(PteShadow, v8);
  *(_QWORD *)v41 = v50;
  if ( v52 <= 0x7F8 )
    MiWritePteShadow(v41, v50);
  if ( v38 == 1 )
  {
    LOBYTE(v51) = 17;
    MiUnmapPageInHyperSpaceWorker(v41, v51, 0x80000000LL);
    v41 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (v41 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
     || qword_14034EDB0
     && v41 >= qword_14034EDB0
     && v41 < qword_14034EDB0 + (qword_14034ED90 << 21)
     && (*(_BYTE *)(48 * ((*(_QWORD *)(((v41 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                  - 0x57FFFFFFFDALL) & 0xF0) == 0xD0) )
  {
    *(_QWORD *)(v41 - 1048) = KeMakeKernelDirectoryTableBase(v8 << 12);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v19 == 1 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  result = 0xFC3FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return result;
}
