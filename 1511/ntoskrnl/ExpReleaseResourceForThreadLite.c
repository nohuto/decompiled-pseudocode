/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x14003FF80
 * Callers:
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14003F790 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14003F830 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     SepMandatoryIntegrityCheck @ 0x14008C7D0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     ExReleaseResourceForThreadLite @ 0x1400E84D0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiUpdateThreadState @ 0x140014CD8 (KiUpdateThreadState.c)
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     ExpUnlockResource @ 0x14003DC00 (ExpUnlockResource.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiRemoveBoostThread @ 0x14007CF40 (KiRemoveBoostThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KiIncrementConcurrencyCount @ 0x14008E774 (KiIncrementConcurrencyCount.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400CFA00 (KxWaitForLockOwnerShipWithIrql.c)
 *     ExpOwnerEntryToThread @ 0x1400DA08C (ExpOwnerEntryToThread.c)
 *     KiWaitSatisfyMutant @ 0x1400DF104 (KiWaitSatisfyMutant.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x1401C48DC (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1402103EC (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
        ULONG_PTR a4)
{
  bool v5; // r14
  volatile __int64 *v6; // rcx
  unsigned int v8; // r15d
  char v9; // al
  __int64 v10; // rdx
  int v11; // eax
  __int64 result; // rax
  ULONG_PTR v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // rax
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // rcx
  volatile signed __int32 *v23; // r14
  __int64 v24; // r8
  int v25; // ebx
  struct _KPRCB *v26; // rsi
  __int64 v27; // rdx
  volatile signed __int32 *v28; // rdi
  signed __int8 v29; // cf
  volatile signed __int32 *v30; // r12
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rcx
  volatile signed __int32 **v33; // rax
  char v34; // al
  bool v35; // zf
  __int64 v36; // rsi
  struct _KPRCB *v37; // r13
  _KTHREAD *v38; // r14
  unsigned __int8 v39; // al
  volatile signed __int32 **v40; // rcx
  char v41; // al
  int v42; // r9d
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // r12
  __int64 v47; // rdx
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v49; // r9
  _QWORD *v50; // rax
  int v51; // r14d
  _QWORD *v52; // r15
  __int64 v53; // rcx
  _QWORD *v54; // rax
  char v55; // al
  __int64 v56; // rsi
  char v57; // di
  __int64 v58; // rbx
  char v59; // al
  int v60; // ecx
  bool v61; // r15
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 *v64; // rcx
  _BYTE *v65; // rcx
  __int64 v66; // rbx
  struct _KPRCB *v67; // r14
  _KTHREAD *CurrentThread; // rdi
  unsigned __int8 IsThreadRunning; // al
  _QWORD *v70; // rcx
  __int64 v71; // rdi
  unsigned int v72; // ebx
  unsigned __int8 v73; // al
  __int64 v74; // r8
  char v75; // bl
  char v76; // cl
  char v77; // al
  char EffectivePriorityThread; // si
  unsigned int v79; // eax
  int v80; // edx
  char v81; // r14
  _BYTE *ready; // rax
  struct _KPRCB *v83; // rcx
  struct _SINGLE_LIST_ENTRY *v84; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  char v86; // cl
  int v87; // edx
  unsigned __int64 v88; // rdi
  unsigned int v89; // eax
  unsigned int v90; // esi
  unsigned int v91; // eax
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  void *v95; // rax
  __int64 v96; // rcx
  __int16 v97; // dx
  int v98; // eax
  _QWORD *v99; // [rsp+30h] [rbp-29h]
  struct _KPRCB *v100; // [rsp+30h] [rbp-29h]
  int v101; // [rsp+38h] [rbp-21h] BYREF
  int v102; // [rsp+3Ch] [rbp-1Dh] BYREF
  int v103; // [rsp+40h] [rbp-19h] BYREF
  _QWORD *v104; // [rsp+48h] [rbp-11h]
  int v105; // [rsp+50h] [rbp-9h] BYREF
  int v106; // [rsp+54h] [rbp-5h] BYREF
  volatile signed __int32 *CurrentIrql; // [rsp+58h] [rbp-1h]
  _QWORD v108[3]; // [rsp+60h] [rbp+7h] BYREF
  int v109; // [rsp+78h] [rbp+1Fh]
  unsigned __int8 v110; // [rsp+C0h] [rbp+67h] BYREF
  int v111; // [rsp+D0h] [rbp+77h] BYREF
  int v112; // [rsp+D8h] [rbp+7Fh]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v110 = 2;
  v6 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v108[0] = 0LL;
  v108[1] = v6;
  v8 = 0;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v9 = KiFastAcquireQueuedSpinLockInstrumented(v108, v6, &v110);
  }
  else
  {
    v9 = 0;
    v10 = _InterlockedExchange64(v6, (__int64)v108);
    if ( v10 )
    {
      KxWaitForLockOwnerShipWithIrql(v108, v10, &v110);
      v9 = 1;
    }
  }
  if ( v9 )
  {
    _disable();
    __writecr8(v110);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 48) == BugCheckParameter2 )
    {
      v88 = BugCheckParameter1 + 48;
    }
    else
    {
      v91 = 1;
      if ( (BugCheckParameter2 & 3) == 0 )
        v91 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
      a4 = *(_QWORD *)(BugCheckParameter1 + 16);
      if ( !a4 )
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, 0LL, 2uLL);
      v92 = *(unsigned int *)(a4 + 8);
      if ( v91 < (unsigned int)v92 && *(_QWORD *)(a4 + 16LL * v91) == BugCheckParameter2 )
      {
        v88 = a4 + 16LL * v91;
      }
      else
      {
        v88 = a4 + 16;
        v93 = a4 + 16 * v92;
        if ( a4 + 16 >= v93 )
LABEL_212:
          KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, a4, 3uLL);
        while ( *(_QWORD *)v88 != BugCheckParameter2 )
        {
          v88 += 16LL;
          if ( v88 >= v93 )
            goto LABEL_212;
        }
      }
    }
    v89 = *(_DWORD *)(v88 + 8) & 3 | (4 * (*(_DWORD *)(v88 + 8) >> 2) - 4);
    *(_DWORD *)(v88 + 8) = v89;
    v90 = v89 >> 2;
    if ( v89 >> 2 )
    {
      result = KxReleaseQueuedSpinLock(v108);
      _enable();
      __incgsdword(0x6330u);
      if ( !v5 )
        return result;
      v14 = *(unsigned int *)(BugCheckParameter1 + 68);
      v16 = v90;
      v13 = BugCheckParameter1;
      v15 = 65618LL;
      return PerfLogExecutiveResourceRelease(v15, v13, v16, v14);
    }
    if ( (v89 & 1) != 0 )
    {
      v94 = ExpOwnerEntryToThread(v88);
      PsBoostThreadIoEx(v94, 1LL, 0LL, 0LL);
      *(_DWORD *)(v88 + 8) &= ~1u;
    }
    if ( (*(_DWORD *)(v88 + 8) & 2) != 0 )
    {
      v95 = (void *)ExpOwnerEntryToThread(v88);
      ObDereferenceObjectDeferDeleteWithTag(v95, 0x746C6644u);
      *(_DWORD *)(v88 + 8) &= ~2u;
    }
    *(_QWORD *)v88 = 0LL;
    __incgsdword(0x6330u);
    if ( v5 )
    {
      v20 = *(_DWORD *)(BugCheckParameter1 + 68);
      v8 = 65602;
    }
    else
    {
      v20 = 0;
    }
    v35 = (*(_DWORD *)(BugCheckParameter1 + 64))-- == 1;
    if ( v35 )
    {
      v96 = *(unsigned int *)(BugCheckParameter1 + 76);
      if ( (_DWORD)v96 )
      {
        *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
        *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
        v97 = *(_WORD *)(BugCheckParameter1 + 26);
        v98 = *(_DWORD *)(BugCheckParameter1 + 56) & 3 | 4;
        *(_DWORD *)(BugCheckParameter1 + 64) = 1;
        *(_DWORD *)(BugCheckParameter1 + 56) = v98;
        *(_DWORD *)(BugCheckParameter1 + 76) = v96 - 1;
        if ( (_DWORD)v96 == 1 && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) = v97 & 0xFB;
        v111 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        ExpUnlockResource(v96, (__int64)v108, a3, a4);
        if ( v8 == 65602 )
          PerfLogExecutiveResourceRelease(65602LL, BugCheckParameter1, 0LL, v20);
        return KeSetEventBoostPriorityEx(
                 *(_QWORD *)(BugCheckParameter1 + 40),
                 (int)BugCheckParameter1 + 48,
                 (unsigned int)&v111,
                 0,
                 0);
      }
      *(_WORD *)(BugCheckParameter1 + 24) = 0;
      *(_WORD *)(BugCheckParameter1 + 26) &= 0xFBu;
    }
LABEL_209:
    KxReleaseQueuedSpinLock(v108);
    _enable();
    result = v8 - 65570;
    if ( (result & 0xFFFFFFDF) != 0 )
      return result;
    v14 = v20;
    v16 = 0LL;
    v13 = BugCheckParameter1;
    v15 = v8;
    return PerfLogExecutiveResourceRelease(v15, v13, v16, v14);
  }
  v11 = *(_DWORD *)(BugCheckParameter1 + 56) & 3 | (4 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 2) - 4);
  *(_DWORD *)(BugCheckParameter1 + 56) = v11;
  if ( (v11 & 0xFFFFFFFC) != 0 )
  {
    result = KxReleaseQueuedSpinLock(v108);
    _enable();
    __incgsdword(0x632Cu);
    if ( !v5 )
      return result;
    v13 = BugCheckParameter1;
    v14 = *(unsigned int *)(BugCheckParameter1 + 68);
    v15 = 65586LL;
    v16 = *(_DWORD *)(BugCheckParameter1 + 56) >> 2;
    return PerfLogExecutiveResourceRelease(v15, v13, v16, v14);
  }
  if ( (v11 & 1) != 0 )
  {
    v17 = ExpOwnerEntryToThread(BugCheckParameter1 + 48);
    LOBYTE(v18) = 1;
    PsBoostThreadIoEx(v17, v18, 0LL, 0LL);
    *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 2) != 0 )
  {
    v19 = (void *)ExpOwnerEntryToThread(BugCheckParameter1 + 48);
    ObDereferenceObjectDeferDeleteWithTag(v19, 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
  }
  --*(_DWORD *)(BugCheckParameter1 + 64);
  *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
  __incgsdword(0x632Cu);
  v99 = (_QWORD *)(BugCheckParameter1 + 48);
  if ( v5 )
  {
    v20 = *(_DWORD *)(BugCheckParameter1 + 68);
    v8 = 65570;
  }
  else
  {
    v20 = 0;
  }
  v21 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( !v21 )
  {
    v43 = *(unsigned int *)(BugCheckParameter1 + 76);
    if ( (_DWORD)v43 )
    {
      v44 = *(_DWORD *)(BugCheckParameter1 + 56) & 3;
      *(_QWORD *)(BugCheckParameter1 + 48) = 1LL;
      *(_DWORD *)(BugCheckParameter1 + 64) = 1;
      *(_DWORD *)(BugCheckParameter1 + 56) = v44 | 4;
      *(_DWORD *)(BugCheckParameter1 + 76) = v43 - 1;
      if ( (_DWORD)v43 == 1 )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xFBu;
      v111 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      ExpUnlockResource(v43, (__int64)v108, a3, a4);
      if ( v8 == 65570 )
        PerfLogExecutiveResourceRelease(65570LL, BugCheckParameter1, 0LL, v20);
      v46 = *(_QWORD *)(BugCheckParameter1 + 40);
      CurrentIrql = (volatile signed __int32 *)KeGetCurrentIrql();
      v47 = 2LL;
      __writecr8(2uLL);
      CurrentPrcb = KeGetCurrentPrcb();
      v49 = 0LL;
      v105 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v46, 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v105);
          while ( (*(_DWORD *)v46 & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)v46, 7u) );
        v47 = 2LL;
        v49 = 0LL;
      }
      v50 = *(_QWORD **)(v46 + 8);
      *(_DWORD *)(v46 + 4) = 1;
      v51 = 0;
      v112 = 0;
      if ( v50 != (_QWORD *)(v46 + 8) )
      {
        while ( 1 )
        {
          v52 = v50;
          v104 = (_QWORD *)*v50;
          v53 = *v50;
          v54 = (_QWORD *)v50[1];
          if ( *(_QWORD **)(v53 + 8) != v52 || (_QWORD *)*v54 != v52 )
            __fastfail(3u);
          *v54 = v53;
          *(_QWORD *)(v53 + 8) = v54;
          v55 = *((_BYTE *)v52 + 16);
          if ( v55 != 1 )
          {
            if ( v55 == 2 )
            {
              *((_BYTE *)v52 + 17) = 5;
              v66 = v52[3];
              *v52 = v49;
              __writecr8(2uLL);
              v67 = KeGetCurrentPrcb();
              CurrentThread = v67->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v67->CurrentThread);
                EtwTraceEnqueueWork(CurrentThread, v52, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v66, v47, v45);
              if ( *(_QWORD *)(v66 + 16) == v66 + 8
                || *(_DWORD *)(v66 + 40) >= *(_DWORD *)(v66 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v66 && CurrentThread->WaitReason == 15
                || !(unsigned __int8)KiWakeQueueWaiter(v67, v66, v52) )
              {
                ++*(_DWORD *)(v66 + 4);
                v70 = *(_QWORD **)(v66 + 32);
                *v52 = v66 + 24;
                v52[1] = v70;
                if ( *v70 != v66 + 24 )
                  __fastfail(3u);
                *v70 = v52;
                *(_QWORD *)(v66 + 32) = v52;
              }
              _InterlockedAnd((volatile signed __int32 *)v66, 0xFFFFFF7F);
              v35 = (*(_DWORD *)(v46 + 4))-- == 1;
              if ( v35 )
                goto LABEL_88;
              v51 = v112;
            }
            else if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v52, 256LL, 0LL) )
            {
              v112 = --v51;
            }
            v49 = 0LL;
            goto LABEL_125;
          }
          v56 = *((unsigned __int16 *)v52 + 9);
          v57 = 0;
          v58 = v52[3];
          v102 = v49;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v58 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v102);
            while ( *(_QWORD *)(v58 + 64) );
          }
          if ( *(_BYTE *)(v58 + 388) != 5 )
            goto LABEL_84;
          v59 = *(_BYTE *)(v58 + 112);
          v57 = 0;
          v60 = v59 & 7;
          if ( v60 == 1 || v60 == 4 )
            break;
          if ( (*(_BYTE *)(v58 + 112) & 7) != 0 )
          {
            if ( v60 == 5 )
            {
              *(_BYTE *)(v58 + 112) = v59 & 0xF8 | 6;
LABEL_84:
              v49 = 0LL;
              goto LABEL_85;
            }
            v49 = 0LL;
            if ( v60 == 3 )
              *((_BYTE *)v52 + 17) = 2;
            goto LABEL_106;
          }
          v57 = 1;
          *(_BYTE *)(v58 + 112) = v59 & 0xF8 | 2;
          v49 = 0LL;
          *(_QWORD *)(v58 + 200) = v56;
          *((_BYTE *)v52 + 17) = 0;
LABEL_107:
          if ( v99 )
          {
            *v99 = v58;
            v65 = (_BYTE *)v52[4];
            if ( (*v65 & 0x7F) == 2 )
              KiWaitSatisfyMutant(v65, v58, CurrentPrcb, 0LL);
          }
LABEL_85:
          *(_QWORD *)(v58 + 64) = v49;
          ++*((_BYTE *)v52 + 17);
          if ( v57 )
          {
            v35 = (*(_DWORD *)(v46 + 4))-- == 1;
            if ( v35 )
            {
              v112 = v51 + 1;
              goto LABEL_88;
            }
          }
LABEL_125:
          v50 = v104;
          if ( v104 == (_QWORD *)(v46 + 8) )
            goto LABEL_88;
          v47 = 2LL;
        }
        v62 = *(_QWORD *)(v58 + 232);
        if ( v62 )
          KiIncrementConcurrencyCount(v62, v58);
        v63 = *(_QWORD *)(v58 + 712);
        if ( v63 )
        {
          v103 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v63 + 22672), 0LL) )
          {
            do
              KeYieldProcessorEx(&v103);
            while ( *(_QWORD *)(v63 + 22672) );
          }
          if ( *(_QWORD *)(v58 + 712) )
          {
            v47 = *(_QWORD *)(v58 + 216);
            v64 = *(__int64 **)(v58 + 224);
            if ( *(_QWORD *)(v47 + 8) != v58 + 216 || *v64 != v58 + 216 )
              __fastfail(3u);
            *v64 = v47;
            v49 = 0LL;
            *(_QWORD *)(v47 + 8) = v64;
            *(_QWORD *)(v58 + 712) = 0LL;
            _InterlockedAnd64((volatile signed __int64 *)(v63 + 22672), 0LL);
          }
          else
          {
            v49 = 0LL;
            _InterlockedAnd64((volatile signed __int64 *)(v63 + 22672), 0LL);
          }
        }
        else
        {
          v49 = 0LL;
        }
        *(_BYTE *)(v58 + 388) = 7;
        v57 = 1;
        *(_QWORD *)(v58 + 216) = CurrentPrcb->DeferredReadyListHead.Next;
        CurrentPrcb->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v58 + 216);
        *(_QWORD *)(v58 + 200) = v56;
LABEL_106:
        if ( !v57 )
          goto LABEL_85;
        goto LABEL_107;
      }
LABEL_88:
      if ( v99 )
        v61 = v112 > 0;
      else
        v61 = 0;
      _InterlockedAnd((volatile signed __int32 *)v46, 0xFFFFFF7F);
      v71 = (__int64)CurrentPrcb->CurrentThread;
      if ( *(_BYTE *)(v71 + 564) )
      {
        v72 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v71 + 64), 0LL) )
        {
          do
          {
            if ( (++v72 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v72, v47, v45);
          }
          while ( *(_QWORD *)(v71 + 64) );
        }
        v73 = *(_BYTE *)(v71 + 564);
        v74 = *(unsigned __int8 *)(v71 + 195);
        v75 = *(_BYTE *)(v71 + 195);
        v76 = v73 & 0xF;
        if ( (v73 & 0xF) != 0 )
          v75 -= v76;
        v77 = v73 >> 4;
        if ( v77 )
        {
          *(_BYTE *)(v71 + 564) = v76;
          EffectivePriorityThread = v74 - v77;
          v79 = *(_DWORD *)(v71 + 1408);
          if ( v79 )
          {
            _BitScanReverse((unsigned int *)&v80, v79);
            if ( EffectivePriorityThread < v80 )
              EffectivePriorityThread = v80;
            v109 = v80;
          }
          if ( EffectivePriorityThread != (_BYTE)v74 )
          {
            v81 = 0;
            v101 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&v101);
              while ( CurrentPrcb->PrcbLock );
            }
            if ( !CurrentPrcb->NextThread )
            {
              LOBYTE(v74) = 1;
              ready = (_BYTE *)KiSelectReadyThreadEx(CurrentPrcb, v71, v74);
              if ( ready )
                KiUpdateThreadState((__int64)CurrentPrcb, ready, 3, 1);
              else
                v81 = 1;
            }
            if ( KiAbEnabled )
            {
              v83 = KeGetCurrentPrcb();
              if ( EffectivePriorityThread > *(char *)(v71 + 195) )
              {
                if ( *(_BYTE *)(v71 + 793) )
                {
                  v84 = (struct _SINGLE_LIST_ENTRY *)(v71 + 1376);
                  if ( *(_QWORD *)(v71 + 1376) == 1LL )
                  {
                    p_AbPropagateBoostsList = &v83->AbPropagateBoostsList;
                    if ( v83 != (struct _KPRCB *)-25656LL )
                    {
                      v84->Next = p_AbPropagateBoostsList->Next;
                      p_AbPropagateBoostsList->Next = v84;
                      _InterlockedIncrement16((volatile signed __int16 *)(v71 + 1416));
                      KiAbQueueAutoBoostDpc(v83);
                    }
                  }
                }
              }
            }
            *(_BYTE *)(v71 + 195) = EffectivePriorityThread;
            if ( v81 )
            {
              if ( (*(_BYTE *)(v71 + 2) & 4) != 0 )
                EffectivePriorityThread = KiQueryEffectivePriorityThread(v71, (__int64)CurrentPrcb);
              *CurrentPrcb->PriorityState = EffectivePriorityThread;
            }
            _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
            *(_QWORD *)(v71 + 64) = 0LL;
            goto LABEL_170;
          }
        }
        else
        {
          ++v75;
        }
        *(_QWORD *)(v71 + 64) = 0LL;
      }
      else
      {
        v75 = *(_BYTE *)(v71 + 195) + 1;
      }
LABEL_170:
      if ( !v111 )
        goto LABEL_175;
      v86 = v75;
      if ( (char)v111 > v75 )
        v86 = v111;
      if ( v61 )
      {
        v87 = 2;
      }
      else
      {
LABEL_175:
        v87 = 1;
        v86 = 1;
      }
      return KiExitDispatcher((_DWORD)CurrentPrcb, 0, v87, v86, (char)CurrentIrql);
    }
    *(_WORD *)(BugCheckParameter1 + 26) &= 0x7Bu;
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
    goto LABEL_209;
  }
  *(_DWORD *)(BugCheckParameter1 + 64) = v21;
  *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
  v22 = *(unsigned __int16 *)(BugCheckParameter1 + 26);
  *(_DWORD *)(BugCheckParameter1 + 72) = 0;
  if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
  {
    LOWORD(v22) = v22 & 0xFB;
    *(_WORD *)(BugCheckParameter1 + 26) = v22;
  }
  v23 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
  v112 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  v111 = v112;
  *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
  result = ExpUnlockResource(v22, (__int64)v108, a3, a4);
  if ( v8 == 65570 )
    result = PerfLogExecutiveResourceRelease(65570LL, BugCheckParameter1, 0LL, v20);
  v25 = 1;
  if ( v23 )
  {
    v104 = (_QWORD *)KeGetCurrentIrql();
    __writecr8(2uLL);
    v26 = KeGetCurrentPrcb();
    v100 = v26;
    do
    {
      v27 = 0LL;
      v28 = v23;
      v23 = *(volatile signed __int32 **)v23;
      v106 = 0;
      v29 = _interlockedbittestandset(v28 + 2, 7u);
      CurrentIrql = v23;
      if ( v29 )
      {
        do
        {
          do
            KeYieldProcessorEx(&v106);
          while ( (*((_DWORD *)v28 + 2) & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset(v28 + 2, 7u) );
        v27 = 0LL;
      }
      *((_DWORD *)v28 + 3) = 1;
      v30 = (volatile signed __int32 *)*((_QWORD *)v28 + 2);
      if ( v30 != v28 + 4 )
      {
        while ( 1 )
        {
          v31 = v30;
          v30 = *(volatile signed __int32 **)v30;
          v32 = *(_QWORD *)v31;
          v33 = (volatile signed __int32 **)*((_QWORD *)v31 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v31 + 8LL) != v31 || *v33 != v31 )
            __fastfail(3u);
          *v33 = (volatile signed __int32 *)v32;
          *(_QWORD *)(v32 + 8) = v33;
          v34 = *((_BYTE *)v31 + 16);
          if ( v34 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v26, v31, *((unsigned __int16 *)v31 + 9), 0LL) )
            {
              v35 = (*((_DWORD *)v28 + 3))-- == 1;
              if ( v35 )
                goto LABEL_54;
            }
          }
          else if ( v34 == 2 )
          {
            *((_BYTE *)v31 + 17) = 5;
            v36 = *((_QWORD *)v31 + 3);
            *(_QWORD *)v31 = 0LL;
            __writecr8(2uLL);
            v37 = KeGetCurrentPrcb();
            v38 = v37->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v39 = KeIsThreadRunning(v37->CurrentThread);
              EtwTraceEnqueueWork(v38, v31, v39);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v36, v27, v24);
            if ( *(_QWORD *)(v36 + 16) == v36 + 8
              || *(_DWORD *)(v36 + 40) >= *(_DWORD *)(v36 + 44)
              || v38->Queue == (_DISPATCHER_HEADER *volatile)v36 && v38->WaitReason == 15
              || !(unsigned __int8)KiWakeQueueWaiter(v37, v36, v31) )
            {
              ++*(_DWORD *)(v36 + 4);
              v40 = *(volatile signed __int32 ***)(v36 + 32);
              *(_QWORD *)v31 = v36 + 24;
              *((_QWORD *)v31 + 1) = v40;
              if ( *v40 != (volatile signed __int32 *)(v36 + 24) )
                __fastfail(3u);
              *v40 = v31;
              *(_QWORD *)(v36 + 32) = v31;
            }
            _InterlockedAnd((volatile signed __int32 *)v36, 0xFFFFFF7F);
            v35 = (*((_DWORD *)v28 + 3))-- == 1;
            if ( v35 )
            {
LABEL_54:
              v26 = v100;
              v25 = 1;
              v23 = CurrentIrql;
              break;
            }
            v26 = v100;
          }
          else
          {
            KiTryUnwaitThread(v26, v31, 256LL, 0LL);
          }
          v27 = 0LL;
          if ( v30 == v28 + 4 )
            goto LABEL_54;
        }
      }
      _InterlockedAnd(v28 + 2, 0xFFFFFF7F);
    }
    while ( v23 );
    v41 = KiRemoveBoostThread(v26, v26->CurrentThread);
    if ( !v111 || (v42 = v41, v25 = 2, v41 <= (char)v111) )
      v42 = v112;
    return KiExitDispatcher((_DWORD)v26, 0, v25, v42, (char)v104);
  }
  return result;
}
