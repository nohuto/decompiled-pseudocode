/*
 * XREFs of MiInsertInSystemSpace @ 0x1400FD020
 * Callers:
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1404293F4 (MiReferenceFileObjectForMap.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 */

unsigned __int64 __fastcall MiInsertInSystemSpace(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 *v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  volatile signed __int32 *v9; // r12
  __int64 v10; // rbx
  int *v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // r13d
  int v14; // eax
  unsigned __int64 v15; // rsi
  ULONG_PTR v16; // r14
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rtt
  char *AnyMultiplexedVm; // rax
  void *v21; // rax
  unsigned __int64 v22; // rax
  PVOID PoolWithTag; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // r13
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v27; // rcx
  _BYTE *v28; // rsi
  unsigned __int64 *v29; // rax
  LONG *SharedVm; // rsi
  KIRQL v31; // al
  bool v32; // r8
  _QWORD *v33; // rdx
  unsigned __int64 v34; // r8
  _QWORD *v35; // rax
  unsigned __int64 v36; // rsi
  volatile signed __int64 *v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r9d
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int8 CurrentIrql; // al
  bool v47; // zf
  _QWORD *v48; // rdx
  PRKEVENT v49; // r13
  BOOL v50; // ebx
  struct _KPRCB *v51; // rsi
  LONG SignalState; // eax
  struct _LIST_ENTRY *Flink; // r12
  LIST_ENTRY *i; // rax
  __int64 v55; // rbx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  char v58; // al
  __int64 v59; // rsi
  _QWORD *v60; // r15
  struct _KPRCB *v61; // rax
  _KTHREAD *v62; // r14
  unsigned __int8 v63; // al
  __int64 v64; // r14
  int v65; // r8d
  __int64 *v66; // rdx
  struct _LIST_ENTRY *v67; // r12
  struct _LIST_ENTRY *j; // rcx
  __int64 v69; // rbx
  char v70; // al
  __int64 v71; // r8
  __int64 v72; // rsi
  _QWORD *v73; // r15
  struct _KPRCB *v74; // rax
  _KTHREAD *v75; // r14
  unsigned __int8 v76; // al
  __int64 v77; // r14
  int v78; // r8d
  __int64 *v79; // rdx
  PRKEVENT v80; // rsi
  unsigned __int8 v81; // bl
  PRKEVENT v82; // rbx
  unsigned __int8 v83; // si
  PRKEVENT v84; // r13
  BOOL v85; // ebx
  struct _KPRCB *v86; // rsi
  LONG v87; // eax
  struct _LIST_ENTRY *v88; // r12
  LIST_ENTRY *k; // rax
  __int64 v90; // rbx
  __int64 v91; // rcx
  _QWORD *v92; // rax
  char v93; // al
  __int64 v94; // rsi
  _QWORD *v95; // r15
  struct _KPRCB *v96; // rax
  _KTHREAD *v97; // r14
  unsigned __int8 v98; // al
  __int64 v99; // r14
  int v100; // r8d
  __int64 *v101; // rdx
  struct _LIST_ENTRY *v102; // r12
  struct _LIST_ENTRY *m; // rcx
  __int64 v104; // rbx
  char v105; // al
  __int64 v106; // r8
  __int64 v107; // rsi
  _QWORD *v108; // r15
  struct _KPRCB *v109; // rax
  _KTHREAD *v110; // r14
  unsigned __int8 v111; // al
  __int64 v112; // r14
  int v113; // r8d
  __int64 *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // [rsp+70h] [rbp+0h] BYREF
  void *retaddr; // [rsp+178h] [rbp+108h]

  v5 = (__int64 *)((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = 16 * a2;
  v7 = MiSectionControlArea(a3);
  v9 = (volatile signed __int32 *)v7;
  v10 = v7;
  if ( (*(_DWORD *)(v8 + 56) & 0x8000000) != 0 )
    v10 = v7 | 1;
  if ( (a5 & 1) != 0 )
    v10 |= 2uLL;
  MiPartitionIdToPointer(*(_WORD *)(v7 + 60) & 0x3FF);
  v11 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback));
  if ( (int *)v12 != v11 )
    v10 |= 4uLL;
  *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = &unk_140327518;
  v13 = 0x7FFFF;
  v14 = *((_DWORD *)v9 + 14);
  v15 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
  v16 = 0LL;
  *(_DWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0x7FFFF;
  if ( (v14 & 0x20) != 0 )
  {
    if ( (v14 & 0x4000000) != 0 )
    {
      v13 = -1;
      *(_DWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = -1;
      if ( (int)MiCreatePerSessionProtos(v9, 0xFFFFFFFFLL) < 0 )
      {
        v13 = 0x7FFFF;
        goto LABEL_11;
      }
    }
    v15 = *(_QWORD *)(*(_QWORD *)v9 + 48LL);
    if ( v15 && !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, *(_QWORD *)(*(_QWORD *)v9 + 48LL), 0) )
    {
      v15 = 0LL;
      goto LABEL_11;
    }
  }
  if ( (_UNKNOWN *)a1 == &unk_1403268C0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    *v5 = (__int64)AnyMultiplexedVm;
    if ( !(unsigned int)MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, v6, 0) )
      goto LABEL_11;
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL);
    v21 = &unk_140327518;
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 0LL;
  }
  else
  {
    v22 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
    *v5 = v22;
    v22 -= 3008LL;
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v22;
    v21 = (void *)(v22 + 7952);
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v21;
  }
  v16 = MiReservePtes((__int64)v21, (unsigned int)v6, v12);
  if ( v16 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x7756694Du);
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x60uLL);
      v24 = *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      v25 = (__int64)(v16 << 25) >> 16;
      *(_QWORD *)(v24 + 32) = (unsigned __int64)a2 << 16;
      *(_QWORD *)(v24 + 48) = v10;
      *(_QWORD *)(v24 + 24) = *a4 >> 12;
      *(_QWORD *)(v24 + 40) = v15;
      *(_QWORD *)(v24 + 80) = v25 | 2;
      *(_DWORD *)(v24 + 92) = *(_DWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      if ( (_UNKNOWN *)a1 == &unk_1403268C0 )
        *(_DWORD *)(v24 + 88) = -1;
      else
        *(_DWORD *)(v24 + 88) = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) + 8LL);
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 56LL) = MiReferenceFileObjectForMap(a3);
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v27 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v27;
      v28 = (_BYTE *)KeAbPreAcquire(v27, 0LL, 0);
      v29 = *(unsigned __int64 **)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0LL) )
        ExfAcquirePushLockExclusiveEx(v29, v28, (ULONG_PTR)v29);
      if ( v28 )
        v28[26] |= 1u;
      SharedVm = MiGetSharedVm(*v5);
      v31 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v32 = 0;
      *(_BYTE *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v31;
      ++*(_DWORD *)(a1 + 24);
      v33 = *(_QWORD **)(a1 + 16);
      if ( v33 )
      {
        while ( 1 )
        {
          v34 = v33[10] & 0xFFFFFFFFFFFFF000uLL;
          if ( v25 >= v34 + v33[4] || v25 >= v34 )
          {
            v35 = (_QWORD *)v33[1];
            if ( !v35 )
            {
              v32 = 1;
              break;
            }
          }
          else
          {
            v35 = (_QWORD *)*v33;
            if ( !*v33 )
            {
              v32 = 0;
              break;
            }
          }
          v33 = v35;
        }
      }
      v36 = *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v33, v32, v36);
      MiUnlockWorkingSetExclusive(*v5, *(unsigned __int8 *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      if ( (v9[14] & 0x400) == 0 )
      {
        *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v9;
        MiManageSubsectionView(v5 + 10, (_QWORD *)(v36 + 64), 3);
      }
      v37 = *(volatile signed __int64 **)(a1 + 8);
      if ( (_InterlockedExchangeAdd64(v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v37);
      KeAbPostRelease((ULONG_PTR)v37);
      KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
      if ( (v10 & 1) != 0 )
        _InterlockedIncrement(v9 + 23);
      if ( v6 )
      {
        do
        {
          *(_QWORD *)v16 = 0LL;
          if ( (unsigned int)MiPteInShadowRange(v16, v38) )
            MiWritePteShadow(v39, 0LL);
          v16 += 8LL;
        }
        while ( (unsigned int)(v40 + 1) < v6 );
      }
      return v25;
    }
  }
LABEL_11:
  ++*(_DWORD *)(a1 + 28);
  if ( v16 )
    MiReleasePtes(*(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28), v16, v6);
  if ( *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
    MiChargeWsles(*(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18), -(__int64)v6, 0);
  if ( v13 != 0x7FFFF )
    MiDereferencePerSessionProtos(v9, v13);
  if ( !v15 )
    return 0LL;
  v17 = qword_140324BC0[0];
  if ( qword_140324BC0[0] )
  {
    while ( 1 )
    {
      v18 = v15;
      if ( v15 > v17 )
        v18 = v17;
      v19 = v17;
      v17 = _InterlockedCompareExchange64(qword_140324BC0, v17 - v18, v17);
      if ( v19 == v17 )
        break;
      if ( !v17 )
        goto LABEL_60;
    }
    v15 -= v18;
    if ( !v15 )
      return 0LL;
  }
LABEL_60:
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
  CachedCommit = CurrentPrcb->CachedCommit;
  if ( v15 + CachedCommit <= 0x100 )
  {
    do
    {
      v44 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
              v15 + CachedCommit,
              CachedCommit);
      if ( v44 == CachedCommit )
        return 0LL;
      CachedCommit = v44;
    }
    while ( v15 + v44 <= 0x100 );
  }
  v45 = _InterlockedExchangeAdd64(&qword_1403251A8, -(__int64)v15);
  if ( v45 >= qword_140324BA0 && v45 - v15 < qword_140324BA0 || v45 - v15 < qword_140324B98 && v45 >= qword_140324B98 )
  {
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = &qword_140324BA8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v47 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *(_BYTE *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = CurrentIrql;
    if ( v47 )
    {
      v48 = (_QWORD *)_InterlockedExchange64(&qword_140324BA8, (__int64)(v5 + 6));
      if ( v48 )
        KxWaitForLockOwnerShip((__int64)(v5 + 6), v48);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v5 + 6, &qword_140324BA8);
    }
    if ( qword_1403251A8 < (unsigned __int64)qword_140324B98 )
    {
      v49 = qword_1403236B8;
      if ( qword_1403236B8->Header.SignalState )
        goto LABEL_133;
      v50 = (qword_1403236B8->Header.Type & 0x7F) == 0;
      *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KeGetCurrentIrql();
      __writecr8(2uLL);
      v51 = KeGetCurrentPrcb();
      *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v51;
      KiAcquireKobjectLockSafe(&v49->Header.Lock);
      SignalState = v49->Header.SignalState;
      v49->Header.SignalState = 1;
      if ( SignalState )
        goto LABEL_132;
      if ( !v50 )
      {
        Flink = v49->Header.WaitListHead.Flink;
        for ( i = &v49->Header.WaitListHead; ; i = &v49->Header.WaitListHead )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( Flink == i )
                goto LABEL_132;
              v55 = (__int64)Flink;
              Flink = Flink->Flink;
              v56 = *(_QWORD *)v55;
              v57 = *(_QWORD **)(v55 + 8);
              if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 || *v57 != v55 )
                __fastfail(3u);
              *v57 = v56;
              *(_QWORD *)(v56 + 8) = v57;
              v58 = *(_BYTE *)(v55 + 16);
              if ( v58 != 1 )
                break;
              if ( !(unsigned __int8)KiTryUnwaitThread((__int64)v51, v55, *(unsigned __int16 *)(v55 + 18), 0LL) )
                goto LABEL_103;
              v47 = v49->Header.SignalState-- == 1;
              if ( v47 )
                goto LABEL_132;
              i = &v49->Header.WaitListHead;
            }
            if ( v58 == 2 )
              break;
            KiTryUnwaitThread((__int64)v51, v55, 256LL, 0LL);
LABEL_103:
            i = &v49->Header.WaitListHead;
          }
          *(_BYTE *)(v55 + 17) = 5;
          v59 = *(_QWORD *)(v55 + 24);
          *(_QWORD *)v55 = 0LL;
          v60 = (_QWORD *)(v59 + 8);
          __writecr8(2uLL);
          v61 = KeGetCurrentPrcb();
          v47 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
          *v5 = (__int64)v61;
          v62 = v61->CurrentThread;
          if ( !v47 )
          {
            if ( v62->WaitBlockFill6[68] != 2 || (v63 = 1, v62->NextProcessor != KeGetPcr()->Prcb.Number) )
              v63 = 0;
            EtwTraceEnqueueWork(v62, v55, v63);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v59);
          if ( (_QWORD *)*v60 == v60
            || *(_DWORD *)(v59 + 40) >= *(_DWORD *)(v59 + 44)
            || v62->Queue == (_DISPATCHER_HEADER *volatile)v59 && v62->WaitReason == 15 )
          {
            v64 = *v5;
          }
          else
          {
            v64 = *v5;
            if ( KiWakeQueueWaiter(*v5, v59, v55) )
              goto LABEL_100;
          }
          v65 = *(_DWORD *)(v59 + 4);
          *(_DWORD *)(v59 + 4) = v65 + 1;
          v66 = *(__int64 **)(v59 + 32);
          if ( *v66 != v59 + 24 )
            __fastfail(3u);
          *(_QWORD *)v55 = v59 + 24;
          *(_QWORD *)(v55 + 8) = v66;
          *v66 = v55;
          *(_QWORD *)(v59 + 32) = v55;
          if ( !v65 && (_QWORD *)*v60 != v60 )
            KiWakeOtherQueueWaiters(v64, v59);
LABEL_100:
          _InterlockedAnd((volatile signed __int32 *)v59, 0xFFFFFF7F);
          v47 = v49->Header.SignalState-- == 1;
          if ( v47 )
            goto LABEL_132;
          v51 = *(struct _KPRCB **)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
      }
      v67 = v49->Header.WaitListHead.Flink;
      for ( j = &v49->Header.WaitListHead; ; j = &v49->Header.WaitListHead )
      {
        while ( 1 )
        {
          if ( v67 == j )
          {
            j->Blink = j;
            j->Flink = j;
LABEL_132:
            _InterlockedAnd(&v49->Header.Lock, 0xFFFFFF7F);
            KiExitDispatcher(
              *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
              0LL,
              1LL,
              0LL,
              *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
LABEL_133:
            v80 = qword_1403236C0;
            if ( qword_1403236C0->Header.SignalState == 1 )
            {
              v81 = KeGetCurrentIrql();
              __writecr8(2uLL);
              KiAcquireKobjectLockSafe(&v80->Header.Lock);
              v80->Header.SignalState = 0;
              _InterlockedAnd(&v80->Header.Lock, 0xFFFFFF7F);
              __writecr8(v81);
              v82 = qword_1403236C8;
              v83 = KeGetCurrentIrql();
              __writecr8(2uLL);
              KiAcquireKobjectLockSafe(&v82->Header.Lock);
              v82->Header.SignalState = 0;
              _InterlockedAnd(&v82->Header.Lock, 0xFFFFFF7F);
              __writecr8(v83);
            }
LABEL_203:
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(v5 + 6, retaddr);
              goto LABEL_209;
            }
            _m_prefetchw(v5 + 6);
            v115 = *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            if ( v115 )
            {
LABEL_208:
              *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
              _InterlockedXor64((volatile signed __int64 *)(v115 + 8), 1uLL);
            }
            else if ( (__int64 *)_InterlockedCompareExchange64(
                                   *(volatile signed __int64 **)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
                                   0LL,
                                   ((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 48) != v5 + 6 )
            {
              v115 = KxWaitForLockChainValid(v5 + 6);
              goto LABEL_208;
            }
LABEL_209:
            __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
            return 0LL;
          }
          v69 = (__int64)v67;
          v67 = v67->Flink;
          v70 = *(_BYTE *)(v69 + 16);
          if ( v70 == 1 )
          {
            v71 = *(unsigned __int16 *)(v69 + 18);
            goto LABEL_129;
          }
          if ( v70 == 2 )
            break;
          v71 = 256LL;
LABEL_129:
          KiTryUnwaitThread((__int64)v51, v69, v71, 0LL);
          j = &v49->Header.WaitListHead;
        }
        *(_BYTE *)(v69 + 17) = 5;
        v72 = *(_QWORD *)(v69 + 24);
        *(_QWORD *)v69 = 0LL;
        v73 = (_QWORD *)(v72 + 8);
        __writecr8(2uLL);
        v74 = KeGetCurrentPrcb();
        v47 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
        *v5 = (__int64)v74;
        v75 = v74->CurrentThread;
        if ( !v47 )
        {
          if ( v75->WaitBlockFill6[68] != 2 || (v76 = 1, v75->NextProcessor != KeGetPcr()->Prcb.Number) )
            v76 = 0;
          EtwTraceEnqueueWork(v75, v69, v76);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v72);
        if ( (_QWORD *)*v73 == v73
          || *(_DWORD *)(v72 + 40) >= *(_DWORD *)(v72 + 44)
          || v75->Queue == (_DISPATCHER_HEADER *volatile)v72 && v75->WaitReason == 15 )
        {
          v77 = *v5;
        }
        else
        {
          v77 = *v5;
          if ( KiWakeQueueWaiter(*v5, v72, v69) )
            goto LABEL_127;
        }
        v78 = *(_DWORD *)(v72 + 4);
        *(_DWORD *)(v72 + 4) = v78 + 1;
        v79 = *(__int64 **)(v72 + 32);
        if ( *v79 != v72 + 24 )
          __fastfail(3u);
        *(_QWORD *)v69 = v72 + 24;
        *(_QWORD *)(v69 + 8) = v79;
        *v79 = v69;
        *(_QWORD *)(v72 + 32) = v69;
        if ( !v78 && (_QWORD *)*v73 != v73 )
          KiWakeOtherQueueWaiters(v77, v72);
LABEL_127:
        _InterlockedAnd((volatile signed __int32 *)v72, 0xFFFFFF7F);
        v51 = *(struct _KPRCB **)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
    }
    if ( qword_1403251A8 < (unsigned __int64)qword_140324BA0 )
    {
      if ( qword_1403236C0->Header.SignalState == 1 )
      {
        KeResetEvent(qword_1403236C0);
        KeResetEvent(qword_1403236C8);
      }
      goto LABEL_201;
    }
    v84 = qword_1403236C0;
    if ( qword_1403236C0->Header.SignalState )
      goto LABEL_197;
    v85 = (qword_1403236C0->Header.Type & 0x7F) == 0;
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KeGetCurrentIrql();
    __writecr8(2uLL);
    v86 = KeGetCurrentPrcb();
    *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v86;
    KiAcquireKobjectLockSafe(&v84->Header.Lock);
    v87 = v84->Header.SignalState;
    v84->Header.SignalState = 1;
    if ( v87 )
      goto LABEL_196;
    if ( !v85 )
    {
      v88 = v84->Header.WaitListHead.Flink;
      for ( k = &v84->Header.WaitListHead; ; k = &v84->Header.WaitListHead )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( v88 == k )
              goto LABEL_196;
            v90 = (__int64)v88;
            v88 = v88->Flink;
            v91 = *(_QWORD *)v90;
            v92 = *(_QWORD **)(v90 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v90 + 8LL) != v90 || *v92 != v90 )
              __fastfail(3u);
            *v92 = v91;
            *(_QWORD *)(v91 + 8) = v92;
            v93 = *(_BYTE *)(v90 + 16);
            if ( v93 != 1 )
              break;
            if ( !(unsigned __int8)KiTryUnwaitThread((__int64)v86, v90, *(unsigned __int16 *)(v90 + 18), 0LL) )
              goto LABEL_167;
            v47 = v84->Header.SignalState-- == 1;
            if ( v47 )
              goto LABEL_196;
            k = &v84->Header.WaitListHead;
          }
          if ( v93 == 2 )
            break;
          KiTryUnwaitThread((__int64)v86, v90, 256LL, 0LL);
LABEL_167:
          k = &v84->Header.WaitListHead;
        }
        *(_BYTE *)(v90 + 17) = 5;
        v94 = *(_QWORD *)(v90 + 24);
        *(_QWORD *)v90 = 0LL;
        v95 = (_QWORD *)(v94 + 8);
        __writecr8(2uLL);
        v96 = KeGetCurrentPrcb();
        v47 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
        *v5 = (__int64)v96;
        v97 = v96->CurrentThread;
        if ( !v47 )
        {
          if ( v97->WaitBlockFill6[68] != 2 || (v98 = 1, v97->NextProcessor != KeGetPcr()->Prcb.Number) )
            v98 = 0;
          EtwTraceEnqueueWork(v97, v90, v98);
        }
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v94);
        if ( (_QWORD *)*v95 == v95
          || *(_DWORD *)(v94 + 40) >= *(_DWORD *)(v94 + 44)
          || v97->Queue == (_DISPATCHER_HEADER *volatile)v94 && v97->WaitReason == 15 )
        {
          v99 = *v5;
        }
        else
        {
          v99 = *v5;
          if ( KiWakeQueueWaiter(*v5, v94, v90) )
            goto LABEL_164;
        }
        v100 = *(_DWORD *)(v94 + 4);
        *(_DWORD *)(v94 + 4) = v100 + 1;
        v101 = *(__int64 **)(v94 + 32);
        if ( *v101 != v94 + 24 )
          __fastfail(3u);
        *(_QWORD *)v90 = v94 + 24;
        *(_QWORD *)(v90 + 8) = v101;
        *v101 = v90;
        *(_QWORD *)(v94 + 32) = v90;
        if ( !v100 && (_QWORD *)*v95 != v95 )
          KiWakeOtherQueueWaiters(v99, v94);
LABEL_164:
        _InterlockedAnd((volatile signed __int32 *)v94, 0xFFFFFF7F);
        v47 = v84->Header.SignalState-- == 1;
        if ( v47 )
          goto LABEL_196;
        v86 = *(struct _KPRCB **)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
    }
    v102 = v84->Header.WaitListHead.Flink;
    for ( m = &v84->Header.WaitListHead; ; m = &v84->Header.WaitListHead )
    {
      while ( 1 )
      {
        if ( v102 == m )
        {
          m->Blink = m;
          m->Flink = m;
LABEL_196:
          _InterlockedAnd(&v84->Header.Lock, 0xFFFFFF7F);
          KiExitDispatcher(
            *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
            0LL,
            1LL,
            0LL,
            *(_QWORD *)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
LABEL_197:
          if ( qword_140325228 == qword_140324B88 )
            KeSetEvent(qword_1403236C8, 0, 0);
LABEL_201:
          if ( qword_1403236B8->Header.SignalState == 1 )
            KeResetEvent(qword_1403236B8);
          goto LABEL_203;
        }
        v104 = (__int64)v102;
        v102 = v102->Flink;
        v105 = *(_BYTE *)(v104 + 16);
        if ( v105 == 1 )
        {
          v106 = *(unsigned __int16 *)(v104 + 18);
          goto LABEL_193;
        }
        if ( v105 == 2 )
          break;
        v106 = 256LL;
LABEL_193:
        KiTryUnwaitThread((__int64)v86, v104, v106, 0LL);
        m = &v84->Header.WaitListHead;
      }
      *(_BYTE *)(v104 + 17) = 5;
      v107 = *(_QWORD *)(v104 + 24);
      *(_QWORD *)v104 = 0LL;
      v108 = (_QWORD *)(v107 + 8);
      __writecr8(2uLL);
      v109 = KeGetCurrentPrcb();
      v47 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
      *v5 = (__int64)v109;
      v110 = v109->CurrentThread;
      if ( !v47 )
      {
        if ( v110->WaitBlockFill6[68] != 2 || (v111 = 1, v110->NextProcessor != KeGetPcr()->Prcb.Number) )
          v111 = 0;
        EtwTraceEnqueueWork(v110, v104, v111);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v107);
      if ( (_QWORD *)*v108 == v108
        || *(_DWORD *)(v107 + 40) >= *(_DWORD *)(v107 + 44)
        || v110->Queue == (_DISPATCHER_HEADER *volatile)v107 && v110->WaitReason == 15 )
      {
        v112 = *v5;
      }
      else
      {
        v112 = *v5;
        if ( KiWakeQueueWaiter(*v5, v107, v104) )
          goto LABEL_191;
      }
      v113 = *(_DWORD *)(v107 + 4);
      *(_DWORD *)(v107 + 4) = v113 + 1;
      v114 = *(__int64 **)(v107 + 32);
      if ( *v114 != v107 + 24 )
        __fastfail(3u);
      *(_QWORD *)v104 = v107 + 24;
      *(_QWORD *)(v104 + 8) = v114;
      *v114 = v104;
      *(_QWORD *)(v107 + 32) = v104;
      if ( !v113 && (_QWORD *)*v108 != v108 )
        KiWakeOtherQueueWaiters(v112, v107);
LABEL_191:
      _InterlockedAnd((volatile signed __int32 *)v107, 0xFFFFFF7F);
      v86 = *(struct _KPRCB **)(((unsigned __int64)&v116 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
  }
  return 0LL;
}
