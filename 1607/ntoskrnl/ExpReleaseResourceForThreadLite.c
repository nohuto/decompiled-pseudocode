/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1400684D0
 * Callers:
 *     SepCanTokenMatchAllPackageSid @ 0x14000DD40 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x14000DE80 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepMandatoryIntegrityCheck @ 0x1400631D0 (SepMandatoryIntegrityCheck.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140067C80 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExReleaseResourceForThreadLite @ 0x1400A6780 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiSelectReadyThread @ 0x14005BD40 (KiSelectReadyThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 *     ExpUnlockResource @ 0x140066870 (ExpUnlockResource.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     KiUpdateThreadState @ 0x14009144C (KiUpdateThreadState.c)
 *     KiWaitSatisfyMutant @ 0x140097970 (KiWaitSatisfyMutant.c)
 *     KiChooseLowestRankedThread @ 0x140098944 (KiChooseLowestRankedThread.c)
 *     KiIncrementConcurrencyCount @ 0x1400A2E90 (KiIncrementConcurrencyCount.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiQueryEffectivePriorityThread @ 0x1400CE00C (KiQueryEffectivePriorityThread.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KiInsertQueueInternal @ 0x1400F7BC4 (KiInsertQueueInternal.c)
 *     ExpOwnerEntryToThread @ 0x14010CA8C (ExpOwnerEntryToThread.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x140228024 (PerfLogExecutiveResourceRelease.c)
 *     EXP_LOCK_RESOURCE @ 0x14022D6D0 (EXP_LOCK_RESOURCE.c)
 *     EXP_UNLOCK_RESOURCE @ 0x14022D744 (EXP_UNLOCK_RESOURCE.c)
 */

void __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // si
  int v6; // r12d
  unsigned int v7; // edi
  __int64 *v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // r15d
  int v13; // eax
  int v14; // r15d
  unsigned int v15; // esi
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // r14
  int v20; // eax
  unsigned int v21; // eax
  ULONG_PTR v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rbx
  unsigned int v27; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // r15
  int v31; // r9d
  __int64 v32; // r10
  __int64 v33; // rcx
  _QWORD *v34; // rax
  char v35; // al
  __int64 v36; // r15
  char v37; // al
  __int64 v38; // r11
  char v39; // dl
  char v40; // al
  int v41; // ecx
  __int64 v42; // rcx
  _QWORD *v43; // r10
  _BYTE *v44; // rcx
  bool v45; // r12
  _KTHREAD *v46; // rbx
  unsigned int v47; // r14d
  unsigned __int8 PriorityDecrement; // al
  unsigned __int64 *Priority; // r8
  char v50; // r14
  char v51; // cl
  char v52; // al
  char EffectivePriorityThread; // r15
  unsigned int PriorityFloorSummary; // eax
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rdx
  unsigned __int64 *v56; // rax
  char v57; // al
  struct _KPRCB *v58; // rcx
  char v59; // cl
  __int64 v60; // rcx
  _QWORD *v61; // r14
  unsigned int v62; // r13d
  struct _KPRCB *v63; // r15
  _QWORD *v64; // rbx
  _QWORD *v65; // rax
  __int64 v66; // rdi
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  char v69; // al
  __int64 v70; // r12
  char v71; // r8
  char v72; // al
  __int64 v73; // r9
  __int16 v74; // dx
  int v75; // eax
  __int64 v76; // rbx
  unsigned int v77; // esi
  struct _KPRCB *v78; // r10
  _QWORD *v79; // rax
  __int64 v80; // rdi
  _QWORD *v81; // rcx
  _QWORD *v82; // rax
  char v83; // al
  __int64 v84; // r14
  char v85; // al
  _BYTE *v86; // rcx
  bool v87; // di
  char v88; // al
  char v89; // r8
  unsigned __int64 v90; // rax
  __int64 v91; // rdx
  void *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  void *v95; // rax
  int v96; // edx
  ULONG_PTR v97; // rdx
  __int64 v98; // r9
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r12
  unsigned __int8 v102; // al
  __int64 v103; // r9
  _QWORD *v104; // r8
  int v105; // edx
  __int64 *v106; // rcx
  _QWORD *v107; // rdi
  __int64 v108; // rax
  char v109; // dl
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r15
  __int64 v113; // rdx
  _QWORD *v114; // rcx
  unsigned __int8 IsThreadRunning; // al
  __int64 v116; // r9
  __int64 v117; // r10
  _QWORD *v118; // rdx
  __int64 v119; // rcx
  char v120; // al
  int v121; // r10d
  _QWORD *v122; // r9
  struct _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v125; // r14
  unsigned __int8 v126; // al
  __int64 v127; // r9
  _QWORD *v128; // rcx
  int v129; // r8d
  __int64 *v130; // rdx
  char v131; // al
  _QWORD *v132; // [rsp+30h] [rbp-49h]
  unsigned int v133; // [rsp+30h] [rbp-49h]
  __int64 v134; // [rsp+30h] [rbp-49h]
  __int64 v135; // [rsp+38h] [rbp-41h]
  __int64 v136; // [rsp+38h] [rbp-41h]
  _KTHREAD *v137; // [rsp+38h] [rbp-41h]
  __int64 v138; // [rsp+40h] [rbp-39h]
  _QWORD *v139; // [rsp+40h] [rbp-39h]
  struct _KPRCB *v140; // [rsp+40h] [rbp-39h]
  unsigned __int8 v141; // [rsp+48h] [rbp-31h]
  unsigned __int8 v142; // [rsp+48h] [rbp-31h]
  _KTHREAD *v143; // [rsp+48h] [rbp-31h]
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp-29h]
  __int64 v145; // [rsp+50h] [rbp-29h]
  _KTHREAD *v146; // [rsp+50h] [rbp-29h]
  int v147; // [rsp+58h] [rbp-21h] BYREF
  int v148; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v149; // [rsp+60h] [rbp-19h] BYREF
  int v150; // [rsp+64h] [rbp-15h] BYREF
  int v151; // [rsp+68h] [rbp-11h] BYREF
  int v152; // [rsp+6Ch] [rbp-Dh] BYREF
  int v153; // [rsp+70h] [rbp-9h] BYREF
  int v154; // [rsp+74h] [rbp-5h] BYREF
  _QWORD *v155; // [rsp+78h] [rbp-1h]
  _BYTE v156[24]; // [rsp+80h] [rbp+7h] BYREF
  int v157; // [rsp+98h] [rbp+1Fh]
  char v158; // [rsp+F0h] [rbp+77h]
  __int64 v159; // [rsp+F0h] [rbp+77h]
  char v160; // [rsp+F0h] [rbp+77h]
  char v161; // [rsp+F0h] [rbp+77h]
  struct _KPRCB *v162; // [rsp+F0h] [rbp+77h]
  __int64 v163; // [rsp+F0h] [rbp+77h]
  struct _KPRCB *v164; // [rsp+F0h] [rbp+77h]
  int v165; // [rsp+F8h] [rbp+7Fh]
  int v166; // [rsp+F8h] [rbp+7Fh]

  CurrentThread = KeGetCurrentThread();
  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v6 = 0;
  v7 = 0;
  EXP_LOCK_RESOURCE(BugCheckParameter1, v156);
  if ( ExpResourceEnforceOwnerTransfer
    && (BugCheckParameter2 & 3) != 3
    && (struct _KTHREAD *)BugCheckParameter2 != CurrentThread )
  {
    KeBugCheckEx(0x16Eu, BugCheckParameter1, (ULONG_PTR)CurrentThread, BugCheckParameter2, 0LL);
  }
  if ( *(char *)(BugCheckParameter1 + 26) < 0 )
  {
    if ( ExpResourceEnforceOwnerTransfer && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
    v17 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
    v18 = v17 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
    *(_DWORD *)(BugCheckParameter1 + 56) = v18;
    if ( (v18 & 0xFFFFFFF8) != 0 )
    {
      EXP_UNLOCK_RESOURCE(v17, v156);
      __incgsdword(0x63ACu);
      if ( v5 )
      {
        v97 = BugCheckParameter1;
        v98 = *(unsigned int *)(BugCheckParameter1 + 68);
        v99 = 65586LL;
        v100 = *(_DWORD *)(BugCheckParameter1 + 56) >> 3;
        goto LABEL_208;
      }
      return;
    }
    if ( (v18 & 1) != 0 )
    {
      v93 = ExpOwnerEntryToThread(BugCheckParameter1 + 48);
      PsBoostThreadIoEx(v93, 1, 0, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 4) != 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 2) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)((*(_QWORD *)(BugCheckParameter1 + 48) & 0xFFFFFFFFFFFFFFFCuLL)
                                                        + 1788));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
      else
      {
        v24 = 0LL;
        if ( (*(_QWORD *)(BugCheckParameter1 + 48) & 3) == 0 )
          v24 = *(_QWORD *)(BugCheckParameter1 + 48);
        _InterlockedDecrement((volatile signed __int32 *)(v24 + 1788));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 2) != 0 )
    {
      v95 = (void *)ExpOwnerEntryToThread(BugCheckParameter1 + 48);
      ObDereferenceObjectDeferDelete(v95);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
    }
    --*(_DWORD *)(BugCheckParameter1 + 64);
    v19 = (_QWORD *)(BugCheckParameter1 + 48);
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    __incgsdword(0x63ACu);
    if ( v5 )
    {
      v15 = *(_DWORD *)(BugCheckParameter1 + 68);
      v7 = 65570;
    }
    else
    {
      v15 = 0;
    }
    v20 = *(_DWORD *)(BugCheckParameter1 + 72);
    if ( !v20 )
    {
      v10 = *(unsigned int *)(BugCheckParameter1 + 76);
      if ( !(_DWORD)v10 )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= 0x79u;
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
        goto LABEL_16;
      }
      v25 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
      *v19 = 1LL;
      *(_DWORD *)(BugCheckParameter1 + 64) = 1;
      *(_DWORD *)(BugCheckParameter1 + 56) = v25 | 8;
      *(_DWORD *)(BugCheckParameter1 + 76) = v10 - 1;
      if ( (_DWORD)v10 == 1 )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v165 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      ExpUnlockResource(v10, (__int64)v156);
      if ( v7 == 65570 )
        PerfLogExecutiveResourceRelease(65570LL, BugCheckParameter1, 0LL, v15);
      v26 = *(_QWORD *)(BugCheckParameter1 + 40);
      CurrentIrql = KeGetCurrentIrql();
      v27 = 2;
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v149 = 0;
      while ( _interlockedbittestandset((volatile signed __int32 *)v26, 7u) )
      {
        do
          KeYieldProcessorEx(&v149);
        while ( (*(_DWORD *)v26 & 0x80u) != 0 );
      }
      v29 = *(_QWORD **)(v26 + 8);
      v30 = (_QWORD *)(v26 + 8);
      v31 = 0;
      *(_DWORD *)(v26 + 4) = 1;
      if ( v29 != (_QWORD *)(v26 + 8) )
      {
        while ( 1 )
        {
          v32 = (__int64)v29;
          v132 = v29;
          v155 = (_QWORD *)*v29;
          v33 = *v29;
          v34 = (_QWORD *)v29[1];
          if ( *(_QWORD *)(v33 + 8) != v32 || *v34 != v32 )
            __fastfail(3u);
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
          v35 = *(_BYTE *)(v32 + 16);
          if ( v35 != 1 )
          {
            if ( v35 == 2 )
            {
              *(_BYTE *)(v32 + 17) = 5;
              v163 = *(_QWORD *)(v32 + 24);
              *(_QWORD *)v32 = 0LL;
              __writecr8(2uLL);
              v140 = KeGetCurrentPrcb();
              v143 = v140->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v140->CurrentThread);
                EtwTraceEnqueueWork(v116, v117, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v163);
              v118 = (_QWORD *)(v163 + 8);
              v119 = v163;
              if ( (_QWORD *)*v118 == v118
                || *(_DWORD *)(v163 + 40) >= *(_DWORD *)(v163 + 44)
                || v143->Queue == (_DISPATCHER_HEADER *volatile)v163 && v143->WaitReason == 15 )
              {
LABEL_266:
                v121 = *(_DWORD *)(v119 + 4);
                *(_DWORD *)(v119 + 4) = v121 + 1;
                v122 = *(_QWORD **)(v119 + 32);
                if ( *v122 != v119 + 24 )
                  __fastfail(3u);
                *v132 = v119 + 24;
                v132[1] = v122;
                *v122 = v132;
                *(_QWORD *)(v119 + 32) = v132;
                if ( !v121 && (_QWORD *)*v118 != v118 )
                {
                  KiWakeOtherQueueWaiters(v140, v119);
                  v119 = v163;
                }
              }
              else
              {
                v120 = KiWakeQueueWaiter(v140, v163, v132);
                v119 = v163;
                if ( !v120 )
                {
                  v118 = (_QWORD *)(v163 + 8);
                  goto LABEL_266;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v119, 0xFFFFFF7F);
              v16 = (*(_DWORD *)(v26 + 4))-- == 1;
              if ( v16 )
              {
                v31 = 0;
                goto LABEL_66;
              }
            }
            else if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v32, 256LL, 0LL) )
            {
              --v6;
            }
            v31 = 0;
            goto LABEL_197;
          }
          v36 = *(_QWORD *)(v32 + 24);
          v135 = *(unsigned __int16 *)(v32 + 18);
          v138 = v36;
          v158 = 0;
          v150 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v150);
            while ( *(_QWORD *)(v36 + 64) );
          }
          v37 = *(_BYTE *)(v36 + 388);
          v30 = (_QWORD *)(v26 + 8);
          v38 = v138;
          if ( v37 != 5 )
            goto LABEL_195;
          v39 = *(_BYTE *)(v138 + 112);
          v40 = 0;
          v158 = 0;
          v41 = v39 & 7;
          if ( v41 == 1 || v41 == 4 )
            break;
          if ( (*(_BYTE *)(v138 + 112) & 7) != 0 )
          {
            if ( v41 == 5 )
            {
              v158 = 0;
              *(_BYTE *)(v138 + 112) = v39 & 0xF8 | 6;
LABEL_195:
              v43 = v132;
LABEL_196:
              v31 = 0;
              goto LABEL_63;
            }
            v43 = v132;
            v31 = 0;
            if ( v41 == 3 )
              *((_BYTE *)v132 + 17) = 2;
LABEL_60:
            if ( !v40 )
              goto LABEL_63;
            goto LABEL_61;
          }
          v43 = v132;
          *(_BYTE *)(v138 + 112) = v39 & 0xF8 | 2;
          v31 = 0;
          *(_QWORD *)(v138 + 200) = v135;
          *((_BYTE *)v132 + 17) = 0;
          v158 = 1;
LABEL_61:
          if ( v19 )
          {
            *v19 = v38;
            v44 = (_BYTE *)v43[4];
            if ( (*v44 & 0x7F) == 2 )
            {
              KiWaitSatisfyMutant(v44, v38, CurrentPrcb);
              goto LABEL_196;
            }
          }
LABEL_63:
          *(_QWORD *)(v38 + 64) = 0LL;
          ++*((_BYTE *)v43 + 17);
          if ( v158 )
          {
            v16 = (*(_DWORD *)(v26 + 4))-- == 1;
            if ( v16 )
            {
              ++v6;
              goto LABEL_66;
            }
          }
LABEL_197:
          v29 = v155;
          if ( v155 == v30 )
            goto LABEL_66;
        }
        v42 = *(_QWORD *)(v138 + 232);
        if ( v42 )
          KiIncrementConcurrencyCount(v42, v138);
        v159 = *(_QWORD *)(v38 + 712);
        if ( v159 )
        {
          v112 = *(_QWORD *)(v38 + 712);
          v151 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v112 + 22672), 0LL) )
          {
            do
              KeYieldProcessorEx(&v151);
            while ( *(_QWORD *)(v112 + 22672) );
          }
          v38 = v138;
          v30 = (_QWORD *)(v26 + 8);
          if ( *(_QWORD *)(v138 + 712) )
          {
            v113 = *(_QWORD *)(v138 + 216);
            v114 = *(_QWORD **)(v138 + 224);
            if ( *(_QWORD *)(v113 + 8) != v138 + 216 || *v114 != v138 + 216 )
              __fastfail(3u);
            *v114 = v113;
            v31 = 0;
            *(_QWORD *)(v113 + 8) = v114;
            *(_QWORD *)(v138 + 712) = 0LL;
          }
          else
          {
            v31 = 0;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v159 + 22672), 0LL);
        }
        else
        {
          v31 = 0;
        }
        v43 = v132;
        *(_BYTE *)(v38 + 388) = 7;
        *(_QWORD *)(v38 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
        CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v38 + 216);
        *(_QWORD *)(v38 + 200) = v135;
        v40 = 1;
        v158 = 1;
        goto LABEL_60;
      }
LABEL_66:
      if ( v19 )
        v45 = v6 > 0;
      else
        v45 = 0;
      _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
      v46 = CurrentPrcb->CurrentThread;
      if ( !v46->PriorityDecrement )
      {
        v50 = v46->Priority + 1;
LABEL_91:
        if ( !v165 )
          goto LABEL_92;
        v59 = v50;
        if ( (char)v165 > v50 )
          v59 = v165;
        if ( !v45 )
        {
LABEL_92:
          v27 = 1;
          v59 = 1;
        }
        KiExitDispatcher((__int64)CurrentPrcb, 0LL, v27, (unsigned int)v59, CurrentIrql);
        return;
      }
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v46->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v47 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v47);
        }
        while ( v46->ThreadLock );
      }
      PriorityDecrement = v46->PriorityDecrement;
      Priority = (unsigned __int64 *)(unsigned __int8)v46->Priority;
      v50 = v46->Priority;
      v51 = PriorityDecrement & 0xF;
      if ( (PriorityDecrement & 0xF) != 0 )
        v50 -= v51;
      v52 = PriorityDecrement >> 4;
      if ( !v52 )
      {
        ++v50;
LABEL_90:
        v46->ThreadLock = 0LL;
        goto LABEL_91;
      }
      v46->PriorityDecrement = v51;
      EffectivePriorityThread = (_BYTE)Priority - v52;
      PriorityFloorSummary = v46->PriorityFloorSummary;
      if ( PriorityFloorSummary )
      {
        _BitScanReverse((unsigned int *)&v96, PriorityFloorSummary);
        if ( EffectivePriorityThread < v96 )
          EffectivePriorityThread = v96;
        v157 = v96;
      }
      if ( EffectivePriorityThread == (_BYTE)Priority )
        goto LABEL_90;
      v160 = 0;
      v152 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v152);
        while ( CurrentPrcb->PrcbLock );
      }
      if ( !CurrentPrcb->NextThread )
      {
        if ( v46->Priority == 31
          || ((SchedulingGroup = v46->SchedulingGroup) == 0LL
           || (v91 = (__int64)SchedulingGroup + CurrentPrcb->ScbOffset) == 0
           || (CurrentPrcb == KeGetCurrentPrcb() || v46 != CurrentPrcb->CurrentThread ? (v31 = 1) : (LOBYTE(v31) = 0),
               !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)v46, v91, (_DWORD)Priority, v31, 0LL))
            ? (v56 = KiSelectReadyThread(v46->Priority + 1, (__int64)CurrentPrcb, Priority))
            : (v56 = (unsigned __int64 *)KiChooseLowestRankedThread(CurrentPrcb, v46, (unsigned int)(v46->Priority + 1))),
              !v56) )
        {
          v57 = 1;
          v160 = 1;
          goto LABEL_84;
        }
        KiUpdateThreadState(CurrentPrcb, v56, 3LL, 1LL);
      }
      v57 = 0;
LABEL_84:
      v58 = KeGetCurrentPrcb();
      if ( EffectivePriorityThread > v46->Priority )
      {
        if ( v46->AbWaitEntryCount )
        {
          p_PropagateBoostsEntry = &v46->PropagateBoostsEntry;
          if ( v46->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
          {
            p_AbPropagateBoostsList = &v58->AbPropagateBoostsList;
            if ( v58 != (struct _KPRCB *)-25784LL )
            {
              p_PropagateBoostsEntry->Next = p_AbPropagateBoostsList->Next;
              p_AbPropagateBoostsList->Next = p_PropagateBoostsEntry;
              _InterlockedIncrement16(&v46->KeReferenceCount);
              KiAbQueueAutoBoostDpc(v58);
              v57 = v160;
            }
          }
        }
      }
      v46->Priority = EffectivePriorityThread;
      if ( v57 )
      {
        if ( (v46->Header.Size & 4) != 0 )
          EffectivePriorityThread = KiQueryEffectivePriorityThread(v46, CurrentPrcb);
        *CurrentPrcb->PriorityState = EffectivePriorityThread;
      }
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      goto LABEL_90;
    }
    *(_DWORD *)(BugCheckParameter1 + 64) = v20;
    *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
    v60 = *(unsigned __int16 *)(BugCheckParameter1 + 26);
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
    if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
    {
      LOWORD(v60) = v60 & 0xF9;
      *(_WORD *)(BugCheckParameter1 + 26) = v60;
    }
    v61 = *(_QWORD **)(BugCheckParameter1 + 32);
    v133 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    ExpUnlockResource(v60, (__int64)v156);
    if ( v7 == 65570 )
      PerfLogExecutiveResourceRelease(65570LL, BugCheckParameter1, 0LL, v15);
    v62 = 1;
    if ( !v61 )
      return;
    v141 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v63 = KeGetCurrentPrcb();
    while ( 1 )
    {
      v64 = v61;
      v147 = 0;
      v61 = (_QWORD *)*v61;
      while ( _interlockedbittestandset((volatile signed __int32 *)v64 + 2, 7u) )
      {
        do
          KeYieldProcessorEx(&v147);
        while ( (*((_DWORD *)v64 + 2) & 0x80u) != 0 );
      }
      *((_DWORD *)v64 + 3) = 1;
      v65 = (_QWORD *)v64[2];
      if ( v65 != v64 + 2 )
        break;
LABEL_115:
      _InterlockedAnd((volatile signed __int32 *)v64 + 2, 0xFFFFFF7F);
      if ( !v61 )
      {
        v72 = KiRemoveBoostThread(v63, v63->CurrentThread);
        if ( v133 && (v62 = 2, v72 > (char)v133) )
          v73 = (unsigned int)v72;
        else
          v73 = v133;
        KiExitDispatcher((__int64)v63, 0LL, v62, v73, v141);
        return;
      }
    }
    while ( 1 )
    {
      v66 = (__int64)v65;
      v139 = (_QWORD *)*v65;
      v67 = (_QWORD *)*v65;
      v68 = (_QWORD *)v65[1];
      if ( v67[1] != v66 || *v68 != v66 )
        __fastfail(3u);
      *v68 = v67;
      v67[1] = v68;
      v69 = *(_BYTE *)(v66 + 16);
      if ( v69 == 1 )
      {
        v70 = *(_QWORD *)(v66 + 24);
        v136 = *(unsigned __int16 *)(v66 + 18);
        v148 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v148);
          while ( *(_QWORD *)(v70 + 64) );
        }
        if ( *(_BYTE *)(v70 + 388) == 5 )
          v71 = KiSignalThread((__int64)v63, v70, v136, v66);
        else
          v71 = 0;
        *(_QWORD *)(v70 + 64) = 0LL;
        ++*(_BYTE *)(v66 + 17);
        if ( v71 )
        {
          v16 = (*((_DWORD *)v64 + 3))-- == 1;
          if ( v16 )
            goto LABEL_115;
        }
      }
      else
      {
        if ( v69 == 2 )
        {
          *(_BYTE *)(v66 + 17) = 5;
          v101 = *(_QWORD *)(v66 + 24);
          *(_QWORD *)v66 = 0LL;
          __writecr8(2uLL);
          v162 = KeGetCurrentPrcb();
          v137 = v162->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v102 = KeIsThreadRunning(v162->CurrentThread);
            EtwTraceEnqueueWork(v103, v66, v102);
          }
          KiAcquireKobjectLockSafe(v101);
          v104 = (_QWORD *)(v101 + 8);
          if ( (_QWORD *)*v104 == v104
            || *(_DWORD *)(v101 + 40) >= *(_DWORD *)(v101 + 44)
            || v137->Queue == (_DISPATCHER_HEADER *volatile)v101 && v137->WaitReason == 15 )
          {
            goto LABEL_220;
          }
          if ( !(unsigned __int8)KiWakeQueueWaiter(v162, v101, v66) )
          {
            v104 = (_QWORD *)(v101 + 8);
LABEL_220:
            v105 = *(_DWORD *)(v101 + 4);
            *(_DWORD *)(v101 + 4) = v105 + 1;
            v106 = *(__int64 **)(v101 + 32);
            if ( *v106 != v101 + 24 )
              __fastfail(3u);
            *(_QWORD *)v66 = v101 + 24;
            *(_QWORD *)(v66 + 8) = v106;
            *v106 = v66;
            *(_QWORD *)(v101 + 32) = v66;
            if ( !v105 && (_QWORD *)*v104 != v104 )
            {
              v107 = *(_QWORD **)(v101 + 16);
              do
              {
                v108 = (__int64)v107;
                v107 = (_QWORD *)v107[1];
                v109 = *(_BYTE *)(v108 + 16);
                if ( v109 == 2 )
                {
                  v110 = *(_QWORD *)v108;
                  if ( *(_QWORD *)(*(_QWORD *)v108 + 8LL) != v108 || *v107 != v108 )
                    __fastfail(3u);
                  *v107 = v110;
                  *(_QWORD *)(v110 + 8) = v107;
                  *(_BYTE *)(v108 + 17) = 5;
                  KiInsertQueueInternal(*(_QWORD *)(v108 + 24), v108);
                }
                else
                {
                  if ( v109 != 1 )
                    break;
                  v111 = *(_QWORD *)v108;
                  if ( *(_QWORD *)(*(_QWORD *)v108 + 8LL) != v108 || *v107 != v108 )
                    __fastfail(3u);
                  *v107 = v111;
                  *(_QWORD *)(v111 + 8) = v107;
                  KiTryUnwaitThread((__int64)v162, v108, *(unsigned __int16 *)(v108 + 18), 0LL);
                }
              }
              while ( v107 != (_QWORD *)(v101 + 8) );
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v101, 0xFFFFFF7F);
          v16 = (*((_DWORD *)v64 + 3))-- == 1;
          if ( v16 )
            goto LABEL_115;
          goto LABEL_236;
        }
        KiTryUnwaitThread((__int64)v63, v66, 256LL, 0LL);
      }
LABEL_236:
      v65 = v139;
      if ( v139 == v64 + 2 )
        goto LABEL_115;
    }
  }
  v8 = (__int64 *)(BugCheckParameter1 + 48);
  if ( *(_QWORD *)(BugCheckParameter1 + 48) == BugCheckParameter2 )
  {
    v9 = BugCheckParameter1 + 48;
  }
  else
  {
    v21 = 1;
    if ( (BugCheckParameter2 & 3) == 0 )
      v21 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
    v22 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( !v22 )
      KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, 0LL, 2uLL);
    v23 = *(unsigned int *)(v22 + 8);
    if ( v21 < (unsigned int)v23 && *(_QWORD *)(v22 + 16LL * v21) == BugCheckParameter2 )
    {
      v9 = v22 + 16LL * v21;
    }
    else
    {
      v9 = v22 + 16;
      v90 = v22 + 16 * v23;
      if ( v22 + 16 >= v90 )
LABEL_313:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v22, 3uLL);
      while ( *(_QWORD *)v9 != BugCheckParameter2 )
      {
        v9 += 16LL;
        if ( v9 >= v90 )
          goto LABEL_313;
      }
    }
  }
  v10 = *(_DWORD *)(v9 + 8) & 7;
  v11 = v10 | (8 * (*(_DWORD *)(v9 + 8) >> 3) - 8);
  *(_DWORD *)(v9 + 8) = v11;
  v12 = v11 >> 3;
  if ( v11 >> 3 )
  {
    EXP_UNLOCK_RESOURCE(v10, v156);
    __incgsdword(0x63B0u);
    if ( v5 )
    {
      v98 = *(unsigned int *)(BugCheckParameter1 + 68);
      v100 = v12;
      v97 = BugCheckParameter1;
      v99 = 65618LL;
      goto LABEL_208;
    }
  }
  else
  {
    if ( (v11 & 1) != 0 )
    {
      v94 = ExpOwnerEntryToThread(v9);
      PsBoostThreadIoEx(v94, 1, 0, 0LL);
      *(_DWORD *)(v9 + 8) &= ~1u;
    }
    v13 = *(_DWORD *)(v9 + 8);
    if ( (v13 & 4) != 0 )
    {
      if ( (v13 & 2) != 0 )
      {
        v10 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1788));
        *(_DWORD *)(v9 + 8) &= ~4u;
      }
      else
      {
        v10 = 0LL;
        if ( (*(_QWORD *)v9 & 3) == 0 )
          v10 = *(_QWORD *)v9;
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1788));
        *(_DWORD *)(v9 + 8) &= ~4u;
      }
    }
    if ( (*(_DWORD *)(v9 + 8) & 2) != 0 )
    {
      v92 = (void *)ExpOwnerEntryToThread(v9);
      ObDereferenceObjectDeferDelete(v92);
      *(_DWORD *)(v9 + 8) &= ~2u;
    }
    v14 = 0;
    *(_QWORD *)v9 = 0LL;
    __incgsdword(0x63B0u);
    if ( v5 )
    {
      v15 = *(_DWORD *)(BugCheckParameter1 + 68);
      v7 = 65602;
    }
    else
    {
      v15 = 0;
    }
    v16 = (*(_DWORD *)(BugCheckParameter1 + 64))-- == 1;
    if ( !v16 )
      goto LABEL_16;
    v10 = *(unsigned int *)(BugCheckParameter1 + 76);
    if ( !(_DWORD)v10 )
    {
      *(_WORD *)(BugCheckParameter1 + 24) = 0;
      *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
LABEL_16:
      EXP_UNLOCK_RESOURCE(v10, v156);
      if ( ((v7 - 65570) & 0xFFFFFFDF) != 0 )
        return;
      v98 = v15;
      v100 = 0LL;
      v97 = BugCheckParameter1;
      v99 = v7;
LABEL_208:
      PerfLogExecutiveResourceRelease(v99, v97, v100, v98);
      return;
    }
    *v8 = 1LL;
    *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
    v74 = *(_WORD *)(BugCheckParameter1 + 26);
    v75 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | 8;
    *(_DWORD *)(BugCheckParameter1 + 64) = 1;
    *(_DWORD *)(BugCheckParameter1 + 56) = v75;
    *(_DWORD *)(BugCheckParameter1 + 76) = v10 - 1;
    if ( (_DWORD)v10 == 1 && !*(_DWORD *)(BugCheckParameter1 + 72) )
      *(_WORD *)(BugCheckParameter1 + 26) = v74 & 0xF9;
    v166 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
    ExpUnlockResource(v10, (__int64)v156);
    if ( v7 == 65602 )
      PerfLogExecutiveResourceRelease(65602LL, BugCheckParameter1, 0LL, v15);
    v76 = *(_QWORD *)(BugCheckParameter1 + 40);
    v142 = KeGetCurrentIrql();
    v77 = 2;
    __writecr8(2uLL);
    v78 = KeGetCurrentPrcb();
    v153 = 0;
    v134 = (__int64)v78;
    if ( _interlockedbittestandset((volatile signed __int32 *)v76, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v153);
        while ( (*(_DWORD *)v76 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v76, 7u) );
      v78 = (struct _KPRCB *)v134;
    }
    v79 = *(_QWORD **)(v76 + 8);
    *(_DWORD *)(v76 + 4) = 1;
    if ( v79 != (_QWORD *)(v76 + 8) )
    {
      do
      {
        v80 = (__int64)v79;
        v155 = (_QWORD *)*v79;
        v81 = (_QWORD *)*v79;
        v82 = (_QWORD *)v79[1];
        if ( v81[1] != v80 || *v82 != v80 )
          __fastfail(3u);
        *v82 = v81;
        v81[1] = v82;
        v83 = *(_BYTE *)(v80 + 16);
        if ( v83 == 1 )
        {
          v84 = *(_QWORD *)(v80 + 24);
          v145 = *(unsigned __int16 *)(v80 + 18);
          v154 = 0;
          v161 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v84 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v154);
            while ( *(_QWORD *)(v84 + 64) );
          }
          if ( *(_BYTE *)(v84 + 388) == 5 )
          {
            v85 = KiSignalThread(v134, v84, v145, v80);
            v78 = (struct _KPRCB *)v134;
            v161 = v85;
            if ( v85 )
            {
              if ( v8 )
              {
                *v8 = v84;
                v86 = *(_BYTE **)(v80 + 32);
                if ( (*v86 & 0x7F) == 2 )
                  KiWaitSatisfyMutant(v86, v84, v134);
              }
            }
          }
          else
          {
            v78 = (struct _KPRCB *)v134;
          }
          *(_QWORD *)(v84 + 64) = 0LL;
          ++*(_BYTE *)(v80 + 17);
          if ( v161 )
          {
            v16 = (*(_DWORD *)(v76 + 4))-- == 1;
            if ( v16 )
            {
              ++v14;
              break;
            }
          }
        }
        else
        {
          if ( v83 == 2 )
          {
            *(_BYTE *)(v80 + 17) = 5;
            v125 = *(_QWORD *)(v80 + 24);
            *(_QWORD *)v80 = 0LL;
            __writecr8(2uLL);
            v164 = KeGetCurrentPrcb();
            v146 = v164->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v126 = KeIsThreadRunning(v164->CurrentThread);
              EtwTraceEnqueueWork(v127, v80, v126);
            }
            KiAcquireKobjectLockSafe(v125);
            v128 = (_QWORD *)(v125 + 8);
            if ( (_QWORD *)*v128 == v128
              || *(_DWORD *)(v125 + 40) >= *(_DWORD *)(v125 + 44)
              || v146->Queue == (_DISPATCHER_HEADER *volatile)v125 && v146->WaitReason == 15 )
            {
LABEL_299:
              v129 = *(_DWORD *)(v125 + 4);
              *(_DWORD *)(v125 + 4) = v129 + 1;
              v130 = *(__int64 **)(v125 + 32);
              if ( *v130 != v125 + 24 )
                __fastfail(3u);
              *(_QWORD *)v80 = v125 + 24;
              *(_QWORD *)(v80 + 8) = v130;
              *v130 = v80;
              *(_QWORD *)(v125 + 32) = v80;
              if ( !v129 && (_QWORD *)*v128 != v128 )
                KiWakeOtherQueueWaiters(v164, v125);
            }
            else if ( !(unsigned __int8)KiWakeQueueWaiter(v164, v125, v80) )
            {
              v128 = (_QWORD *)(v125 + 8);
              goto LABEL_299;
            }
            _InterlockedAnd((volatile signed __int32 *)v125, 0xFFFFFF7F);
            v16 = (*(_DWORD *)(v76 + 4))-- == 1;
            v78 = (struct _KPRCB *)v134;
            if ( v16 )
              break;
            goto LABEL_307;
          }
          v131 = KiTryUnwaitThread((__int64)v78, v80, 256LL, 0LL);
          v78 = (struct _KPRCB *)v134;
          if ( v131 )
            --v14;
        }
LABEL_307:
        v79 = v155;
      }
      while ( v155 != (_QWORD *)(v76 + 8) );
    }
    if ( v8 )
      v87 = v14 > 0;
    else
      v87 = 0;
    _InterlockedAnd((volatile signed __int32 *)v76, 0xFFFFFF7F);
    v88 = KiRemoveBoostThread(v78, v78->CurrentThread);
    if ( !v166 )
      goto LABEL_146;
    v89 = v88;
    if ( (char)v166 > v88 )
      v89 = v166;
    if ( !v87 )
    {
LABEL_146:
      v77 = 1;
      v89 = 1;
    }
    KiExitDispatcher(v134, 0LL, v77, (unsigned int)v89, v142);
  }
}
