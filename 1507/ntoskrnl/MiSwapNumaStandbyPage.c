/*
 * XREFs of MiSwapNumaStandbyPage @ 0x14022E2D8
 * Callers:
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MiRebalanceZeroFreeLists @ 0x14022E06C (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiSetPfnTbFlushStamp @ 0x140059A30 (MiSetPfnTbFlushStamp.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14005A4E0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiCanPageMove @ 0x14005ABF0 (MiCanPageMove.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400E6520 (MiMapPageInHyperSpaceWorker.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiSetPfnBlink @ 0x140100DBC (MiSetPfnBlink.c)
 *     MI_IS_DECAY_PFN @ 0x14011B378 (MI_IS_DECAY_PFN.c)
 *     MiUnlinkNumaStandbyPage @ 0x140145774 (MiUnlinkNumaStandbyPage.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeMakeKernelDirectoryTableBase @ 0x14020ACBC (KeMakeKernelDirectoryTableBase.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiUpdateTransitionPteFrame @ 0x1402260DC (MiUpdateTransitionPteFrame.c)
 *     MiInsertNumaStandbyPage @ 0x14022D9D4 (MiInsertNumaStandbyPage.c)
 *     MiReuseStandbyPage @ 0x14022E2A0 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v3; // r15
  __int16 *v5; // rax
  unsigned int v6; // r8d
  unsigned __int64 v7; // r9
  char v8; // r10
  unsigned int v9; // ecx
  __int16 *v10; // r13
  __int64 v11; // rbx
  unsigned int v12; // r11d
  unsigned __int8 *v13; // r14
  unsigned int v14; // edx
  int v15; // edi
  unsigned __int64 v16; // rcx
  __int16 *v17; // rdi
  __int16 *v18; // rax
  ULONG_PTR *v19; // r12
  KSPIN_LOCK *v20; // r13
  __int64 CurrentIrql; // rbx
  ULONG_PTR v22; // r11
  __int64 Next; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  unsigned int v27; // edi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v31; // r11
  __int64 v32; // rax
  __int64 v33; // r10
  unsigned __int64 v34; // r9
  volatile signed __int32 *v35; // r8
  unsigned int v36; // eax
  unsigned __int64 v37; // rcx
  __int64 v38; // r10
  unsigned __int64 v39; // rcx
  _QWORD *v40; // r8
  unsigned __int64 v41; // r10
  __int64 updated; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // r9
  ULONG_PTR v49; // r14
  unsigned __int64 v50; // r10
  __int64 *v51; // rcx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v53; // r10
  __int64 *v54; // rdi
  __int64 PteShadow; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r10
  unsigned int v59; // edi
  __int64 v60; // rax
  signed __int32 v61[8]; // [rsp+0h] [rbp-69h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-49h] BYREF
  unsigned int v63; // [rsp+38h] [rbp-31h]
  __int16 *v64; // [rsp+40h] [rbp-29h]
  __int64 v65; // [rsp+48h] [rbp-21h]
  int v66; // [rsp+50h] [rbp-19h]
  __int16 *v67; // [rsp+58h] [rbp-11h]
  int v68; // [rsp+60h] [rbp-9h]
  ULONG_PTR v69; // [rsp+68h] [rbp-1h]
  __int16 *v70; // [rsp+70h] [rbp+7h]
  unsigned __int8 *v71; // [rsp+78h] [rbp+Fh]
  __int64 v72; // [rsp+80h] [rbp+17h]
  __int64 retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v74; // [rsp+D0h] [rbp+67h]

  v2 = a2;
  v3 = 48 * a1 - 0x58000000000LL;
  v5 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF);
  v9 = MmNumberOfChannels;
  v10 = v5;
  v70 = v5;
  v11 = *((_QWORD *)v5 + 5) + 1336 * v2;
  v72 = v11;
  v12 = 0;
  v63 = 0;
  v13 = 0LL;
  v14 = 0;
  v74 = 0;
  v15 = *(_DWORD *)(v11 + 1296) & 1;
  v66 = MmNumberOfChannels;
  v68 = v15;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v13 = (unsigned __int8 *)(v11 + 1313);
    if ( v15 )
    {
      if ( (v8 & 0x10) != 0 )
      {
        v9 = 1;
        v63 = v6;
        v66 = 1;
        v12 = v6;
        v13 = 0LL;
      }
      else if ( (v8 & 8) != 0 )
      {
        v13 = (unsigned __int8 *)(v11 + 1317);
      }
    }
    else
    {
      if ( v7 >> 58 == (_DWORD)v2 )
        return a1;
      v14 = v6;
      v74 = v6;
    }
  }
  v71 = &v13[v9];
  while ( 1 )
  {
    if ( v13 )
    {
      if ( v15 )
      {
        v16 = *(_QWORD *)(v3 + 40);
        v12 = *v13;
        v63 = v12;
        if ( HIBYTE(v16) >> 2 == (_DWORD)v2 && v12 == ((v16 >> 36) & 3) )
          return a1;
      }
      else
      {
        v12 = v14;
        v63 = v14++;
        v74 = v14;
        if ( v14 >= v9 )
        {
          v14 = 0;
          v74 = 0;
        }
      }
    }
    v17 = v10 + 864;
    v64 = v10 + 864;
    v67 = v10 + 1024;
    if ( v10 + 864 < v10 + 1024 )
      break;
LABEL_53:
    if ( ++v13 >= v71 )
      return a1;
    v9 = v66;
    v15 = v68;
    LODWORD(v2) = a2;
  }
  v18 = v67;
  v19 = (ULONG_PTR *)(192LL * v12 + v11 + 408);
  v20 = (KSPIN_LOCK *)(v10 + 880);
  while ( *v19 == 0xFFFFFFFFFLL )
  {
LABEL_51:
    v17 += 20;
    v20 += 5;
    v19 += 3;
    v64 = v17;
    if ( v17 >= v18 )
    {
      v14 = v74;
      v12 = v63;
      v11 = v72;
      v10 = v70;
      goto LABEL_53;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  v65 = CurrentIrql;
  __writecr8(2uLL);
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
  v22 = *v19;
  v69 = v22;
  if ( v22 == 0xFFFFFFFFFLL )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_26:
      v24 = (unsigned __int8)CurrentIrql;
LABEL_50:
      __writecr8(v24);
      v18 = v67;
      goto LABEL_51;
    }
    _m_prefetchw(&LockHandle);
    Next = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_26;
      Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
    goto LABEL_26;
  }
  v25 = 48 * v22 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
    goto LABEL_56;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
    goto LABEL_34;
  }
  _m_prefetchw(&LockHandle);
  v26 = (__int64)LockHandle.LockQueue.Next;
  if ( !LockHandle.LockQueue.Next )
  {
    if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                         (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                         0LL,
                                         (signed __int64)&LockHandle) == &LockHandle )
      goto LABEL_34;
    v26 = KxWaitForLockChainValid((__int64 *)&LockHandle);
  }
  LockHandle.LockQueue.Next = 0LL;
  _InterlockedXor64((volatile signed __int64 *)(v26 + 8), 1uLL);
LABEL_34:
  v27 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v27);
    }
    while ( (*(_QWORD *)(v25 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
  }
  if ( (*(_BYTE *)(v25 + 34) & 7) != 2 )
    goto LABEL_49;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v20, &LockHandle);
  if ( v69 != *v19 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_49:
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 -= 5;
      v24 = (unsigned __int8)v65;
      v17 = v64 - 20;
      v19 -= 3;
      goto LABEL_50;
    }
    _m_prefetchw(&LockHandle);
    v28 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_49;
      v28 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v28 + 8), 1uLL);
    goto LABEL_49;
  }
  v17 = v64;
LABEL_56:
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    if ( !MiCanPageMove(v25) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_72:
        MiReuseStandbyPage(v25);
        *(_BYTE *)(v25 + 34) &= 0xC7u;
        *(_QWORD *)(v25 + 40) &= ~0x200000000000000uLL;
        *(_BYTE *)(v25 + 35) &= ~0x20u;
        *(_QWORD *)v25 = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8((unsigned __int8)v65);
        MiReleaseFreshPage(v3);
        return v69;
      }
      _m_prefetchw(&LockHandle);
      v32 = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
          goto LABEL_72;
        v32 = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v32 + 8), 1uLL);
      goto LABEL_72;
    }
    if ( dword_14034F150 == 1 )
    {
      v33 = v31 & 0x1F;
      LOBYTE(v34) = 1;
      v35 = (volatile signed __int32 *)qword_14034F160->Buffer + (v31 >> 5);
      if ( (unsigned __int64)(v33 + 1) <= 0x20 )
      {
        v36 = 1 << v33;
LABEL_82:
        _InterlockedOr(v35, v36);
        goto LABEL_83;
      }
      if ( (v31 & 0x1F) == 0 )
        goto LABEL_81;
      _InterlockedOr(v35++, ((1 << (32 - (v31 & 0x1F))) - 1) << v33);
      v34 = 1LL - (32 - (unsigned int)(v31 & 0x1F));
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
LABEL_81:
        v36 = (1 << v34) - 1;
        goto LABEL_82;
      }
    }
LABEL_83:
    v38 = *(_QWORD *)v25 & 0xFFFFFFFFFLL;
    v39 = *(_QWORD *)(v25 + 24) & 0xFFFFFFFFFLL;
    if ( (*(_BYTE *)(v25 + 35) & 8) != 0 )
    {
      if ( MI_IS_DECAY_PFN(v39) )
      {
        updated = MiUpdateTransitionPteFrame(v40[2]);
        *(_QWORD *)(v43 + 16) = updated;
      }
      else
      {
        *v40 ^= (a1 ^ *v40) & 0xFFFFFFFFFLL;
      }
      if ( MI_IS_DECAY_PFN(v41) )
      {
        *(_QWORD *)(v44 + 40) ^= (a1 ^ *(_QWORD *)(v44 + 40)) & 0xFFFFFFFFFLL;
        goto LABEL_97;
      }
      v45 = v44;
    }
    else
    {
      if ( v39 == 0xFFFFFFFFFLL )
        *((_QWORD *)v17 + 2) = a1;
      else
        *(_QWORD *)(48 * v39 - 0x58000000000LL) ^= (a1 ^ *(_QWORD *)(48 * v39 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
      if ( v38 == 0xFFFFFFFFFLL )
      {
        *((_QWORD *)v17 + 3) = a1;
LABEL_97:
        MiUnlinkNumaStandbyPage(v25);
        MiFinalizePageAttribute(v3, *(unsigned __int8 *)(v25 + 34) >> 6, 1);
        MiCopyPfnEntry(v3, v25);
        MiInsertNumaStandbyPage(v46);
        _InterlockedOr(v61, 0);
        if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v3 + 31)) & 0xF) != 0 )
          MiSetPfnTbFlushStamp(v3, (unsigned int)KiTbFlushTimeStamp, 1);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
          goto LABEL_105;
        }
        _m_prefetchw(&LockHandle);
        v47 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_105;
          v47 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v47 + 8), 1uLL);
LABEL_105:
        v48 = *(_QWORD *)(v25 + 40) & 0xFFFFFFFFFLL;
        v49 = v69;
        if ( v48 == v69 )
        {
          v50 = (*(_QWORD *)(v25 + 8) | 0x8000000000000000uLL) - 1088;
          if ( (*(_BYTE *)(8 * ((v50 >> 39) & 0x1FF) - 0x90482413000LL) & 1) == 0
            || (*(_BYTE *)(((v50 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 1) == 0
            || (*(_QWORD *)(((v50 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) & 0x81) != 0x81 )
          {
            v51 = (__int64 *)(((v50 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            if ( (unsigned __int64)(v51 + 0x12090482600LL) <= 0x7F8 )
              MiReadPteShadow((__int64)v51, *v51);
          }
          *(_QWORD *)(v3 + 40) ^= (a1 ^ *(_QWORD *)(v3 + 40)) & 0xFFFFFFFFFLL;
          KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
          *(_QWORD *)(v53 + 40) = KernelDirectoryTableBase;
        }
        v54 = (__int64 *)(MiMapPageInHyperSpaceWorker(v48, 0LL)
                        + 8 * (((unsigned __int64)*(unsigned int *)(v25 + 8) >> 3) & 0x1FF));
        PteShadow = *v54;
        if ( (unsigned __int64)(v54 + 0x12090482600LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow((__int64)v54, *v54);
        v56 = MiUpdateTransitionPteFrame(PteShadow);
        *v54 = v56;
        if ( v57 <= v58 )
          MiWritePteShadow((__int64)v54, v56);
        MiUnmapPageInHyperSpaceWorker((__int64)v54, 0x11u);
        MiCopyPage(a1, v49, 0LL, 6);
        _InterlockedOr(v61, 0);
        v59 = KiTbFlushTimeStamp;
        if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v3 + 31)) & 0xF) == 0 )
          goto LABEL_123;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)v64 + 4, &LockHandle);
        MiSetPfnTbFlushStamp(v3, v59, 1);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
LABEL_123:
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_BYTE *)(v25 + 34) &= 0xC7u;
          *(_QWORD *)(v25 + 40) &= ~0x200000000000000uLL;
          *(_BYTE *)(v25 + 35) &= ~0x20u;
          _InterlockedOr(v61, 0);
          MiSetPfnTbFlushStamp(v25, (unsigned int)KiTbFlushTimeStamp, 1);
          *(_QWORD *)v25 = 0LL;
          MiSetPfnBlink(v25, 0LL, 1);
          *(_BYTE *)(v25 + 34) = *(_BYTE *)(v25 + 34) & 0xF8 | 5;
          *(_QWORD *)(v25 + 16) = MiMakeDemandZeroPte(4);
          *(_QWORD *)(v25 + 40) &= 0xFE3FFFFFFFFFFFFFuLL;
          *(_BYTE *)(v25 + 35) &= 0xF0u;
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8((unsigned __int8)v65);
          return v49;
        }
        _m_prefetchw(&LockHandle);
        v60 = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_123;
          v60 = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v60 + 8), 1uLL);
        goto LABEL_123;
      }
      v45 = 48 * v38 - 0x58000000000LL;
    }
    MiSetPfnBlink(v45, a1, 0);
    goto LABEL_97;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
    goto LABEL_63;
  }
  _m_prefetchw(&LockHandle);
  v29 = (__int64)LockHandle.LockQueue.Next;
  if ( LockHandle.LockQueue.Next )
  {
LABEL_62:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v29 + 8), 1uLL);
  }
  else if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                            (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                            0LL,
                                            (signed __int64)&LockHandle) != &LockHandle )
  {
    v29 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    goto LABEL_62;
  }
LABEL_63:
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8((unsigned __int8)v65);
  return a1;
}
