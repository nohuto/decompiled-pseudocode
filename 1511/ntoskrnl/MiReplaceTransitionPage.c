/*
 * XREFs of MiReplaceTransitionPage @ 0x1400714A0
 * Callers:
 *     MiObtainTransitionPage @ 0x140071020 (MiObtainTransitionPage.c)
 * Callees:
 *     MiFlushHyperSpace @ 0x140010528 (MiFlushHyperSpace.c)
 *     MiSetPfnBlink @ 0x140012C74 (MiSetPfnBlink.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiSetPfnTbFlushStamp @ 0x140071D20 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiReplaceNumaStandbyPage @ 0x140071E90 (MiReplaceNumaStandbyPage.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     MI_IS_DECAY_PFN @ 0x1400E55E4 (MI_IS_DECAY_PFN.c)
 *     MiDetermineModifiedPageListHead @ 0x1400EE590 (MiDetermineModifiedPageListHead.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1401CBC1C (KeMakeKernelDirectoryTableBase.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiReplaceTransitionPage(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int16 v9; // ax
  int *v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  ULONG_PTR v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // r8d
  int v18; // eax
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // r11
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r10
  int v25; // eax
  __int64 v26; // r8
  signed __int64 v27; // rdx
  signed __int64 v28; // r8
  signed __int64 v29; // rcx
  _QWORD *v30; // rdx
  int v31; // eax
  int v32; // r8d
  int v33; // r13d
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  volatile signed __int32 *v36; // r8
  unsigned int v37; // eax
  unsigned int v38; // edx
  unsigned __int64 v39; // rdx
  __int64 v40; // r9
  unsigned __int64 v41; // r14
  int v42; // edx
  int v43; // ecx
  unsigned __int64 ValidKernelPte; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v46; // rbx
  unsigned __int64 v47; // rbp
  __int64 *v48; // r14
  unsigned __int64 v49; // rbx
  unsigned __int64 HyperPte; // rbp
  int v51; // ebx
  _QWORD *v52; // r14
  unsigned __int64 v53; // rbp
  unsigned int v54; // ebx
  unsigned __int64 result; // rax
  signed __int32 v56[8]; // [rsp+0h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v58; // [rsp+90h] [rbp+8h]
  int v59; // [rsp+98h] [rbp+10h] BYREF
  unsigned int *v60; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v61; // [rsp+A8h] [rbp+20h]

  v60 = a3;
  v5 = 0xFFFFFF;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v8 = ((unsigned __int64)v7 >> 63) + (v7 >> 3);
  v61 = (a1 + 0x58000000000LL) / 48;
  v9 = (HIDWORD(v6) >> 8) & 0x3FF;
  if ( v9 == 1023 )
    v10 = &MiSystemPartition;
  else
    v10 = *(int **)(qword_1402FEC28 + 8LL * v9);
  v11 = *(_QWORD *)&v10[2 * (*(_BYTE *)(a1 + 34) & 7) + 906];
  if ( (*(_BYTE *)(a1 + 34) & 7) == 3 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    v12 = v6 >> 58;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48, 1) << 58);
  }
  else
  {
    v12 = (unsigned __int8)HIBYTE(*(_QWORD *)(a2 + 40)) >> 2;
  }
  v59 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v59);
    while ( (*(_QWORD *)(a2 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v13 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( *(unsigned __int8 *)(a2 + 34) >> 6 != (_DWORD)v13 )
    MiChangePageAttribute(a2, v13, 1LL);
  MiSetPfnTbFlushStamp(a2, 0LL, 1LL);
  MiCopyPfnEntry(a2, a1);
  v14 = v61;
  v15 = *(_QWORD *)(a2 + 40) & 0x3FFFFFFFFFFFFFFLL | (v12 << 58);
  *(_QWORD *)(a2 + 40) = v15;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v14 )
    *(_QWORD *)(a2 + 40) = v15 ^ (v8 ^ v15) & 0xFFFFFFFFFLL;
  MiCopyPage(v8, v14, v60, 6u);
  _InterlockedOr(v56, 0);
  v17 = 0;
  v58 = 0;
  *(_QWORD *)(a2 + 24) ^= (*(_QWORD *)(a2 + 24) ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
  v18 = *(_DWORD *)(v11 + 8);
  if ( v18 != 2 )
  {
    if ( v18 == 3 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0x400LL) == 0 )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 32), &LockHandle);
        v11 = MiDetermineModifiedPageListHead(a2, v10);
LABEL_31:
        v22 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
        v23 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
        *(_QWORD *)a2 ^= (v22 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
        MiSetPfnBlink(a2, v23, 0);
        v21 = 0xFFFFFFFFFLL;
        goto LABEL_32;
      }
      v11 = (__int64)&v10[10 * v12 + 720];
    }
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 32), &LockHandle);
    goto LABEL_31;
  }
  v19 = *(_BYTE *)(a1 + 35);
  if ( (v19 & 8) != 0 )
    v5 = 5;
  else
    v5 = v19 & 7;
  LockHandle.LockQueue.Next = 0LL;
  if ( (v19 & 8) != 0 )
    v17 = 1;
  v11 = (__int64)&v10[8 * v5 + 464 + 2 * v5];
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v11 + 32);
  v58 = v17;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&LockHandle);
  }
  else
  {
    v20 = _InterlockedExchange64((volatile __int64 *)(v11 + 32), (__int64)&LockHandle);
    if ( v20 )
      KxWaitForLockOwnerShip(&LockHandle);
  }
  v21 = 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)a1 & 0xFFFFFFFFFLL;
  v23 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  *(_QWORD *)a2 ^= (v22 ^ *(_QWORD *)a2) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a2 + 24) ^= (v23 ^ *(_QWORD *)(a2 + 24)) & 0xFFFFFFFFFLL;
LABEL_32:
  v24 = 0x58000000000LL;
  if ( v22 == 0xFFFFFFFFFLL )
  {
    *(_QWORD *)(v11 + 24) = v8;
  }
  else
  {
    v16 = 48 * v22 - 0x58000000000LL;
    if ( v5 == 0xFFFFFF )
    {
      MiSetPfnBlink(48 * v22 - 0x58000000000LL, v8, 0);
      v21 = 0xFFFFFFFFFLL;
    }
    else
    {
      if ( v58 == 1 )
      {
        v25 = MI_IS_DECAY_PFN(v22, v20, 1LL, v16, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock);
        if ( v25 == (_DWORD)v26 )
        {
          *(_QWORD *)(v16 + 40) ^= v21 & (v8 ^ *(_QWORD *)(v16 + 40));
          goto LABEL_41;
        }
      }
      v27 = *(_QWORD *)(v16 + 24);
      v28 = _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v16 + 24),
              v21 & v8 | v27 & 0xFFFFFFF000000000uLL,
              v27);
      if ( v27 != v28 )
      {
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v16 + 24),
                  v21 & v8 | v28 & 0xFFFFFFF000000000uLL,
                  v28);
        }
        while ( v29 != v28 );
      }
    }
    v24 = 0x58000000000LL;
  }
  v26 = v58;
LABEL_41:
  if ( v23 == v21 )
  {
    *(_QWORD *)(v11 + 16) = v8;
  }
  else
  {
    v30 = (_QWORD *)(48 * v23 - v24);
    if ( v5 == 0xFFFFFF )
    {
      *v30 ^= v21 & (v8 ^ *v30);
      goto LABEL_53;
    }
    if ( (_DWORD)v26 == 1
      && (v31 = MI_IS_DECAY_PFN(v23, v30, v26, v16, LockHandle.LockQueue.Next, LockHandle.LockQueue.Lock), v31 == v32) )
    {
      v30[2] ^= (v30[2] ^ (v8 << 12)) & 0xFFFFFFFFF000LL;
    }
    else
    {
      *v30 ^= v21 & (v8 ^ *v30);
    }
  }
  if ( v5 != 0xFFFFFF )
    MiReplaceNumaStandbyPage(a1, a2);
LABEL_53:
  v33 = 1;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  if ( dword_1402FEC90 != 1 )
    goto LABEL_63;
  LOBYTE(v34) = 1;
  v35 = v61 & 0x1F;
  v36 = (volatile signed __int32 *)stru_1402FECA8.Buffer + (v61 >> 5);
  if ( v35 + 1 <= 0x20 )
  {
    v37 = 1 << v35;
LABEL_62:
    _InterlockedOr(v36, v37);
    goto LABEL_63;
  }
  if ( (v61 & 0x1F) == 0 )
    goto LABEL_61;
  v38 = 32 - (v61 & 0x1F);
  _InterlockedOr(v36++, ((1 << (32 - (v61 & 0x1F))) - 1) << v35);
  v34 = 1LL - v38;
  if ( v34 >= 0x20 )
  {
    v39 = v34 >> 5;
    v34 += -32LL * (v34 >> 5);
    do
    {
      *v36++ = -1;
      --v39;
    }
    while ( v39 );
  }
  if ( v34 )
  {
LABEL_61:
    v37 = (1 << v34) - 1;
    goto LABEL_62;
  }
LABEL_63:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  _InterlockedOr(v56, 0);
  v40 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xF0FFFFF000000000uLL | ((unsigned __int64)(KiTbFlushTimeStamp & 0xF) << 56);
  if ( v40 == v61 )
  {
    v41 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v33 = 0;
  }
  else
  {
    v42 = 4;
    v43 = *(unsigned __int8 *)(48 * v40 - 0x58000000000LL + 34) >> 6;
    if ( !v43 || v43 == 3 )
    {
      v42 = 12;
    }
    else if ( v43 == 2 )
    {
      v42 = 28;
    }
    ValidKernelPte = MiMakeValidKernelPte(v40, v42, 0LL, v40);
    CurrentPrcb = KeGetCurrentPrcb();
    v46 = ValidKernelPte | 0x42;
    v47 = ((unsigned __int64)CurrentPrcb->HyperPte & 0xFFFFFFFFFFFFF000uLL)
        + (((__int64)CurrentPrcb->HyperPte & 0xFFF) << 12);
    v48 = (__int64 *)(((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *v48 = v46;
    if ( (unsigned int)MiPteInShadowRange(v48) )
      MiWritePteShadow(v48, v46);
    v41 = v47 + 8LL * ((*(_DWORD *)(a1 + 8) >> 3) & 0x1FF);
  }
  v49 = ((v8 & 0xFFFFFFFFFLL) << 12) | MI_READ_PTE_LOCK_FREE(v41) & 0xFFFF000000000FFFuLL;
  *(_QWORD *)v41 = v49;
  if ( (unsigned int)MiPteInShadowRange(v41) )
    MiWritePteShadow(v41, v49);
  if ( v33 == 1 )
  {
    HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
    v51 = HyperPte & 0xFFF;
    v52 = (_QWORD *)((((v41 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v53 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
    v54 = v51 + 1;
    *v52 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v52) )
      MiWritePteShadow(v52, 0LL);
    if ( v54 == 64 )
    {
      MiFlushHyperSpace();
      v54 = 0;
    }
    KeGetCurrentPrcb()->HyperPte = (void *)(v53 | v54);
    v41 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  }
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
    && (v41 + 0x200000000000LL <= 0xFFFFFFFFFFFLL
     || qword_1402FE8F0
     && v41 >= qword_1402FE8F0
     && v41 < qword_1402FE8F0 + (qword_1402FE8D0 << 21)
     && (*(_BYTE *)(48 * ((*(_QWORD *)(((v41 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                  - 0x57FFFFFFFDALL) & 0xF0) == 0xD0) )
  {
    *(_QWORD *)(v41 - 1048) = KeMakeKernelDirectoryTableBase(v8 << 12);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v58 == 1 )
    *(_BYTE *)(a1 + 35) &= ~8u;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  result = 0xFC3FFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return result;
}
