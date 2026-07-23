/*
 * XREFs of MiSectionCreated @ 0x14002E3D0
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     MiReferenceControlAreaPfn @ 0x140035604 (MiReferenceControlAreaPfn.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     MiInitializeTransitionPfn @ 0x1400E2B5C (MiInitializeTransitionPfn.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14011B984 (KiAbThreadUnboostCpuPriority.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14025CCD0 (EtwTraceAutoBoostClearFloor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSectionCreated(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // r12
  unsigned int v7; // edi
  unsigned int v8; // ebx
  signed __int32 i; // edx
  _QWORD *v10; // rax
  __int64 v11; // rbp
  volatile signed __int32 *v12; // rbx
  signed __int32 j; // edx
  signed __int32 k; // edx
  unsigned int v15; // edi
  signed __int32 m; // edx
  char v17; // al
  ULONG_PTR v18; // rdi
  __int64 n; // rbp
  unsigned int v20; // ebx
  int v21; // eax
  ULONG_PTR v22; // r14
  char v23; // al
  struct _KTHREAD *CurrentThread; // rdi
  int v25; // r15d
  struct _KPROCESS *Process; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  char *v33; // rbx
  __int16 v34; // ax
  __int16 v35; // ax
  bool v36; // zf
  __int16 v37; // cx
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 v40; // [rsp+78h] [rbp+10h] BYREF
  int v41; // [rsp+80h] [rbp+18h]
  __int64 v42; // [rsp+88h] [rbp+20h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 72);
  }
  else
  {
    v8 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 72), 0x1Fu) )
      v8 = ExpWaitForSpinLockExclusiveAndAcquire(a2 + 72);
    for ( i = *(_DWORD *)(a2 + 72); (i & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)(a2 + 72) )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 72), i | 0x40000000, i);
      if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
  }
  if ( (BYTE4(KeGetCurrentThread()[1].Queue) & 0x40) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x200u;
  v10 = *(_QWORD **)(a1 + 40);
  if ( a3 )
  {
    v11 = v10[2];
    v12 = (volatile signed __int32 *)(v11 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11 + 72);
      *(_QWORD *)(a2 + 80) = *(_QWORD *)(v11 + 80);
      v42 = 0LL;
    }
    else
    {
      if ( _interlockedbittestandset(v12, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(v11 + 72);
      for ( j = *v12; (*v12 & 0xBFFFFFFF) != 0x80000000; j = *v12 )
      {
        if ( (j & 0x40000000) == 0 )
          _InterlockedCompareExchange(v12, j | 0x40000000, j);
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
      *(_QWORD *)(a2 + 80) = *(_QWORD *)(v11 + 80);
      v42 = 0LL;
    }
  }
  else
  {
    v11 = *v10;
    v12 = (volatile signed __int32 *)(*v10 + 72LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(*v10 + 72LL);
    }
    else
    {
      if ( _interlockedbittestandset(v12, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire(v12);
      for ( k = *v12; (*v12 & 0xBFFFFFFF) != 0x80000000; k = *v12 )
      {
        if ( (k & 0x40000000) == 0 )
          _InterlockedCompareExchange(v12, k | 0x40000000, k);
        if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v7);
      }
    }
    v42 = *(_QWORD *)(v11 + 80);
  }
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(v11 + 64);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_14034E780);
  }
  else
  {
    v15 = 0;
    if ( _interlockedbittestandset(&dword_14034E780, 0x1Fu) )
      v15 = ExpWaitForSpinLockExclusiveAndAcquire(&dword_14034E780);
    for ( m = dword_14034E780; (dword_14034E780 & 0xBFFFFFFF) != 0x80000000; m = dword_14034E780 )
    {
      if ( (m & 0x40000000) == 0 )
        _InterlockedCompareExchange(&dword_14034E780, m | 0x40000000, m);
      if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v15);
    }
  }
  if ( a3 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) = a2;
    v17 = BYTE6(PerfGlobalGroupMask);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
      v17 = BYTE6(PerfGlobalGroupMask);
    }
    else
    {
      dword_14034E780 = 0;
    }
    if ( (v17 & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
    else
      *v12 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 72, retaddr);
    else
      *(_DWORD *)(a2 + 72) = 0;
    __writecr8(CurrentIrql);
    v18 = *(_QWORD *)(a2 + 128);
    for ( n = MiLockProtoPoolPage(v18, &v40); !n; n = MiLockProtoPoolPage(v18, &v40) )
      MmAccessFault(2uLL, v18);
    v20 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v20 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v20);
      }
      while ( (*(_QWORD *)(a3 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) );
    }
    if ( (BYTE2(MiFlags) & 3) == 2 && (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v18) & 2) != 0 )
      MiMarkPfnVerified(a3, 6LL);
    MiInitializeTransitionPfn((a3 + 0x58000000000LL) / 48, v18);
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(n, v40);
    v21 = *(_DWORD *)(a3 + 16);
    *(_QWORD *)a3 = 0LL;
    if ( (v21 & 0x400) != 0 )
      MiReferenceControlAreaPfn(a2, 0LL, 1LL);
    return v42;
  }
  v22 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v22 = a2;
  v23 = BYTE6(PerfGlobalGroupMask);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_14034E780, retaddr);
    v23 = BYTE6(PerfGlobalGroupMask);
  }
  else
  {
    dword_14034E780 = 0;
  }
  if ( (v23 & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v12, retaddr);
  else
    *v12 = 0;
  *(_DWORD *)(a2 + 56) &= ~2u;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 72, retaddr);
  else
    *(_DWORD *)(a2 + 72) = 0;
  __writecr8(CurrentIrql);
  if ( !KiAbEnabled )
    return v42;
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  if ( v22 + 0x70000000000LL > 0x7FFFFFFFFFLL
    || (Process = CurrentThread->ApcState.Process, (v27 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v28 = 0xFFFFFFFFLL;
  }
  else
  {
    v28 = *(unsigned int *)(v27 + 8);
  }
  if ( KeGetCurrentIrql() <= 1u )
  {
    v25 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  v29 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3Fu;
  v36 = !_BitScanReverse((unsigned int *)&v30, v29);
  v41 = v30;
  if ( v36 )
    goto LABEL_102;
  while ( 1 )
  {
    v31 = 1 << v30;
    v32 = 96 * v30;
    v33 = (char *)CurrentThread->LockEntries + v32;
    v29 = ~v31 & (unsigned int)v29;
    if ( (v33[26] & 1) != 0
      && (*((_DWORD *)v33 + 8) & 1) == 0
      && (*((_QWORD *)v33 + 4) & 0x7FFFFFFFFFFFFFFCLL) == (v22 & 0x7FFFFFFFFFFFFFFCLL)
      && *((_DWORD *)v33 + 10) == (_DWORD)v28 )
    {
      v33[26] &= ~1u;
      if ( *((_QWORD *)v33 + 4) )
        break;
    }
    v36 = !_BitScanReverse((unsigned int *)&v30, v29);
    v41 = v30;
    if ( v36 )
      goto LABEL_102;
  }
  if ( !v33 )
  {
LABEL_102:
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v22, (unsigned int)v28, 0LL);
    if ( v25 )
    {
      v37 = CurrentThread->SpecialApcDisable + 1;
      CurrentThread->SpecialApcDisable = v37;
      if ( !v37 )
      {
        v32 = (__int64)&CurrentThread->152;
        v36 = *(_QWORD *)v32 == v32;
LABEL_122:
        if ( !v36 )
          KiCheckForKernelApcDelivery(v32, v28, v29);
      }
    }
  }
  else
  {
    v33[32] |= 2u;
    if ( *((__int64 *)v33 + 4) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)((char *)&CurrentThread->LockEntries[0].TreeNode + v32));
    v34 = *((_WORD *)v33 + 44);
    if ( v34 )
    {
      if ( (v34 & 1) != 0 )
      {
        _InterlockedDecrement(&CurrentThread->AbCompletedIoBoostCount);
        PsBoostThreadIoEx(CurrentThread, 1LL, 0LL, 0LL);
      }
      v32 = 65534LL;
      if ( (*((_WORD *)v33 + 44) & 0xFFFE) != 0 )
        KiAbThreadUnboostCpuPriority((ULONG_PTR)CurrentThread);
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostClearFloor(
          CurrentThread,
          *((_QWORD *)v33 + 4) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL,
          *((unsigned __int16 *)v33 + 44));
      *((_WORD *)v33 + 44) = 0;
    }
    v33[25] &= ~1u;
    *((_QWORD *)v33 + 4) = 0LL;
    v28 = (v33 - (char *)CurrentThread - 800) / 96;
    if ( !v25 )
    {
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v28);
      return v42;
    }
    CurrentThread->AbEntrySummary |= 1 << v28;
    v35 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v35;
    if ( !v35 )
    {
      v36 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
      goto LABEL_122;
    }
  }
  return v42;
}
