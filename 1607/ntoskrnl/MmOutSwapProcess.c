/*
 * XREFs of MmOutSwapProcess @ 0x1400909CC
 * Callers:
 *     KiOutSwapProcesses @ 0x140090730 (KiOutSwapProcesses.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14001D720 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140034510 (MiMapPageInHyperSpaceWorker.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     KeFlushProcessTb @ 0x140075EFC (KeFlushProcessTb.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KeIsEmptyAffinityEx @ 0x1400D26B0 (KeIsEmptyAffinityEx.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 */

void __fastcall MmOutSwapProcess(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // r14
  LONG *SharedVm; // rax
  LONG *v4; // rbx
  char v5; // cl
  char v6; // al
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _SLIST_ENTRY *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rbx
  __int16 v23; // [rsp+20h] [rbp-38h] BYREF
  char v24; // [rsp+22h] [rbp-36h]
  int v25; // [rsp+24h] [rbp-34h]
  _QWORD v26[2]; // [rsp+28h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v29; // [rsp+A8h] [rbp+50h] BYREF
  int v30; // [rsp+B0h] [rbp+58h] BYREF
  __int64 TransitionPte; // [rsp+B8h] [rbp+60h]

  v1 = BugCheckParameter1 + 1280;
  SharedVm = MiGetSharedVm(BugCheckParameter1 + 1280);
  v4 = SharedVm;
  _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x40u);
  v5 = *(_BYTE *)(v1 + 187) >> 6;
  if ( v5 == 1 )
  {
    MiReleaseOutSwappedProcessCommit(BugCheckParameter1);
  }
  else if ( v5 == 2 && *(_QWORD *)(*((_QWORD *)SharedVm + 4) + 40LL) )
  {
    MiReleaseCommitForResetPages(BugCheckParameter1);
  }
  if ( *(_QWORD *)(v1 + 128) == 5LL && (*(_BYTE *)(v1 + 187) & 8) == 0 )
  {
    v23 = 263;
    v26[1] = v26;
    v24 = 6;
    v26[0] = v26;
    v25 = 0;
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    while ( 1 )
    {
      v6 = *(_BYTE *)(v1 + 185);
      if ( (v6 & 6) == 0 && (v6 & 0xF0) == 0 )
        break;
      if ( (v6 & 0xF0) != 0 )
        goto LABEL_29;
      *(_QWORD *)(v1 + 96) = &v23;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      KeWaitForGate(&v23, 18LL);
      KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
      *(_QWORD *)(v1 + 96) = 0LL;
    }
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x80u);
    v7 = (_QWORD *)(v1 + 24);
    v8 = *(_QWORD *)(v1 + 24);
    v9 = *(_QWORD **)(v1 + 32);
    if ( *(_QWORD *)(v8 + 8) != v1 + 24 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    *v7 = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v10 = (_SLIST_ENTRY *)*((_QWORD *)v4 + 5);
    if ( v10 )
    {
      MiEmptyPageAccessLog(v10);
      *((_QWORD *)v4 + 5) = 0LL;
    }
    v30 = 0;
    while ( !(unsigned int)KeIsEmptyAffinityEx(BugCheckParameter1 + 272) )
      KeYieldProcessorEx(&v30);
    KeFlushProcessTb(*(_QWORD *)(BugCheckParameter1 + 40));
    if ( *(_QWORD *)(BugCheckParameter1 + 1536) )
      KeFlushProcessTb(*(_QWORD *)(BugCheckParameter1 + 704));
    v11 = *(_QWORD *)(BugCheckParameter1 + 864);
    v29 = 17;
    do
    {
      v12 = v11;
      v11 = *(_QWORD *)(48 * v11 - 0x58000000000LL + 40) & 0xFFFFFFFFFLL;
      MiMapPageInHyperSpaceWorker(v11, &v29, 0x80000000);
      TransitionPte = MiMakeTransitionPte(v12, 4LL);
      v13 = TransitionPte;
      *v14 = TransitionPte;
      if ( (unsigned int)MiPteInShadowRange(v14, v15) )
        MiWritePteShadow(v17, v13);
      LOBYTE(v16) = v29;
      MiUnmapPageInHyperSpaceWorker(v18, v16);
    }
    while ( v11 != v12 );
    v19 = *(_QWORD *)(BugCheckParameter1 + 864);
    do
    {
      v20 = v19;
      v21 = 48 * v19 - 0x58000000000LL;
      v19 = *(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL;
      MiLockAndDecrementShareCount(v21, 0);
    }
    while ( v19 != v20 );
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    MiLockPageAtDpcInline(v21);
    v22 = TransitionPte;
    *(_QWORD *)(v21 + 8) = BugCheckParameter1 + 1088;
    *(_QWORD *)(BugCheckParameter1 + 1088) = v22;
    *(_QWORD *)(BugCheckParameter1 + 864) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1392) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1400) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1408) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1416) = 0LL;
    MiDecrementShareCount(v21);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_29:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
