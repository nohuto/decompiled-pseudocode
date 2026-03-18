/*
 * XREFs of MiInsertInSystemSpace @ 0x14000A670
 * Callers:
 *     MiMapViewInSystemSpace @ 0x1403C7CC0 (MiMapViewInSystemSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x1403F62BC (MiReferenceFileObjectForMap.c)
 *     MiCreatePerSessionProtos @ 0x14062BE88 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x14062C01C (MiDereferencePerSessionProtos.c)
 */

unsigned __int64 __fastcall MiInsertInSystemSpace(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, char a5)
{
  volatile signed __int32 **v5; // rbp
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r13
  __int64 v10; // rdi
  unsigned int v11; // r12d
  int v12; // eax
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  volatile signed __int32 *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rcx
  PVOID PoolWithTag; // rax
  __int64 v22; // r8
  unsigned __int64 v23; // r12
  __int128 v24; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v26; // rcx
  __int64 v27; // rsi
  volatile signed __int32 *v28; // rax
  unsigned __int64 v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rsi
  ULONG_PTR v33; // rsi
  unsigned int i; // edi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int8 CurrentIrql; // al
  bool v41; // zf
  __int64 v42; // r12
  BOOL v43; // edi
  struct _KPRCB *v44; // rsi
  int v45; // eax
  _QWORD *v46; // r15
  _QWORD *j; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rcx
  _QWORD *v50; // rax
  char v51; // al
  __int64 v52; // rsi
  struct _KPRCB *v53; // rax
  _KTHREAD *v54; // r14
  unsigned __int8 v55; // al
  _QWORD *v56; // rcx
  _QWORD *v57; // r15
  _QWORD *v58; // rcx
  _QWORD *v59; // rdi
  char v60; // al
  __int64 v61; // r8
  __int64 v62; // rsi
  struct _KPRCB *v63; // rax
  _KTHREAD *v64; // r14
  unsigned __int8 v65; // al
  _QWORD *v66; // rcx
  __int64 v67; // rsi
  unsigned __int8 v68; // di
  __int64 v69; // rdi
  unsigned __int8 v70; // si
  unsigned __int64 v71; // rax
  __int64 v72; // r12
  BOOL v73; // edi
  struct _KPRCB *v74; // rsi
  int v75; // eax
  _QWORD *v76; // r15
  _QWORD *k; // rax
  _QWORD *v78; // rdi
  __int64 v79; // rcx
  _QWORD *v80; // rax
  char v81; // al
  __int64 v82; // rsi
  struct _KPRCB *v83; // rax
  _KTHREAD *v84; // r14
  unsigned __int8 v85; // al
  _QWORD *v86; // rcx
  _QWORD *v87; // r15
  _QWORD *v88; // rcx
  _QWORD *v89; // rdi
  char v90; // al
  __int64 v91; // r8
  __int64 v92; // rsi
  struct _KPRCB *v93; // rax
  _KTHREAD *v94; // r14
  unsigned __int8 v95; // al
  _QWORD *v96; // rcx
  __int64 v97; // r12
  int v98; // edi
  struct _KPRCB *v99; // rsi
  int v100; // eax
  _QWORD *v101; // r15
  _QWORD *m; // rax
  _QWORD *v103; // rdi
  __int64 v104; // rcx
  _QWORD *v105; // rax
  char v106; // al
  __int64 v107; // rsi
  struct _KPRCB *v108; // rax
  _KTHREAD *v109; // r14
  unsigned __int8 v110; // al
  _QWORD *v111; // rcx
  _QWORD *v112; // r15
  _QWORD *v113; // rcx
  _QWORD *v114; // rdi
  char v115; // al
  __int64 v116; // r8
  __int64 v117; // rsi
  struct _KPRCB *v118; // rax
  _KTHREAD *v119; // r14
  unsigned __int8 v120; // al
  _QWORD *v121; // rcx
  __int64 v122; // rsi
  __int64 v123; // rsi
  unsigned __int8 v124; // di
  __int64 v125; // rdi
  unsigned __int8 v126; // si
  unsigned __int8 v127; // di
  __int64 v128; // rax
  __int64 v129; // [rsp+50h] [rbp+0h] BYREF
  void *retaddr; // [rsp+158h] [rbp+108h]

  v5 = (volatile signed __int32 **)((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL);
  v6 = 16 * a2;
  v7 = MiSectionControlArea(a3);
  v9 = v7;
  v10 = v7;
  if ( (*(_DWORD *)(v8 + 56) & 0x8000000) != 0 )
    v10 = v7 | 1;
  if ( (a5 & 1) != 0 )
    v10 |= 2uLL;
  *v5 = (volatile signed __int32 *)&unk_1402FF0D8;
  v11 = 0x7FFFF;
  v12 = *(_DWORD *)(v7 + 56);
  v13 = 0LL;
  *(_DWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 0;
  v14 = 0LL;
  *(_DWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0x7FFFF;
  if ( (v12 & 0x20) != 0 )
  {
    if ( (v12 & 0x4000000) != 0 )
    {
      v11 = -1;
      *(_DWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = -1;
      if ( (int)MiCreatePerSessionProtos(v9, 0xFFFFFFFFLL) < 0 )
      {
        v11 = 0x7FFFF;
        goto LABEL_9;
      }
    }
    v13 = *(_QWORD *)(*(_QWORD *)v9 + 48LL);
    if ( v13 && !(unsigned int)MiChargeCommit(&MiSystemPartition, *(_QWORD *)(*(_QWORD *)v9 + 48LL), 0LL) )
    {
      v13 = 0LL;
      goto LABEL_9;
    }
  }
  if ( (_UNKNOWN *)a1 == &unk_1402FE5C0 )
  {
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = &dword_1402FFA80;
    if ( !(unsigned int)MiChargeWsles((ULONG_PTR)&dword_1402FFA80) )
      goto LABEL_9;
    *(_DWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 1;
    v18 = (volatile signed __int32 *)&unk_1402FF0D8;
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
  }
  else
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = v19;
    v20 = v19 + 2968;
    v18 = (volatile signed __int32 *)(v19 + 7824);
    *v5 = v18;
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v20;
  }
  v14 = MiReservePtes(v18, (unsigned int)v6);
  if ( v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x7756694Du);
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x60uLL);
      v22 = *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      v23 = v14 << 25 >> 16;
      *(_QWORD *)(v22 + 32) = (unsigned __int64)a2 << 16;
      *(_QWORD *)(v22 + 48) = v10;
      v24 = *a4;
      *(_QWORD *)(v22 + 40) = v13;
      *(_QWORD *)(v22 + 24) = (__int64)((WORD4(v24) & 0xFFF) + (_QWORD)v24) >> 12;
      *(_QWORD *)(v22 + 80) = v23 | 2;
      *(_DWORD *)(v22 + 92) = *(_DWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      if ( (_UNKNOWN *)a1 == &unk_1402FE5C0 )
        *(_DWORD *)(v22 + 88) = -1;
      else
        *(_DWORD *)(v22 + 88) = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) + 8LL);
      *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) + 56LL) = MiReferenceFileObjectForMap(a3);
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v26 = *(_QWORD *)(a1 + 8);
      *v5 = (volatile signed __int32 *)v26;
      v27 = KeAbPreAcquire(v26);
      v28 = *v5;
      if ( _interlockedbittestandset64(*v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v28, v27, v28);
      if ( v27 )
        *(_BYTE *)(v27 + 26) |= 1u;
      *(_BYTE *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = ExAcquireSpinLockExclusive(*(PEX_SPIN_LOCK *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
      LOBYTE(v29) = 0;
      ++*(_DWORD *)(a1 + 24);
      v30 = *(_QWORD **)(a1 + 16);
      if ( v30 )
      {
        while ( 1 )
        {
          v29 = v30[10] & 0xFFFFFFFFFFFFF000uLL;
          if ( v23 >= v29 + v30[4] || v23 >= v29 )
          {
            v31 = (_QWORD *)v30[1];
            if ( !v31 )
            {
              LOBYTE(v29) = 1;
              break;
            }
          }
          else
          {
            v31 = (_QWORD *)*v30;
            if ( !*v30 )
            {
              LOBYTE(v29) = 0;
              break;
            }
          }
          v30 = v31;
        }
      }
      v32 = *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      RtlAvlInsertNodeEx(a1 + 16, v30, v29, v32);
      MiUnlockWorkingSetExclusive(
        *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
        *(unsigned __int8 *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10));
      if ( (*(_DWORD *)(v9 + 56) & 0x400) == 0 )
      {
        *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v9;
        MiManageSubsectionView(v5 + 10, v32 + 64, 3LL);
      }
      v33 = *(_QWORD *)(a1 + 8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v33);
      KeAbPostRelease(v33);
      KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
      if ( (v10 & 1) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 92));
      for ( i = 0; i < v6; v14 += 8LL )
      {
        *(_QWORD *)v14 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v14) )
          MiWritePteShadow(v14, 0LL);
        ++i;
      }
      return v23;
    }
  }
LABEL_9:
  ++*(_DWORD *)(a1 + 28);
  if ( v14 )
    MiReleasePtes(*v5, v14, (unsigned int)v6);
  if ( *(_DWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) == 1 )
    MiChargeWsles((ULONG_PTR)&dword_1402FFA80);
  if ( v11 != 0x7FFFF )
    MiDereferencePerSessionProtos(v9, v11);
  if ( !v13 )
    return 0LL;
  v15 = qword_140301100[0];
  if ( qword_140301100[0] )
  {
    while ( 1 )
    {
      v16 = v13;
      if ( v13 > v15 )
        v16 = v15;
      v17 = v15;
      v15 = _InterlockedCompareExchange64(qword_140301100, v15 - v16, v15);
      if ( v17 == v15 )
        break;
      if ( !v15 )
        goto LABEL_58;
    }
    v13 -= v16;
    if ( !v13 )
      return 0LL;
  }
LABEL_58:
  CurrentPrcb = KeGetCurrentPrcb();
  _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
  CachedCommit = CurrentPrcb->CachedCommit;
  if ( v13 + CachedCommit <= 0x100 )
  {
    do
    {
      v38 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
              CachedCommit + v13,
              CachedCommit);
      if ( v38 == CachedCommit )
        return 0LL;
      CachedCommit = v38;
    }
    while ( v38 + v13 <= 0x100 );
  }
  v39 = _InterlockedExchangeAdd64(&qword_140301488, -(__int64)v13);
  if ( v39 >= qword_1403010E0 && v39 - v13 < qword_1403010E0 || v39 - v13 < qword_1403010D8 && v39 >= qword_1403010D8 )
  {
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = &qword_1403010E8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v41 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
    *(_BYTE *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = CurrentIrql;
    if ( v41 )
    {
      if ( _InterlockedExchange64(&qword_1403010E8, (__int64)(v5 + 5)) )
        KxWaitForLockOwnerShip(v5 + 5);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v5 + 5);
    }
    if ( qword_140301488 < (unsigned __int64)qword_1403010D8 )
    {
      v42 = qword_1402FFE70;
      if ( *(_DWORD *)(qword_1402FFE70 + 4) )
        goto LABEL_123;
      v43 = (*(_BYTE *)qword_1402FFE70 & 0x7F) == 0;
      *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = KeGetCurrentIrql();
      __writecr8(2uLL);
      v44 = KeGetCurrentPrcb();
      *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v44;
      KiAcquireKobjectLockSafe(v42);
      v45 = *(_DWORD *)(v42 + 4);
      *(_DWORD *)(v42 + 4) = 1;
      if ( v45 )
        goto LABEL_122;
      if ( !v43 )
      {
        v46 = *(_QWORD **)(v42 + 8);
        for ( j = (_QWORD *)(v42 + 8); ; j = (_QWORD *)(v42 + 8) )
        {
          while ( 1 )
          {
            if ( v46 == j )
              goto LABEL_122;
            v48 = v46;
            v46 = (_QWORD *)*v46;
            v49 = *v48;
            v50 = (_QWORD *)v48[1];
            if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v50 != v48 )
              __fastfail(3u);
            *v50 = v49;
            *(_QWORD *)(v49 + 8) = v50;
            v51 = *((_BYTE *)v48 + 16);
            if ( v51 == 1 )
              break;
            if ( v51 == 2 )
            {
              *((_BYTE *)v48 + 17) = 5;
              v52 = v48[3];
              *v48 = 0LL;
              __writecr8(2uLL);
              v53 = KeGetCurrentPrcb();
              v41 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
              *v5 = (volatile signed __int32 *)v53;
              v54 = v53->CurrentThread;
              if ( !v41 )
              {
                if ( v54->WaitBlockFill6[68] != 2 || (v55 = 1, v54->NextProcessor != KeGetPcr()->Prcb.Number) )
                  v55 = 0;
                EtwTraceEnqueueWork(v54, v48, v55);
              }
              KiAcquireKobjectLockSafe(v52);
              if ( *(_QWORD *)(v52 + 16) == v52 + 8
                || *(_DWORD *)(v52 + 40) >= *(_DWORD *)(v52 + 44)
                || v54->Queue == (_DISPATCHER_HEADER *volatile)v52 && v54->WaitReason == 15
                || !(unsigned __int8)KiWakeQueueWaiter(*v5, v52, v48) )
              {
                ++*(_DWORD *)(v52 + 4);
                v56 = *(_QWORD **)(v52 + 32);
                *v48 = v52 + 24;
                v48[1] = v56;
                if ( *v56 != v52 + 24 )
                  __fastfail(3u);
                *v56 = v48;
                *(_QWORD *)(v52 + 32) = v48;
              }
              _InterlockedAnd((volatile signed __int32 *)v52, 0xFFFFFF7F);
              v41 = (*(_DWORD *)(v42 + 4))-- == 1;
              if ( v41 )
                goto LABEL_122;
              v44 = *(struct _KPRCB **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
              j = (_QWORD *)(v42 + 8);
            }
            else
            {
              KiTryUnwaitThread(v44, v48, 256LL, 0LL);
LABEL_97:
              j = (_QWORD *)(v42 + 8);
            }
          }
          if ( !(unsigned __int8)KiTryUnwaitThread(v44, v48, *((unsigned __int16 *)v48 + 9), 0LL) )
            goto LABEL_97;
          v41 = (*(_DWORD *)(v42 + 4))-- == 1;
          if ( v41 )
            goto LABEL_122;
        }
      }
      v57 = *(_QWORD **)(v42 + 8);
      v58 = (_QWORD *)(v42 + 8);
      while ( 1 )
      {
        if ( v57 == v58 )
        {
          v58[1] = v58;
          *v58 = v58;
LABEL_122:
          _InterlockedAnd((volatile signed __int32 *)v42, 0xFFFFFF7F);
          KiExitDispatcher(
            *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
            0,
            1,
            0,
            *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
LABEL_123:
          v67 = qword_1402FFE78;
          if ( *(_DWORD *)(qword_1402FFE78 + 4) == 1 )
          {
            v68 = KeGetCurrentIrql();
            __writecr8(2uLL);
            KiAcquireKobjectLockSafe(v67);
            *(_DWORD *)(v67 + 4) = 0;
            _InterlockedAnd((volatile signed __int32 *)v67, 0xFFFFFF7F);
            __writecr8(v68);
            v69 = qword_1402FFE80;
            v70 = KeGetCurrentIrql();
            __writecr8(2uLL);
            KiAcquireKobjectLockSafe(v69);
            *(_DWORD *)(v69 + 4) = 0;
            _InterlockedAnd((volatile signed __int32 *)v69, 0xFFFFFF7F);
            v71 = v70;
            goto LABEL_242;
          }
          goto LABEL_243;
        }
        v59 = v57;
        v57 = (_QWORD *)*v57;
        v60 = *((_BYTE *)v59 + 16);
        if ( v60 == 1 )
          break;
        if ( v60 == 2 )
        {
          *((_BYTE *)v59 + 17) = 5;
          v62 = v59[3];
          *v59 = 0LL;
          __writecr8(2uLL);
          v63 = KeGetCurrentPrcb();
          v41 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
          *v5 = (volatile signed __int32 *)v63;
          v64 = v63->CurrentThread;
          if ( !v41 )
          {
            if ( v64->WaitBlockFill6[68] != 2 || (v65 = 1, v64->NextProcessor != KeGetPcr()->Prcb.Number) )
              v65 = 0;
            EtwTraceEnqueueWork(v64, v59, v65);
          }
          KiAcquireKobjectLockSafe(v62);
          if ( *(_QWORD *)(v62 + 16) == v62 + 8
            || *(_DWORD *)(v62 + 40) >= *(_DWORD *)(v62 + 44)
            || v64->Queue == (_DISPATCHER_HEADER *volatile)v62 && v64->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(*v5, v62, v59) )
          {
            ++*(_DWORD *)(v62 + 4);
            v66 = *(_QWORD **)(v62 + 32);
            *v59 = v62 + 24;
            v59[1] = v66;
            if ( *v66 != v62 + 24 )
              __fastfail(3u);
            *v66 = v59;
            *(_QWORD *)(v62 + 32) = v59;
          }
          _InterlockedAnd((volatile signed __int32 *)v62, 0xFFFFFF7F);
          v44 = *(struct _KPRCB **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v58 = (_QWORD *)(v42 + 8);
        }
        else
        {
          v61 = 256LL;
LABEL_119:
          KiTryUnwaitThread(v44, v59, v61, 0LL);
          v58 = (_QWORD *)(v42 + 8);
        }
      }
      v61 = *((unsigned __int16 *)v59 + 9);
      goto LABEL_119;
    }
    if ( qword_140301488 < (unsigned __int64)qword_1403010E0 )
    {
      v123 = qword_1402FFE78;
      if ( *(_DWORD *)(qword_1402FFE78 + 4) == 1 )
      {
        v124 = KeGetCurrentIrql();
        __writecr8(2uLL);
        KiAcquireKobjectLockSafe(v123);
        *(_DWORD *)(v123 + 4) = 0;
        _InterlockedAnd((volatile signed __int32 *)v123, 0xFFFFFF7F);
        __writecr8(v124);
        v125 = qword_1402FFE80;
        v126 = KeGetCurrentIrql();
        __writecr8(2uLL);
        KiAcquireKobjectLockSafe(v125);
        *(_DWORD *)(v125 + 4) = 0;
        _InterlockedAnd((volatile signed __int32 *)v125, 0xFFFFFF7F);
        __writecr8(v126);
      }
      v122 = qword_1402FFE70;
      if ( *(_DWORD *)(qword_1402FFE70 + 4) != 1 )
        goto LABEL_243;
      goto LABEL_241;
    }
    v72 = qword_1402FFE78;
    if ( *(_DWORD *)(qword_1402FFE78 + 4) )
      goto LABEL_179;
    v73 = (*(_BYTE *)qword_1402FFE78 & 0x7F) == 0;
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = KeGetCurrentIrql();
    __writecr8(2uLL);
    v74 = KeGetCurrentPrcb();
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v74;
    KiAcquireKobjectLockSafe(v72);
    v75 = *(_DWORD *)(v72 + 4);
    *(_DWORD *)(v72 + 4) = 1;
    if ( v75 )
      goto LABEL_178;
    if ( !v73 )
    {
      v76 = *(_QWORD **)(v72 + 8);
      for ( k = (_QWORD *)(v72 + 8); ; k = (_QWORD *)(v72 + 8) )
      {
        while ( 1 )
        {
          if ( v76 == k )
            goto LABEL_178;
          v78 = v76;
          v76 = (_QWORD *)*v76;
          v79 = *v78;
          v80 = (_QWORD *)v78[1];
          if ( *(_QWORD **)(*v78 + 8LL) != v78 || (_QWORD *)*v80 != v78 )
            __fastfail(3u);
          *v80 = v79;
          *(_QWORD *)(v79 + 8) = v80;
          v81 = *((_BYTE *)v78 + 16);
          if ( v81 == 1 )
            break;
          if ( v81 == 2 )
          {
            *((_BYTE *)v78 + 17) = 5;
            v82 = v78[3];
            *v78 = 0LL;
            __writecr8(2uLL);
            v83 = KeGetCurrentPrcb();
            v41 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
            *v5 = (volatile signed __int32 *)v83;
            v84 = v83->CurrentThread;
            if ( !v41 )
            {
              if ( v84->WaitBlockFill6[68] != 2 || (v85 = 1, v84->NextProcessor != KeGetPcr()->Prcb.Number) )
                v85 = 0;
              EtwTraceEnqueueWork(v84, v78, v85);
            }
            KiAcquireKobjectLockSafe(v82);
            if ( *(_QWORD *)(v82 + 16) == v82 + 8
              || *(_DWORD *)(v82 + 40) >= *(_DWORD *)(v82 + 44)
              || v84->Queue == (_DISPATCHER_HEADER *volatile)v82 && v84->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(*v5, v82, v78) )
            {
              ++*(_DWORD *)(v82 + 4);
              v86 = *(_QWORD **)(v82 + 32);
              *v78 = v82 + 24;
              v78[1] = v86;
              if ( *v86 != v82 + 24 )
                __fastfail(3u);
              *v86 = v78;
              *(_QWORD *)(v82 + 32) = v78;
            }
            _InterlockedAnd((volatile signed __int32 *)v82, 0xFFFFFF7F);
            v41 = (*(_DWORD *)(v72 + 4))-- == 1;
            if ( v41 )
              goto LABEL_178;
            v74 = *(struct _KPRCB **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            k = (_QWORD *)(v72 + 8);
          }
          else
          {
            KiTryUnwaitThread(v74, v78, 256LL, 0LL);
LABEL_153:
            k = (_QWORD *)(v72 + 8);
          }
        }
        if ( !(unsigned __int8)KiTryUnwaitThread(v74, v78, *((unsigned __int16 *)v78 + 9), 0LL) )
          goto LABEL_153;
        v41 = (*(_DWORD *)(v72 + 4))-- == 1;
        if ( v41 )
          goto LABEL_178;
      }
    }
    v87 = *(_QWORD **)(v72 + 8);
    v88 = (_QWORD *)(v72 + 8);
    while ( v87 != v88 )
    {
      v89 = v87;
      v87 = (_QWORD *)*v87;
      v90 = *((_BYTE *)v89 + 16);
      if ( v90 == 1 )
      {
        v91 = *((unsigned __int16 *)v89 + 9);
        goto LABEL_175;
      }
      if ( v90 == 2 )
      {
        *((_BYTE *)v89 + 17) = 5;
        v92 = v89[3];
        *v89 = 0LL;
        __writecr8(2uLL);
        v93 = KeGetCurrentPrcb();
        v41 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
        *v5 = (volatile signed __int32 *)v93;
        v94 = v93->CurrentThread;
        if ( !v41 )
        {
          if ( v94->WaitBlockFill6[68] != 2 || (v95 = 1, v94->NextProcessor != KeGetPcr()->Prcb.Number) )
            v95 = 0;
          EtwTraceEnqueueWork(v94, v89, v95);
        }
        KiAcquireKobjectLockSafe(v92);
        if ( *(_QWORD *)(v92 + 16) == v92 + 8
          || *(_DWORD *)(v92 + 40) >= *(_DWORD *)(v92 + 44)
          || v94->Queue == (_DISPATCHER_HEADER *volatile)v92 && v94->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(*v5, v92, v89) )
        {
          ++*(_DWORD *)(v92 + 4);
          v96 = *(_QWORD **)(v92 + 32);
          *v89 = v92 + 24;
          v89[1] = v96;
          if ( *v96 != v92 + 24 )
            __fastfail(3u);
          *v96 = v89;
          *(_QWORD *)(v92 + 32) = v89;
        }
        _InterlockedAnd((volatile signed __int32 *)v92, 0xFFFFFF7F);
        v74 = *(struct _KPRCB **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v88 = (_QWORD *)(v72 + 8);
      }
      else
      {
        v91 = 256LL;
LABEL_175:
        KiTryUnwaitThread(v74, v89, v91, 0LL);
        v88 = (_QWORD *)(v72 + 8);
      }
    }
    v88[1] = v88;
    *v88 = v88;
LABEL_178:
    _InterlockedAnd((volatile signed __int32 *)v72, 0xFFFFFF7F);
    KiExitDispatcher(
      *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
      0,
      1,
      0,
      *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
LABEL_179:
    if ( qword_140301528 != qword_1403010C8 )
      goto LABEL_236;
    v97 = qword_1402FFE80;
    if ( (*(_BYTE *)qword_1402FFE80 & 0x7F) != 0 )
    {
      v98 = 0;
    }
    else
    {
      if ( *(_DWORD *)(qword_1402FFE80 + 4) == 1 )
        goto LABEL_236;
      v98 = 1;
    }
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = KeGetCurrentIrql();
    __writecr8(2uLL);
    v99 = KeGetCurrentPrcb();
    *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v99;
    KiAcquireKobjectLockSafe(v97);
    v100 = *(_DWORD *)(v97 + 4);
    *(_DWORD *)(v97 + 4) = 1;
    if ( v100 )
      goto LABEL_235;
    if ( !v98 )
    {
      v101 = *(_QWORD **)(v97 + 8);
      for ( m = (_QWORD *)(v97 + 8); ; m = (_QWORD *)(v97 + 8) )
      {
        while ( 1 )
        {
          if ( v101 == m )
            goto LABEL_235;
          v103 = v101;
          v101 = (_QWORD *)*v101;
          v104 = *v103;
          v105 = (_QWORD *)v103[1];
          if ( *(_QWORD **)(*v103 + 8LL) != v103 || (_QWORD *)*v105 != v103 )
            __fastfail(3u);
          *v105 = v104;
          *(_QWORD *)(v104 + 8) = v105;
          v106 = *((_BYTE *)v103 + 16);
          if ( v106 == 1 )
            break;
          if ( v106 == 2 )
          {
            *((_BYTE *)v103 + 17) = 5;
            v107 = v103[3];
            *v103 = 0LL;
            __writecr8(2uLL);
            v108 = KeGetCurrentPrcb();
            v41 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
            *v5 = (volatile signed __int32 *)v108;
            v109 = v108->CurrentThread;
            if ( !v41 )
            {
              if ( v109->WaitBlockFill6[68] != 2 || (v110 = 1, v109->NextProcessor != KeGetPcr()->Prcb.Number) )
                v110 = 0;
              EtwTraceEnqueueWork(v109, v103, v110);
            }
            KiAcquireKobjectLockSafe(v107);
            if ( *(_QWORD *)(v107 + 16) == v107 + 8
              || *(_DWORD *)(v107 + 40) >= *(_DWORD *)(v107 + 44)
              || v109->Queue == (_DISPATCHER_HEADER *volatile)v107 && v109->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(*v5, v107, v103) )
            {
              ++*(_DWORD *)(v107 + 4);
              v111 = *(_QWORD **)(v107 + 32);
              *v103 = v107 + 24;
              v103[1] = v111;
              if ( *v111 != v107 + 24 )
                __fastfail(3u);
              *v111 = v103;
              *(_QWORD *)(v107 + 32) = v103;
            }
            _InterlockedAnd((volatile signed __int32 *)v107, 0xFFFFFF7F);
            v41 = (*(_DWORD *)(v97 + 4))-- == 1;
            if ( v41 )
              goto LABEL_235;
            v99 = *(struct _KPRCB **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            m = (_QWORD *)(v97 + 8);
          }
          else
          {
            KiTryUnwaitThread(v99, v103, 256LL, 0LL);
LABEL_210:
            m = (_QWORD *)(v97 + 8);
          }
        }
        if ( !(unsigned __int8)KiTryUnwaitThread(v99, v103, *((unsigned __int16 *)v103 + 9), 0LL) )
          goto LABEL_210;
        v41 = (*(_DWORD *)(v97 + 4))-- == 1;
        if ( v41 )
          goto LABEL_235;
      }
    }
    v112 = *(_QWORD **)(v97 + 8);
    v113 = (_QWORD *)(v97 + 8);
    while ( 1 )
    {
      if ( v112 == v113 )
      {
        v113[1] = v113;
        *v113 = v113;
LABEL_235:
        _InterlockedAnd((volatile signed __int32 *)v97, 0xFFFFFF7F);
        KiExitDispatcher(
          *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
          0,
          1,
          0,
          *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
LABEL_236:
        v122 = qword_1402FFE70;
        if ( *(_DWORD *)(qword_1402FFE70 + 4) != 1 )
          goto LABEL_243;
LABEL_241:
        v127 = KeGetCurrentIrql();
        __writecr8(2uLL);
        KiAcquireKobjectLockSafe(v122);
        v71 = v127;
        *(_DWORD *)(v122 + 4) = 0;
        _InterlockedAnd((volatile signed __int32 *)v122, 0xFFFFFF7F);
LABEL_242:
        __writecr8(v71);
LABEL_243:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v5 + 5, retaddr);
          goto LABEL_249;
        }
        _m_prefetchw(v5 + 5);
        v128 = *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        if ( v128 )
        {
LABEL_248:
          *(_QWORD *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v128 + 8), 1uLL);
        }
        else if ( (volatile signed __int32 **)_InterlockedCompareExchange64(
                                                *(volatile signed __int64 **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                            + 0x30),
                                                0LL,
                                                ((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 40) != v5 + 5 )
        {
          v128 = KxWaitForLockChainValid(v5 + 5);
          goto LABEL_248;
        }
LABEL_249:
        __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
        return 0LL;
      }
      v114 = v112;
      v112 = (_QWORD *)*v112;
      v115 = *((_BYTE *)v114 + 16);
      if ( v115 == 1 )
        break;
      if ( v115 == 2 )
      {
        *((_BYTE *)v114 + 17) = 5;
        v117 = v114[3];
        *v114 = 0LL;
        __writecr8(2uLL);
        v118 = KeGetCurrentPrcb();
        v41 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
        *v5 = (volatile signed __int32 *)v118;
        v119 = v118->CurrentThread;
        if ( !v41 )
        {
          if ( v119->WaitBlockFill6[68] != 2 || (v120 = 1, v119->NextProcessor != KeGetPcr()->Prcb.Number) )
            v120 = 0;
          EtwTraceEnqueueWork(v119, v114, v120);
        }
        KiAcquireKobjectLockSafe(v117);
        if ( *(_QWORD *)(v117 + 16) == v117 + 8
          || *(_DWORD *)(v117 + 40) >= *(_DWORD *)(v117 + 44)
          || v119->Queue == (_DISPATCHER_HEADER *volatile)v117 && v119->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(*v5, v117, v114) )
        {
          ++*(_DWORD *)(v117 + 4);
          v121 = *(_QWORD **)(v117 + 32);
          *v114 = v117 + 24;
          v114[1] = v121;
          if ( *v121 != v117 + 24 )
            __fastfail(3u);
          *v121 = v114;
          *(_QWORD *)(v117 + 32) = v114;
        }
        _InterlockedAnd((volatile signed __int32 *)v117, 0xFFFFFF7F);
        v99 = *(struct _KPRCB **)(((unsigned __int64)&v129 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v113 = (_QWORD *)(v97 + 8);
      }
      else
      {
        v116 = 256LL;
LABEL_232:
        KiTryUnwaitThread(v99, v114, v116, 0LL);
        v113 = (_QWORD *)(v97 + 8);
      }
    }
    v116 = *((unsigned __int16 *)v114 + 9);
    goto LABEL_232;
  }
  return 0LL;
}
