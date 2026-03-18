/*
 * XREFs of MiInsertInSystemSpace @ 0x1400F8C80
 * Callers:
 *     MiMapViewInSystemSpace @ 0x14051BF64 (MiMapViewInSystemSpace.c)
 * Callees:
 *     MiManageSubsectionView @ 0x14003DBD0 (MiManageSubsectionView.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiSystemViewCompareVa @ 0x1400FA3C4 (MiSystemViewCompareVa.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiReferenceFileObjectForMap @ 0x140422368 (MiReferenceFileObjectForMap.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 */

__int64 __fastcall MiInsertInSystemSpace(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4, char a5)
{
  signed __int64 *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  bool v9; // zf
  signed __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  int v13; // eax
  __int64 *v14; // rsi
  unsigned int v15; // r12d
  volatile signed __int32 *v16; // r15
  void *v17; // rax
  unsigned __int64 v18; // r13
  PVOID PoolWithTag; // rax
  __int64 v20; // r8
  __int128 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  struct _KTHREAD *v24; // rax
  unsigned __int64 *v25; // r12
  __int64 v26; // r9
  __int64 v27; // rax
  _BOOL8 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r14
  unsigned int v31; // r14d
  signed __int32 i; // edx
  _QWORD *v33; // r14
  _QWORD *v34; // rax
  signed __int64 v35; // r15
  volatile signed __int64 *v36; // r14
  __int64 v37; // rcx
  __int16 v38; // ax
  unsigned __int64 v39; // r14
  unsigned int j; // ebx
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedCommit; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v47; // rdx
  __int64 v48; // r15
  BOOL v49; // esi
  struct _KPRCB *v50; // r10
  unsigned int v51; // ebx
  signed __int8 v52; // cf
  int v53; // eax
  _QWORD *v54; // r12
  __int64 v55; // r14
  __int64 v56; // rcx
  _QWORD *v57; // rax
  char v58; // al
  __int64 v59; // rsi
  struct _KPRCB *v60; // rax
  _KTHREAD *CurrentThread; // r15
  unsigned __int8 v62; // al
  unsigned int v63; // ebx
  __int64 *v64; // rcx
  _QWORD *v65; // r12
  _QWORD *v66; // rcx
  __int64 v67; // r14
  char v68; // al
  __int64 v69; // r8
  __int64 v70; // rsi
  struct _KPRCB *v71; // rax
  _KTHREAD *v72; // r15
  unsigned __int8 v73; // al
  unsigned int v74; // ebx
  __int64 *v75; // rcx
  __int64 v76; // rsi
  unsigned __int8 v77; // r14
  unsigned int v78; // ebx
  __int64 v79; // rsi
  unsigned __int8 v80; // r14
  unsigned int v81; // ebx
  __int64 v82; // r15
  BOOL v83; // esi
  struct _KPRCB *v84; // r10
  unsigned int v85; // ebx
  int v86; // eax
  _QWORD *v87; // r12
  __int64 v88; // r14
  __int64 v89; // rcx
  _QWORD *v90; // rax
  char v91; // al
  __int64 v92; // rsi
  struct _KPRCB *v93; // rax
  _KTHREAD *v94; // r15
  unsigned __int8 v95; // al
  unsigned int v96; // ebx
  __int64 *v97; // rcx
  _QWORD *v98; // r12
  _QWORD *v99; // rcx
  __int64 v100; // r14
  char v101; // al
  __int64 v102; // r8
  __int64 v103; // rsi
  struct _KPRCB *v104; // rax
  _KTHREAD *v105; // r15
  unsigned __int8 v106; // al
  unsigned int v107; // ebx
  __int64 *v108; // rcx
  __int64 v109; // r15
  int v110; // esi
  struct _KPRCB *v111; // r10
  unsigned int v112; // ebx
  int v113; // eax
  _QWORD *v114; // r12
  __int64 v115; // r14
  __int64 v116; // rcx
  _QWORD *v117; // rax
  char v118; // al
  __int64 v119; // rsi
  struct _KPRCB *v120; // rax
  _KTHREAD *v121; // r15
  unsigned __int8 v122; // al
  unsigned int v123; // ebx
  __int64 *v124; // rcx
  _QWORD *v125; // r12
  _QWORD *v126; // rcx
  __int64 v127; // r14
  char v128; // al
  __int64 v129; // r8
  __int64 v130; // rsi
  struct _KPRCB *v131; // rax
  _KTHREAD *v132; // r15
  unsigned __int8 v133; // al
  unsigned int v134; // ebx
  __int64 *v135; // rcx
  unsigned int v136; // ebx
  __int64 v137; // rsi
  unsigned __int8 v138; // r14
  unsigned int v139; // ebx
  __int64 v140; // rsi
  unsigned __int8 v141; // r14
  unsigned int v142; // ebx
  unsigned int v143; // ebx
  __int64 v144; // rax
  __int64 v145; // [rsp+70h] [rbp+0h] BYREF
  void *retaddr; // [rsp+168h] [rbp+F8h]

  v5 = (signed __int64 *)((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL);
  v6 = 16 * a2;
  *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v6;
  v7 = MiSectionControlArea(a3);
  v9 = (*(_DWORD *)(v8 + 56) & 0x8000000) == 0;
  v10 = v7;
  *(_QWORD *)((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) = v7;
  v11 = v7;
  if ( !v9 )
    v11 = v7 | 1;
  if ( (a5 & 1) != 0 )
    v11 |= 2uLL;
  *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = &unk_14034F598;
  v12 = 0LL;
  v13 = *(_DWORD *)(v7 + 56);
  v14 = 0LL;
  *(_DWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  v15 = 0x7FFFF;
  if ( (v13 & 0x20) != 0 )
  {
    if ( (v13 & 0x4000000) != 0 )
    {
      v15 = -1;
      if ( (int)MiCreatePerSessionProtos(v10, 0xFFFFFFFFLL) < 0 )
      {
        v15 = 0x7FFFF;
LABEL_60:
        ++*(_DWORD *)(a1 + 28);
        if ( v14 )
          MiReleasePtes(*(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v14, v6);
        if ( *(_DWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) == 1 )
          MiChargeWsles((__int64)dword_14034FF40, -v6, 0);
        if ( v15 != 0x7FFFF )
          MiDereferencePerSessionProtos(v10, v15);
        if ( !v12 )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
        CachedCommit = CurrentPrcb->CachedCommit;
        if ( (unsigned __int64)(v12 + CachedCommit) <= 0x100 )
        {
          do
          {
            v44 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                    v12 + CachedCommit,
                    CachedCommit);
            if ( v44 == CachedCommit )
              return 0LL;
            CachedCommit = v44;
          }
          while ( (unsigned __int64)(v44 + v12) <= 0x100 );
        }
        v45 = _InterlockedExchangeAdd64(&qword_1403552C8, -v12);
        if ( (v45 < qword_140354FA0 || v45 - v12 >= qword_140354FA0)
          && (v45 - v12 >= qword_140354F98 || v45 < qword_140354F98) )
        {
          return 0LL;
        }
        *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = &qword_140354FA8;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v9 = (BYTE6(PerfGlobalGroupMask) & 0x21) == 0;
        *(_BYTE *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = CurrentIrql;
        if ( v9 )
        {
          v47 = (_QWORD *)_InterlockedExchange64(&qword_140354FA8, (__int64)(v5 + 5));
          if ( v47 )
            KxWaitForLockOwnerShip((__int64)(v5 + 5), v47);
        }
        else
        {
          KiAcquireQueuedSpinLockInstrumented(v5 + 5, &qword_140354FA8);
        }
        if ( qword_1403552C8 < (unsigned __int64)qword_140354F98 )
        {
          v48 = qword_140353E40;
          *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = qword_140353E40;
          if ( *(_DWORD *)(v48 + 4) )
          {
LABEL_155:
            v76 = qword_140353E48;
            if ( *(_DWORD *)(qword_140353E48 + 4) != 1 )
              goto LABEL_362;
            v77 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v78 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v76, 7u) )
            {
              do
              {
                if ( (++v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v78);
              }
              while ( (*(_DWORD *)v76 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v76, 7u) );
            }
            *(_DWORD *)(v76 + 4) = 0;
            _InterlockedAnd((volatile signed __int32 *)v76, 0xFFFFFF7F);
            __writecr8(v77);
            v79 = qword_140353E50;
            v80 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v81 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v79, 7u) )
            {
              do
              {
                if ( (++v81 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v81);
              }
              while ( (*(_DWORD *)v79 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v79, 7u) );
            }
            goto LABEL_361;
          }
          v49 = (*(_BYTE *)v48 & 0x7F) == 0;
          *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KeGetCurrentIrql();
          __writecr8(2uLL);
          v50 = KeGetCurrentPrcb();
          v51 = 0;
          v52 = _interlockedbittestandset((volatile signed __int32 *)v48, 7u);
          *v5 = (signed __int64)v50;
          if ( v52 )
          {
            do
            {
              if ( (++v51 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v51);
            }
            while ( (*(_DWORD *)v48 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v48, 7u) );
            v50 = (struct _KPRCB *)*v5;
          }
          v53 = *(_DWORD *)(v48 + 4);
          *(_DWORD *)(v48 + 4) = 1;
          if ( !v53 )
          {
            if ( !v49 )
            {
              v54 = *(_QWORD **)(v48 + 8);
              if ( v54 != (_QWORD *)(v48 + 8) )
              {
                while ( 1 )
                {
                  v55 = (__int64)v54;
                  v54 = (_QWORD *)*v54;
                  v56 = *(_QWORD *)v55;
                  v57 = *(_QWORD **)(v55 + 8);
                  if ( *(_QWORD *)(*(_QWORD *)v55 + 8LL) != v55 || *v57 != v55 )
                    __fastfail(3u);
                  *v57 = v56;
                  *(_QWORD *)(v56 + 8) = v57;
                  v58 = *(_BYTE *)(v55 + 16);
                  if ( v58 == 1 )
                  {
                    if ( (unsigned __int8)KiTryUnwaitThread((__int64)v50, v55, *(unsigned __int16 *)(v55 + 18), 0LL) )
                    {
                      v9 = (*(_DWORD *)(v48 + 4))-- == 1;
                      if ( v9 )
                        goto LABEL_154;
                    }
                  }
                  else if ( v58 == 2 )
                  {
                    *(_BYTE *)(v55 + 17) = 5;
                    v59 = *(_QWORD *)(v55 + 24);
                    *(_QWORD *)v55 = 0LL;
                    __writecr8(2uLL);
                    v60 = KeGetCurrentPrcb();
                    v9 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
                    *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v60;
                    CurrentThread = v60->CurrentThread;
                    if ( !v9 )
                    {
                      if ( CurrentThread->WaitBlockFill6[68] != 2
                        || (v62 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
                      {
                        v62 = 0;
                      }
                      EtwTraceEnqueueWork(CurrentThread, v55, v62);
                    }
                    v63 = 0;
                    if ( _interlockedbittestandset((volatile signed __int32 *)v59, 7u) )
                    {
                      do
                      {
                        if ( (++v63 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v63);
                      }
                      while ( (*(_DWORD *)v59 & 0x80u) != 0
                           || _interlockedbittestandset((volatile signed __int32 *)v59, 7u) );
                    }
                    if ( *(_QWORD *)(v59 + 16) == v59 + 8
                      || *(_DWORD *)(v59 + 40) >= *(_DWORD *)(v59 + 44)
                      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v59 && CurrentThread->WaitReason == 15
                      || !KiWakeQueueWaiter(
                            *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                            v59,
                            v55) )
                    {
                      ++*(_DWORD *)(v59 + 4);
                      v64 = *(__int64 **)(v59 + 32);
                      *(_QWORD *)v55 = v59 + 24;
                      *(_QWORD *)(v55 + 8) = v64;
                      if ( *v64 != v59 + 24 )
                        __fastfail(3u);
                      *v64 = v55;
                      *(_QWORD *)(v59 + 32) = v55;
                    }
                    _InterlockedAnd((volatile signed __int32 *)v59, 0xFFFFFF7F);
                    v48 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                    v9 = (*(_DWORD *)(v48 + 4))-- == 1;
                    if ( v9 )
                      goto LABEL_154;
                  }
                  else
                  {
                    KiTryUnwaitThread((__int64)v50, v55, 256LL, 0LL);
                  }
                  if ( v54 == (_QWORD *)(v48 + 8) )
                    goto LABEL_154;
                  v50 = (struct _KPRCB *)*v5;
                }
              }
              goto LABEL_154;
            }
            v65 = *(_QWORD **)(v48 + 8);
            v66 = (_QWORD *)(v48 + 8);
            if ( v65 != (_QWORD *)(v48 + 8) )
            {
              while ( 1 )
              {
                v67 = (__int64)v65;
                v65 = (_QWORD *)*v65;
                v68 = *(_BYTE *)(v67 + 16);
                if ( v68 == 1 )
                  break;
                if ( v68 != 2 )
                {
                  v69 = 256LL;
                  goto LABEL_149;
                }
                *(_BYTE *)(v67 + 17) = 5;
                v70 = *(_QWORD *)(v67 + 24);
                *(_QWORD *)v67 = 0LL;
                __writecr8(2uLL);
                v71 = KeGetCurrentPrcb();
                v9 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
                *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v71;
                v72 = v71->CurrentThread;
                if ( !v9 )
                {
                  if ( v72->WaitBlockFill6[68] != 2 || (v73 = 1, v72->NextProcessor != KeGetPcr()->Prcb.Number) )
                    v73 = 0;
                  EtwTraceEnqueueWork(v72, v67, v73);
                }
                v74 = 0;
                if ( _interlockedbittestandset((volatile signed __int32 *)v70, 7u) )
                {
                  do
                  {
                    if ( (++v74 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v74);
                  }
                  while ( (*(_DWORD *)v70 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v70, 7u) );
                }
                if ( *(_QWORD *)(v70 + 16) == v70 + 8
                  || *(_DWORD *)(v70 + 40) >= *(_DWORD *)(v70 + 44)
                  || v72->Queue == (_DISPATCHER_HEADER *volatile)v70 && v72->WaitReason == 15
                  || !KiWakeQueueWaiter(*(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v70, v67) )
                {
                  ++*(_DWORD *)(v70 + 4);
                  v75 = *(__int64 **)(v70 + 32);
                  *(_QWORD *)v67 = v70 + 24;
                  *(_QWORD *)(v67 + 8) = v75;
                  if ( *v75 != v70 + 24 )
                    __fastfail(3u);
                  *v75 = v67;
                  *(_QWORD *)(v70 + 32) = v67;
                }
                _InterlockedAnd((volatile signed __int32 *)v70, 0xFFFFFF7F);
                v48 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_150:
                v66 = (_QWORD *)(v48 + 8);
                if ( v65 == (_QWORD *)(v48 + 8) )
                  goto LABEL_153;
                v50 = (struct _KPRCB *)*v5;
              }
              v69 = *(unsigned __int16 *)(v67 + 18);
LABEL_149:
              KiTryUnwaitThread((__int64)v50, v67, v69, 0LL);
              goto LABEL_150;
            }
LABEL_153:
            v66[1] = v66;
            *v66 = v66;
          }
LABEL_154:
          _InterlockedAnd((volatile signed __int32 *)v48, 0xFFFFFF7F);
          KiExitDispatcher(*v5, 0, 1u, 0, *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
          goto LABEL_155;
        }
        if ( qword_1403552C8 < (unsigned __int64)qword_140354FA0 )
        {
          v137 = qword_140353E48;
          if ( *(_DWORD *)(qword_140353E48 + 4) == 1 )
          {
            v138 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v139 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v137, 7u) )
            {
              do
              {
                if ( (++v139 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v139);
              }
              while ( (*(_DWORD *)v137 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v137, 7u) );
            }
            *(_DWORD *)(v137 + 4) = 0;
            _InterlockedAnd((volatile signed __int32 *)v137, 0xFFFFFF7F);
            __writecr8(v138);
            v140 = qword_140353E50;
            v141 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v142 = 0;
            if ( _interlockedbittestandset((volatile signed __int32 *)v140, 7u) )
            {
              do
              {
                if ( (++v142 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v142);
              }
              while ( (*(_DWORD *)v140 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v140, 7u) );
            }
            *(_DWORD *)(v140 + 4) = 0;
            _InterlockedAnd((volatile signed __int32 *)v140, 0xFFFFFF7F);
            __writecr8(v141);
          }
          v79 = qword_140353E40;
          if ( *(_DWORD *)(qword_140353E40 + 4) != 1 )
          {
LABEL_362:
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented(v5 + 5, retaddr);
LABEL_368:
              __writecr8(*(unsigned __int8 *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
              return 0LL;
            }
            _m_prefetchw(v5 + 5);
            v144 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
            if ( !v144 )
            {
              if ( (signed __int64 *)_InterlockedCompareExchange64(
                                       *(volatile signed __int64 **)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                   + 0x30),
                                       0LL,
                                       ((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 40) == v5 + 5 )
                goto LABEL_368;
              v144 = KxWaitForLockChainValid(v5 + 5);
            }
            *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(v144 + 8), 1uLL);
            goto LABEL_368;
          }
          v80 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v143 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v79, 7u) )
          {
            do
            {
              if ( (++v143 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v143);
            }
            while ( (*(_DWORD *)v79 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v79, 7u) );
          }
LABEL_361:
          *(_DWORD *)(v79 + 4) = 0;
          _InterlockedAnd((volatile signed __int32 *)v79, 0xFFFFFF7F);
          __writecr8(v80);
          goto LABEL_362;
        }
        v82 = qword_140353E48;
        *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = qword_140353E48;
        if ( *(_DWORD *)(v82 + 4) )
        {
LABEL_248:
          if ( qword_140355368 == qword_140354F88 )
          {
            v109 = qword_140353E50;
            *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = qword_140353E50;
            if ( (*(_BYTE *)v109 & 0x7F) != 0 )
            {
              v110 = 0;
LABEL_253:
              *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KeGetCurrentIrql();
              __writecr8(2uLL);
              v111 = KeGetCurrentPrcb();
              v112 = 0;
              v52 = _interlockedbittestandset((volatile signed __int32 *)v109, 7u);
              *v5 = (signed __int64)v111;
              if ( v52 )
              {
                do
                {
                  if ( (++v112 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v112);
                }
                while ( (*(_DWORD *)v109 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v109, 7u) );
                v111 = (struct _KPRCB *)*v5;
              }
              v113 = *(_DWORD *)(v109 + 4);
              *(_DWORD *)(v109 + 4) = 1;
              if ( !v113 )
              {
                if ( !v110 )
                {
                  v114 = *(_QWORD **)(v109 + 8);
                  if ( v114 != (_QWORD *)(v109 + 8) )
                  {
                    while ( 1 )
                    {
                      v115 = (__int64)v114;
                      v114 = (_QWORD *)*v114;
                      v116 = *(_QWORD *)v115;
                      v117 = *(_QWORD **)(v115 + 8);
                      if ( *(_QWORD *)(*(_QWORD *)v115 + 8LL) != v115 || *v117 != v115 )
                        __fastfail(3u);
                      *v117 = v116;
                      *(_QWORD *)(v116 + 8) = v117;
                      v118 = *(_BYTE *)(v115 + 16);
                      if ( v118 == 1 )
                      {
                        if ( (unsigned __int8)KiTryUnwaitThread(
                                                (__int64)v111,
                                                v115,
                                                *(unsigned __int16 *)(v115 + 18),
                                                0LL) )
                        {
                          v9 = (*(_DWORD *)(v109 + 4))-- == 1;
                          if ( v9 )
                            goto LABEL_327;
                        }
                      }
                      else if ( v118 == 2 )
                      {
                        *(_BYTE *)(v115 + 17) = 5;
                        v119 = *(_QWORD *)(v115 + 24);
                        *(_QWORD *)v115 = 0LL;
                        __writecr8(2uLL);
                        v120 = KeGetCurrentPrcb();
                        v9 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
                        *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v120;
                        v121 = v120->CurrentThread;
                        if ( !v9 )
                        {
                          if ( v121->WaitBlockFill6[68] != 2
                            || (v122 = 1, v121->NextProcessor != KeGetPcr()->Prcb.Number) )
                          {
                            v122 = 0;
                          }
                          EtwTraceEnqueueWork(v121, v115, v122);
                        }
                        v123 = 0;
                        if ( _interlockedbittestandset((volatile signed __int32 *)v119, 7u) )
                        {
                          do
                          {
                            if ( (++v123 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                              _mm_pause();
                            else
                              HvlNotifyLongSpinWait(v123);
                          }
                          while ( (*(_DWORD *)v119 & 0x80u) != 0
                               || _interlockedbittestandset((volatile signed __int32 *)v119, 7u) );
                        }
                        if ( *(_QWORD *)(v119 + 16) == v119 + 8
                          || *(_DWORD *)(v119 + 40) >= *(_DWORD *)(v119 + 44)
                          || v121->Queue == (_DISPATCHER_HEADER *volatile)v119 && v121->WaitReason == 15
                          || !KiWakeQueueWaiter(
                                *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                                v119,
                                v115) )
                        {
                          ++*(_DWORD *)(v119 + 4);
                          v124 = *(__int64 **)(v119 + 32);
                          *(_QWORD *)v115 = v119 + 24;
                          *(_QWORD *)(v115 + 8) = v124;
                          if ( *v124 != v119 + 24 )
                            __fastfail(3u);
                          *v124 = v115;
                          *(_QWORD *)(v119 + 32) = v115;
                        }
                        _InterlockedAnd((volatile signed __int32 *)v119, 0xFFFFFF7F);
                        v109 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                        v9 = (*(_DWORD *)(v109 + 4))-- == 1;
                        if ( v9 )
                          goto LABEL_327;
                      }
                      else
                      {
                        KiTryUnwaitThread((__int64)v111, v115, 256LL, 0LL);
                      }
                      if ( v114 == (_QWORD *)(v109 + 8) )
                        goto LABEL_327;
                      v111 = (struct _KPRCB *)*v5;
                    }
                  }
                  goto LABEL_327;
                }
                v125 = *(_QWORD **)(v109 + 8);
                v126 = (_QWORD *)(v109 + 8);
                if ( v125 != (_QWORD *)(v109 + 8) )
                {
                  while ( 1 )
                  {
                    v127 = (__int64)v125;
                    v125 = (_QWORD *)*v125;
                    v128 = *(_BYTE *)(v127 + 16);
                    if ( v128 == 1 )
                      break;
                    if ( v128 != 2 )
                    {
                      v129 = 256LL;
                      goto LABEL_322;
                    }
                    *(_BYTE *)(v127 + 17) = 5;
                    v130 = *(_QWORD *)(v127 + 24);
                    *(_QWORD *)v127 = 0LL;
                    __writecr8(2uLL);
                    v131 = KeGetCurrentPrcb();
                    v9 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
                    *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v131;
                    v132 = v131->CurrentThread;
                    if ( !v9 )
                    {
                      if ( v132->WaitBlockFill6[68] != 2 || (v133 = 1, v132->NextProcessor != KeGetPcr()->Prcb.Number) )
                        v133 = 0;
                      EtwTraceEnqueueWork(v132, v127, v133);
                    }
                    v134 = 0;
                    if ( _interlockedbittestandset((volatile signed __int32 *)v130, 7u) )
                    {
                      do
                      {
                        if ( (++v134 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                          _mm_pause();
                        else
                          HvlNotifyLongSpinWait(v134);
                      }
                      while ( (*(_DWORD *)v130 & 0x80u) != 0
                           || _interlockedbittestandset((volatile signed __int32 *)v130, 7u) );
                    }
                    if ( *(_QWORD *)(v130 + 16) == v130 + 8
                      || *(_DWORD *)(v130 + 40) >= *(_DWORD *)(v130 + 44)
                      || v132->Queue == (_DISPATCHER_HEADER *volatile)v130 && v132->WaitReason == 15
                      || !KiWakeQueueWaiter(
                            *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                            v130,
                            v127) )
                    {
                      ++*(_DWORD *)(v130 + 4);
                      v135 = *(__int64 **)(v130 + 32);
                      *(_QWORD *)v127 = v130 + 24;
                      *(_QWORD *)(v127 + 8) = v135;
                      if ( *v135 != v130 + 24 )
                        __fastfail(3u);
                      *v135 = v127;
                      *(_QWORD *)(v130 + 32) = v127;
                    }
                    _InterlockedAnd((volatile signed __int32 *)v130, 0xFFFFFF7F);
                    v109 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_323:
                    v126 = (_QWORD *)(v109 + 8);
                    if ( v125 == (_QWORD *)(v109 + 8) )
                      goto LABEL_326;
                    v111 = (struct _KPRCB *)*v5;
                  }
                  v129 = *(unsigned __int16 *)(v127 + 18);
LABEL_322:
                  KiTryUnwaitThread((__int64)v111, v127, v129, 0LL);
                  goto LABEL_323;
                }
LABEL_326:
                v126[1] = v126;
                *v126 = v126;
              }
LABEL_327:
              _InterlockedAnd((volatile signed __int32 *)v109, 0xFFFFFF7F);
              KiExitDispatcher(*v5, 0, 1u, 0, *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
              goto LABEL_328;
            }
            if ( *(_DWORD *)(v109 + 4) != 1 )
            {
              v110 = 1;
              goto LABEL_253;
            }
          }
LABEL_328:
          v79 = qword_140353E40;
          if ( *(_DWORD *)(qword_140353E40 + 4) != 1 )
            goto LABEL_362;
          v80 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v136 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v79, 7u) )
          {
            do
            {
              if ( (++v136 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v136);
            }
            while ( (*(_DWORD *)v79 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v79, 7u) );
          }
          goto LABEL_361;
        }
        v83 = (*(_BYTE *)v82 & 0x7F) == 0;
        *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = KeGetCurrentIrql();
        __writecr8(2uLL);
        v84 = KeGetCurrentPrcb();
        v85 = 0;
        v52 = _interlockedbittestandset((volatile signed __int32 *)v82, 7u);
        *v5 = (signed __int64)v84;
        if ( v52 )
        {
          do
          {
            if ( (++v85 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v85);
          }
          while ( (*(_DWORD *)v82 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v82, 7u) );
          v84 = (struct _KPRCB *)*v5;
        }
        v86 = *(_DWORD *)(v82 + 4);
        *(_DWORD *)(v82 + 4) = 1;
        if ( !v86 )
        {
          if ( !v83 )
          {
            v87 = *(_QWORD **)(v82 + 8);
            if ( v87 != (_QWORD *)(v82 + 8) )
            {
              while ( 1 )
              {
                v88 = (__int64)v87;
                v87 = (_QWORD *)*v87;
                v89 = *(_QWORD *)v88;
                v90 = *(_QWORD **)(v88 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v88 + 8LL) != v88 || *v90 != v88 )
                  __fastfail(3u);
                *v90 = v89;
                *(_QWORD *)(v89 + 8) = v90;
                v91 = *(_BYTE *)(v88 + 16);
                if ( v91 == 1 )
                {
                  if ( (unsigned __int8)KiTryUnwaitThread((__int64)v84, v88, *(unsigned __int16 *)(v88 + 18), 0LL) )
                  {
                    v9 = (*(_DWORD *)(v82 + 4))-- == 1;
                    if ( v9 )
                      goto LABEL_247;
                  }
                }
                else if ( v91 == 2 )
                {
                  *(_BYTE *)(v88 + 17) = 5;
                  v92 = *(_QWORD *)(v88 + 24);
                  *(_QWORD *)v88 = 0LL;
                  __writecr8(2uLL);
                  v93 = KeGetCurrentPrcb();
                  v9 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
                  *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v93;
                  v94 = v93->CurrentThread;
                  if ( !v9 )
                  {
                    if ( v94->WaitBlockFill6[68] != 2 || (v95 = 1, v94->NextProcessor != KeGetPcr()->Prcb.Number) )
                      v95 = 0;
                    EtwTraceEnqueueWork(v94, v88, v95);
                  }
                  v96 = 0;
                  if ( _interlockedbittestandset((volatile signed __int32 *)v92, 7u) )
                  {
                    do
                    {
                      if ( (++v96 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                        _mm_pause();
                      else
                        HvlNotifyLongSpinWait(v96);
                    }
                    while ( (*(_DWORD *)v92 & 0x80u) != 0
                         || _interlockedbittestandset((volatile signed __int32 *)v92, 7u) );
                  }
                  if ( *(_QWORD *)(v92 + 16) == v92 + 8
                    || *(_DWORD *)(v92 + 40) >= *(_DWORD *)(v92 + 44)
                    || v94->Queue == (_DISPATCHER_HEADER *volatile)v92 && v94->WaitReason == 15
                    || !KiWakeQueueWaiter(*(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v92, v88) )
                  {
                    ++*(_DWORD *)(v92 + 4);
                    v97 = *(__int64 **)(v92 + 32);
                    *(_QWORD *)v88 = v92 + 24;
                    *(_QWORD *)(v88 + 8) = v97;
                    if ( *v97 != v92 + 24 )
                      __fastfail(3u);
                    *v97 = v88;
                    *(_QWORD *)(v92 + 32) = v88;
                  }
                  _InterlockedAnd((volatile signed __int32 *)v92, 0xFFFFFF7F);
                  v82 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
                  v9 = (*(_DWORD *)(v82 + 4))-- == 1;
                  if ( v9 )
                    goto LABEL_247;
                }
                else
                {
                  KiTryUnwaitThread((__int64)v84, v88, 256LL, 0LL);
                }
                if ( v87 == (_QWORD *)(v82 + 8) )
                  goto LABEL_247;
                v84 = (struct _KPRCB *)*v5;
              }
            }
            goto LABEL_247;
          }
          v98 = *(_QWORD **)(v82 + 8);
          v99 = (_QWORD *)(v82 + 8);
          if ( v98 != (_QWORD *)(v82 + 8) )
          {
            while ( 1 )
            {
              v100 = (__int64)v98;
              v98 = (_QWORD *)*v98;
              v101 = *(_BYTE *)(v100 + 16);
              if ( v101 == 1 )
                break;
              if ( v101 != 2 )
              {
                v102 = 256LL;
                goto LABEL_242;
              }
              *(_BYTE *)(v100 + 17) = 5;
              v103 = *(_QWORD *)(v100 + 24);
              *(_QWORD *)v100 = 0LL;
              __writecr8(2uLL);
              v104 = KeGetCurrentPrcb();
              v9 = (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0;
              *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v104;
              v105 = v104->CurrentThread;
              if ( !v9 )
              {
                if ( v105->WaitBlockFill6[68] != 2 || (v106 = 1, v105->NextProcessor != KeGetPcr()->Prcb.Number) )
                  v106 = 0;
                EtwTraceEnqueueWork(v105, v100, v106);
              }
              v107 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v103, 7u) )
              {
                do
                {
                  if ( (++v107 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v107);
                }
                while ( (*(_DWORD *)v103 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v103, 7u) );
              }
              if ( *(_QWORD *)(v103 + 16) == v103 + 8
                || *(_DWORD *)(v103 + 40) >= *(_DWORD *)(v103 + 44)
                || v105->Queue == (_DISPATCHER_HEADER *volatile)v103 && v105->WaitReason == 15
                || !KiWakeQueueWaiter(*(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v103, v100) )
              {
                ++*(_DWORD *)(v103 + 4);
                v108 = *(__int64 **)(v103 + 32);
                *(_QWORD *)v100 = v103 + 24;
                *(_QWORD *)(v100 + 8) = v108;
                if ( *v108 != v103 + 24 )
                  __fastfail(3u);
                *v108 = v100;
                *(_QWORD *)(v103 + 32) = v100;
              }
              _InterlockedAnd((volatile signed __int32 *)v103, 0xFFFFFF7F);
              v82 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
LABEL_243:
              v99 = (_QWORD *)(v82 + 8);
              if ( v98 == (_QWORD *)(v82 + 8) )
                goto LABEL_246;
              v84 = (struct _KPRCB *)*v5;
            }
            v102 = *(unsigned __int16 *)(v100 + 18);
LABEL_242:
            KiTryUnwaitThread((__int64)v84, v100, v102, 0LL);
            goto LABEL_243;
          }
LABEL_246:
          v99[1] = v99;
          *v99 = v99;
        }
LABEL_247:
        _InterlockedAnd((volatile signed __int32 *)v82, 0xFFFFFF7F);
        KiExitDispatcher(*v5, 0, 1u, 0, *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
        goto LABEL_248;
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 48LL);
    if ( v12 && !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, *(_QWORD *)(*(_QWORD *)v10 + 48LL), 0) )
    {
      v12 = 0LL;
      goto LABEL_60;
    }
  }
  if ( (_UNKNOWN *)a1 == &unk_14034EA70 )
  {
    v16 = dword_14034FF40;
    if ( !(unsigned int)MiChargeWsles((__int64)dword_14034FF40, v6, 0) )
    {
LABEL_59:
      v10 = *v5;
      goto LABEL_60;
    }
    *(_DWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 1;
    v17 = &unk_14034F598;
    v18 = 0LL;
  }
  else
  {
    v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v17 = (void *)(v18 + 7824);
    *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v18 + 7824;
    v16 = (volatile signed __int32 *)(v18 + 2968);
  }
  v14 = MiReservePtes((__int64)v17, *(_DWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18), v8);
  if ( !v14
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x60uLL, 0x7756694Du),
        (*(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = PoolWithTag) == 0LL) )
  {
    v6 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    goto LABEL_59;
  }
  memset(PoolWithTag, 0, 0x60uLL);
  v20 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(v20 + 32) = (unsigned __int64)a2 << 16;
  *(_QWORD *)(v20 + 48) = v11;
  v21 = *a4;
  *(_QWORD *)(v20 + 40) = v12;
  *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = (__int64)((_QWORD)v14 << 25) >> 16;
  *(_QWORD *)(v20 + 24) = (__int64)((WORD4(v21) & 0xFFF) + (_QWORD)v21) >> 12;
  *(_DWORD *)(v20 + 92) = v15;
  *(_QWORD *)(v20 + 80) = ((__int64)((_QWORD)v14 << 25) >> 16) | 2;
  if ( (_UNKNOWN *)a1 == &unk_14034EA70 )
    *(_DWORD *)(v20 + 88) = -1;
  else
    *(_DWORD *)(v20 + 88) = *(_DWORD *)(v18 + 8);
  v22 = MiReferenceFileObjectForMap(a3);
  v23 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_QWORD *)(v23 + 56) = v22;
  v24 = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24;
  --v24->SpecialApcDisable;
  v25 = *(unsigned __int64 **)(a1 + 8);
  v27 = KeAbPreAcquire((ULONG_PTR)v25, 0LL, 0LL, v26);
  v30 = v27;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v25, 0LL) )
    ExfAcquirePushLockExclusiveEx(v25, v27, (ULONG_PTR)v25, v29);
  if ( v30 )
    *(_BYTE *)(v30 + 26) |= 1u;
  *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16);
  }
  else
  {
    v31 = 0;
    if ( _interlockedbittestandset(v16, 0x1Fu) )
      v31 = ExpWaitForSpinLockExclusiveAndAcquire(v16);
    for ( i = *v16; (*v16 & 0xBFFFFFFF) != 0x80000000; i = *v16 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v16, i | 0x40000000, i);
      if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v31);
    }
  }
  LOBYTE(v28) = 0;
  ++*(_DWORD *)(a1 + 24);
  v33 = *(_QWORD **)(a1 + 16);
  if ( v33 )
  {
    while ( 1 )
    {
      if ( (int)MiSystemViewCompareVa(*(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20), v33, v28) < 0 )
      {
        v34 = (_QWORD *)*v33;
        if ( !*v33 )
        {
          LOBYTE(v28) = 0;
          break;
        }
      }
      else
      {
        v34 = (_QWORD *)v33[1];
        if ( !v34 )
        {
          LOBYTE(v28) = 1;
          break;
        }
      }
      v33 = v34;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 16), (unsigned __int64)v33, v28, v23);
  MiUnlockWorkingSetExclusive((__int64)v16, *(_BYTE *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
  v35 = *v5;
  if ( (*(_DWORD *)(*v5 + 56) & 0x400) == 0 )
  {
    *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v35;
    MiManageSubsectionView(v5 + 8, (_QWORD *)(v23 + 64), 3);
  }
  v36 = *(volatile signed __int64 **)(a1 + 8);
  if ( (_InterlockedExchangeAdd64(v36, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v36);
  KeAbPostRelease((ULONG_PTR)v36);
  v37 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v38 = *(_WORD *)(v37 + 486) + 1;
  *(_WORD *)(v37 + 486) = v38;
  if ( !v38 && *(_QWORD *)(v37 + 152) != v37 + 152 )
    KiCheckForKernelApcDelivery();
  if ( (v11 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(v35 + 92));
  v39 = *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  for ( j = 0; j < v39; ++v14 )
  {
    *v14 = 0LL;
    if ( (unsigned __int64)(v14 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v14, 0LL);
    ++j;
  }
  return *(_QWORD *)(((unsigned __int64)&v145 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
}
