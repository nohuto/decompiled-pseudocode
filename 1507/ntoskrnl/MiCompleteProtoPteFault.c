/*
 * XREFs of MiCompleteProtoPteFault @ 0x1400BA8F0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtectionEx @ 0x14001A708 (ExAcquireRundownProtectionEx.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAllocateWsle @ 0x1400BE0E0 (MiAllocateWsle.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     MiSystemImageHasPrivateFixups @ 0x140111970 (MiSystemImageHasPrivateFixups.c)
 *     PfSnTraceBufferAllocate @ 0x1401268E0 (PfSnTraceBufferAllocate.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1402259B4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeTransitionPteValid @ 0x140225E1C (MiMakeTransitionPteValid.c)
 *     MiIsStrongCodeImagePage @ 0x1402311FC (MiIsStrongCodeImagePage.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiCompleteProtoPteFault(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  unsigned int v7; // r10d
  char v8; // si
  unsigned __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // r9
  _QWORD *v12; // r15
  unsigned __int16 v13; // ax
  __int16 *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r14
  signed __int64 *v18; // rbx
  signed __int64 v19; // rdx
  signed __int64 v20; // rax
  signed __int64 v21; // r12
  unsigned int v22; // edx
  _QWORD *v23; // r12
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  signed __int64 BugCheckParameter4; // rax
  _DWORD *v27; // rdi
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v29; // ett
  unsigned __int64 v30; // r13
  _KPROCESS *Process; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // r13
  bool v39; // r15
  struct _KTHREAD *CurrentThread; // r12
  _KPROCESS *v41; // rdi
  signed __int64 v42; // rdx
  signed __int64 v43; // rax
  unsigned __int64 v44; // rbx
  unsigned int v45; // edx
  BOOLEAN v46; // r14
  unsigned __int8 v47; // r15
  unsigned __int64 v48; // rax
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  signed __int64 v51; // rax
  signed __int64 v52; // rtt
  unsigned __int64 v53; // rax
  struct _KTHREAD *v54; // rax
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // r13
  int v57; // r15d
  int v58; // edi
  unsigned __int64 *v59; // rcx
  _QWORD *v60; // rcx
  __int64 v61; // r14
  signed __int32 v62; // eax
  char v63; // cc
  signed __int32 v64; // eax
  _QWORD *v65; // r15
  volatile signed __int32 *v66; // rdi
  unsigned __int8 v67; // r12
  _QWORD *v68; // rcx
  signed __int32 v69; // eax
  unsigned __int64 v70; // rtt
  __int64 v71; // r9
  signed __int64 v72; // rax
  signed __int64 v73; // rtt
  __int64 v74; // r9
  unsigned __int64 *v75; // rcx
  unsigned __int64 PteShadow; // rdx
  __int64 v77; // r15
  unsigned int v78; // ebx
  __int64 *v79; // rdx
  __int64 v80; // r9
  unsigned __int64 v81; // r12
  unsigned __int64 v82; // r9
  __int64 v83; // r13
  unsigned __int64 v84; // rdi
  __int64 v85; // r10
  char v86; // r9
  unsigned __int64 v87; // rdx
  __int64 v88; // r11
  unsigned __int64 v89; // r9
  __int64 v90; // rcx
  unsigned __int8 v91; // r10
  char v92; // al
  __int64 *v93; // r8
  unsigned __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 *v96; // r10
  __int64 v97; // rax
  unsigned __int64 v98; // rbx
  unsigned __int8 v99; // r12
  unsigned int v100; // r14d
  char v101; // cl
  __int64 v102; // rbx
  unsigned __int64 v103; // rdx
  unsigned int v104; // r14d
  unsigned __int64 v105; // r10
  _QWORD *Address; // rax
  _QWORD *v107; // rdx
  int v108; // eax
  unsigned __int64 v109; // r10
  __int64 v110; // r9
  __int64 HasPrivateFixups; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  unsigned __int64 TransitionPteValid; // rax
  _QWORD *v116; // r11
  __int64 v117; // rcx
  unsigned __int64 v118; // rax
  bool v119; // zf
  __int64 result; // rax
  __int64 v121; // [rsp+40h] [rbp-61h]
  volatile __int64 *v122; // [rsp+48h] [rbp-59h]
  bool v123; // [rsp+50h] [rbp-51h]
  int v124; // [rsp+50h] [rbp-51h]
  unsigned int v125; // [rsp+54h] [rbp-4Dh] BYREF
  unsigned __int64 v126; // [rsp+58h] [rbp-49h] BYREF
  ULONG_PTR v127; // [rsp+60h] [rbp-41h]
  __int64 v128; // [rsp+68h] [rbp-39h] BYREF
  __int64 PrototypePteDirect; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v130; // [rsp+78h] [rbp-29h]
  __int64 v131; // [rsp+80h] [rbp-21h]
  __int16 *v132; // [rsp+88h] [rbp-19h]
  __int64 v133; // [rsp+90h] [rbp-11h] BYREF
  unsigned __int64 *v134; // [rsp+98h] [rbp-9h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+47h]
  unsigned __int8 v137; // [rsp+F8h] [rbp+57h]
  unsigned __int64 v139; // [rsp+108h] [rbp+67h] BYREF

  v139 = a4;
  v137 = a2;
  v7 = 0;
  v8 = 0;
  v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v122 = (volatile __int64 *)v9;
  if ( (unsigned __int64)&STACK[0x90482413108] <= 0x7F8 )
    a4 = MiReadPteShadow(&v139, a4);
  v10 = 0xFFFFFFFFFLL;
  v11 = (a4 >> 12) & 0xFFFFFFFFFLL;
  v131 = v11;
  v12 = (_QWORD *)(48 * v11 - 0x58000000000LL);
  v121 = (__int64)v12;
  v13 = ((unsigned int)HIDWORD(v12[5]) >> 8) & 0x3FF;
  if ( v13 == 1023 )
    v14 = MiSystemPartition;
  else
    v14 = *(__int16 **)(qword_14034F0E8 + 8LL * v13);
  v15 = v12[2];
  v132 = v14;
  v133 = v15;
  if ( !PfSnNumActiveTraces || (v15 & 0x400) == 0 )
    goto LABEL_132;
  PrototypePteDirect = MiGetPrototypePteDirect(v15, a2, 2LL, v11);
  v17 = *(_QWORD *)PrototypePteDirect;
  v18 = (signed __int64 *)(*(_QWORD *)PrototypePteDirect + 64LL);
  _m_prefetchw(v18);
  v19 = *v18;
  if ( (*v18 & 0xF) != 0 )
  {
    do
    {
      v20 = _InterlockedCompareExchange64(v18, v19 - 1, v19);
      if ( v19 == v20 )
        break;
      v19 = v20;
    }
    while ( (v20 & 0xF) != 0 );
  }
  v21 = v19;
  v22 = v19 & 0xF;
  v23 = (_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0uLL);
  v127 = (ULONG_PTR)v23;
  if ( v22 > 1 )
  {
LABEL_23:
    if ( v23 )
      goto LABEL_32;
    goto LABEL_24;
  }
  if ( v22 )
  {
    ObReferenceObjectExWithTag(v23, 15LL);
    _m_prefetchw(v18);
    v24 = *v18;
    while ( (v24 & 0xF) == 0 )
    {
      if ( v23 != (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v25 = v24;
      v24 = _InterlockedCompareExchange64(v18, v24 + 15, v24);
      if ( v25 == v24 )
        goto LABEL_22;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v23 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64(v23 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v23, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion((signed __int64)(v23 - 6));
    }
LABEL_22:
    v16 = 2LL;
    goto LABEL_23;
  }
LABEL_24:
  v27 = (_DWORD *)(v17 + 72);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v16);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v27);
  }
  else
  {
    _m_prefetchw(v27);
    v29 = *v27 & 0x7FFFFFFF;
    if ( v29 != _InterlockedCompareExchange(v27, v29 + 1, v29) )
      ExpWaitForSpinLockSharedAndAcquire(v27);
  }
  v127 = ObFastReferenceObjectLocked(v18);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v27, retaddr);
  }
  else
  {
    _InterlockedAnd(v27, 0xBFFFFFFF);
    _InterlockedDecrement(v27);
  }
  __writecr8(CurrentIrql);
LABEL_32:
  v30 = v12[1] | 0x8000000000000000uLL;
  if ( a3 + 0x800000000000LL <= 0x78FFFFFFFFFFLL
    || a3 >= 0xFFFFF98000000000uLL
    || (Process = KeGetCurrentThread()->ApcState.Process, (v32 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v33 = 0xFFFFFFFFLL;
  }
  else
  {
    v33 = *(unsigned int *)(v32 + 8);
  }
  if ( (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0 )
  {
    v34 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v30 < v34 || v30 >= v34 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
    {
      if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 )
        v35 = (v30 << 9)
            - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)PrototypePteDirect, v33, PrototypePteDirect) + 32) << 9);
      else
        v35 = (v30 << 9) - (*(_QWORD *)(*(_QWORD *)(PrototypePteDirect + 24) + 32LL) << 9);
    }
    else
    {
      v35 = (v30 << 9) - (v34 << 9);
    }
    v36 = ((unsigned __int64)*(unsigned int *)(PrototypePteDirect + 36) << 9) + (v35 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v37 = *(_QWORD *)(PrototypePteDirect + 8);
    if ( v37 )
      v38 = (__int64)(v30 - v37) >> 3 << 12;
    else
      v38 = 0LL;
    v36 = ((*(unsigned int *)(PrototypePteDirect + 36) | ((unsigned __int64)(*(_WORD *)(PrototypePteDirect + 32) & 0xFFC0) << 26)) << 12)
        + v38;
  }
  v39 = (*(_DWORD *)(*(_QWORD *)PrototypePteDirect + 56LL) & 0x20) != 0;
  v123 = v39;
  CurrentThread = KeGetCurrentThread();
  v41 = CurrentThread->ApcState.Process;
  _m_prefetchw(&v41[1].ThreadSeed[2]);
  v42 = *(_QWORD *)&v41[1].ThreadSeed[2];
  if ( (v42 & 0xF) != 0 )
  {
    do
    {
      v43 = _InterlockedCompareExchange64((volatile signed __int64 *)&v41[1].ThreadSeed[2], v42 - 1, v42);
      if ( v42 == v43 )
        break;
      v42 = v43;
    }
    while ( (v43 & 0xF) != 0 );
  }
  v44 = v42 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v42 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v45 = v42 & 0xF;
    if ( v45 > 1 )
      goto LABEL_80;
    if ( v45 )
    {
      if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v44 + 360), 0xFu) )
      {
        _m_prefetchw(&v41[1].ThreadSeed[2]);
        v49 = *(_QWORD *)&v41[1].ThreadSeed[2];
        while ( (v49 & 0xF) == 0 )
        {
          if ( v44 != (v49 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v50 = v49;
          v49 = _InterlockedCompareExchange64((volatile signed __int64 *)&v41[1].ThreadSeed[2], v49 + 15, v49);
          if ( v50 == v49 )
            goto LABEL_80;
        }
        _m_prefetchw((const void *)(v44 + 360));
        v51 = *(_QWORD *)(v44 + 360);
        if ( (v51 & 1) != 0 )
        {
LABEL_77:
          v53 = v51 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFF1uLL) == 15
            && !_interlockedbittestandreset((volatile signed __int32 *)(v53 + 32), 0) )
          {
            KeSetEvent((PRKEVENT)(v53 + 8), 0, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v52 = v51;
            v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 360), v51 - 30, v51);
            if ( v52 == v51 )
              break;
            if ( (v51 & 1) != 0 )
              goto LABEL_77;
          }
        }
      }
      goto LABEL_80;
    }
    v46 = 1;
    v47 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&qword_140353640);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140353640, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_140353640);
    }
    v44 = *(_QWORD *)&v41[1].ThreadSeed[2] & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v44 )
    {
      _m_prefetchw((const void *)(v44 + 360));
      v48 = *(_QWORD *)((*(_QWORD *)&v41[1].ThreadSeed[2] & 0xFFFFFFFFFFFFFFF0uLL) + 0x168) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v48 == _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 360), v48 + 2, v48) )
        v46 = 1;
      else
        v46 = ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v44 + 360));
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_140353640, retaddr);
    else
      _InterlockedAnd64(&qword_140353640, 0LL);
    __writecr8(v47);
    if ( v46 )
    {
      v39 = v123;
LABEL_80:
      if ( v44 )
      {
        if ( (BYTE4(CurrentThread[1].Queue) & 0x40) == 0 )
        {
          if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) == 0
            && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2
            || CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
          {
            v54 = *(struct _KTHREAD **)(v44 + 432);
            if ( !v54 || v54 == CurrentThread && *(void **)(v44 + 440) == CurrentThread[1].KernelStack )
            {
              v55 = *(_QWORD *)(v127 + 24);
              v130 = v55;
              PfSnGetFileInformation(v44, (_QWORD *)v127);
              if ( (*(_BYTE *)(v44 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v44 + 352) + 1490LL) == 2 )
                _InterlockedOr16((volatile signed __int16 *)(v44 + 484), 1u);
              if ( v36 < 0x20000000000LL )
              {
                v56 = v36 >> 9;
                if ( v39 )
                  v57 = 1;
                else
                  v57 = (v39 & 2) != 0 ? 3 : 0;
                v124 = v57;
                v58 = dword_140367DD0;
                if ( dword_140367DD0 != *(_DWORD *)(v44 + 404) && (int)PfSnTraceGetLogEntry(v44, 1u, &v134) >= 0 )
                {
                  v59 = v134;
                  *v134 = *v134 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                  *((_DWORD *)v59 + 2) = v58;
                  *(_DWORD *)(v44 + 404) = v58;
                  *(_QWORD *)(v44 + 408) = v44 + 416;
                }
                if ( v57 || (v60 = *(_QWORD **)(v44 + 408), *v60 >> 3 != v56) || v60[1] != v55 )
                {
                  if ( _InterlockedIncrement((volatile signed __int32 *)(v44 + 344)) <= *(_DWORD *)(v44 + 340) )
                  {
                    v61 = *(_QWORD *)(v44 + 96);
                    v62 = _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), 1u);
                    v63 = (v62 + 1 < 0) ^ __OFADD__(1, v62) | (v62 == -1);
                    v64 = v62 + 1;
                    if ( v63 )
                    {
LABEL_124:
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 344), 0xFFFFFFFF);
                    }
                    else
                    {
                      while ( v64 > *(_DWORD *)(v61 + 20) )
                      {
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), 0xFFFFFFFF);
                        v65 = (_QWORD *)PfSnTraceBufferAllocate();
                        if ( v65 )
                        {
                          v66 = (volatile signed __int32 *)(v44 + 128);
                          v67 = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
                          {
                            KiAcquireSpinLockInstrumented(v44 + 128);
                          }
                          else if ( _interlockedbittestandset64(v66, 0LL) )
                          {
                            KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v44 + 128));
                          }
                          if ( *(_QWORD *)(v44 + 96) == v61 )
                          {
                            v68 = *(_QWORD **)(v44 + 112);
                            *v65 = v44 + 104;
                            v65[1] = v68;
                            if ( *v68 != v44 + 104 )
                              __fastfail(3u);
                            *v68 = v65;
                            *(_QWORD *)(v44 + 112) = v65;
                            ++*(_DWORD *)(v44 + 120);
                            *(_QWORD *)(v44 + 96) = v65;
                            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                              KiReleaseSpinLockInstrumented(v44 + 128, retaddr);
                            else
                              _InterlockedAnd64((volatile signed __int64 *)v66, 0LL);
                            __writecr8(v67);
                          }
                          else
                          {
                            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                              KiReleaseSpinLockInstrumented(v44 + 128, retaddr);
                            else
                              _InterlockedAnd64((volatile signed __int64 *)v66, 0LL);
                            __writecr8(v67);
                            ExFreePoolWithTag(v65, 0);
                          }
                          v61 = *(_QWORD *)(v44 + 96);
                          v69 = _InterlockedExchangeAdd((volatile signed __int32 *)(v61 + 16), 1u);
                          v63 = (v69 + 1 < 0) ^ __OFADD__(1, v69) | (v69 == -1);
                          v64 = v69 + 1;
                          if ( !v63 )
                            continue;
                        }
                        goto LABEL_124;
                      }
                      v79 = (__int64 *)(16LL * (v64 - 1) + v61 + 24);
                      v79[1] = v130;
                      *v79 = (8 * v56) ^ v124 & 7;
                      _InterlockedIncrement((volatile signed __int32 *)(v44 + 332));
                      if ( !v124 )
                        *(_QWORD *)(v44 + 408) = v79;
                    }
                  }
                  else
                  {
                    _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 344), 0xFFFFFFFF);
                    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v44 + 400), 3, 0) )
                      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v44 + 368), DelayedWorkQueue);
                  }
                }
              }
            }
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v44 + 336));
          }
        }
        _m_prefetchw((const void *)(v44 + 360));
        v70 = *(_QWORD *)(v44 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v70 != _InterlockedCompareExchange64((volatile signed __int64 *)(v44 + 360), v70 - 2, v70) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v44 + 360));
      }
    }
  }
  v71 = *(_QWORD *)PrototypePteDirect;
  _m_prefetchw((const void *)(*(_QWORD *)PrototypePteDirect + 64LL));
  v72 = *(_QWORD *)(v71 + 64);
  if ( (v127 ^ v72) >= 0xF )
  {
LABEL_130:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v127, 0x746C6644u);
  }
  else
  {
    while ( 1 )
    {
      v73 = v72;
      v72 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + 64), v72 + 1, v72);
      if ( v73 == v72 )
        break;
      if ( (v127 ^ v72) >= 0xF )
        goto LABEL_130;
    }
  }
  v9 = (unsigned __int64)v122;
  v10 = 0xFFFFFFFFFLL;
  v7 = 0;
LABEL_132:
  v74 = 0x90482413000LL;
  v75 = (unsigned __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v75;
  if ( (unsigned __int64)(v75 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v75, PteShadow);
  v126 = PteShadow;
  v127 = (ULONG_PTR)&v126 + v74;
  if ( (unsigned __int64)&v126 + v74 <= 0x7F8 )
    PteShadow = MiReadPteShadow(&v126, PteShadow);
  v77 = 48 * (v10 & (PteShadow >> 12)) - 0x58000000000LL;
  v78 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v78);
    }
    while ( (*(_QWORD *)(v77 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) );
  }
  *(_QWORD *)(v77 + 24) ^= (*(_QWORD *)(v77 + 24) ^ ((*(_QWORD *)(v77 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v80 = *(_QWORD *)v9;
  v81 = v9 + 0x90482413000LL;
  v130 = v9 + 0x90482413000LL;
  if ( v9 + 0x90482413000LL <= 0x7F8 )
    v80 = MiReadPteShadow(v9, v80);
  if ( (unsigned int)MiIsPrototypePteVadLookup(v80) )
  {
    v83 = a5;
    v84 = 16 * ((v82 >> 5) & 0x1F);
  }
  else
  {
    v8 = 1;
    v84 = 16 * (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v133) & 0x1F);
    if ( (v86 & 8) != 0 )
    {
      v8 = 3;
      v84 = v84 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
    }
    v83 = a5;
    if ( a5 && (v84 & 0x40) == 0 )
      v83 = v85;
  }
  v87 = a3;
  if ( (MiFlags & 0x30000) != 0 && a3 >= 0xFFFF800000000000uLL && ((v84 >> 4) & 2) != 0 )
  {
    if ( (unsigned int)MiIsStrongCodeImagePage(v121, &PrototypePteDirect) )
    {
      v84 = v84 & 0xFFFFFFFFFFFFFE0FuLL | 0x30;
      v83 = 0LL;
      v87 = a3;
    }
    else
    {
      v87 = a3;
      if ( ((v84 >> 4) & 0x1F) == 2 )
        v84 = v84 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
      else
        v84 &= ~0x20uLL;
    }
  }
  v88 = v121;
  v89 = v84 >> 4;
  v90 = (v84 >> 4) & 7;
  v91 = *(_BYTE *)(v121 + 34);
  v92 = v91 >> 6;
  if ( v91 >> 6 != 1 )
  {
    if ( v92 )
    {
      if ( v92 == 2 )
        v90 = (unsigned int)v90 | 0x18;
    }
    else
    {
      v90 = (unsigned int)v90 | 8;
    }
  }
  if ( v87 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_BYTE *)(a1 + 216) & 7u) < 2 )
    {
      v94 = MmProtectToPteMask[v90] ^ ((v131 << 12) ^ MmProtectToPteMask[v90]) & 0xFFFFFFFFF000LL | 0x21;
      if ( (unsigned __int64)(v122 + 0x12098000000LL) <= 0x3FFFFFFF )
        v94 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v122 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && (unsigned __int64)v122 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v122 >= 0xFFFFF6FB40000000uLL
        && (unsigned __int64)v122 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || (unsigned __int64)v122 >= 0xFFFFF6FB7DA00000uLL
        && (unsigned __int64)v122 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || (unsigned __int64)v122 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v122 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        v94 |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v122) )
        v94 |= 0x100uLL;
    }
    else
    {
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((unsigned __int64)v122) )
        v95 |= 0x100uLL;
      v94 = v95 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
    }
  }
  else
  {
    v93 = MmProtectToPteMask;
    v94 = MmProtectToPteMask[v90] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v131 & 0xFFFFFFFFFLL)) | HIBYTE(word_14034EC18) & 1) << 8) | 0x25;
  }
  if ( v83 )
  {
    LOBYTE(v89) = v89 & 5;
    if ( (_BYTE)v89 != 5 )
    {
      v94 |= 0x42uLL;
      v126 = v94;
      if ( (v91 & 0x10) == 0 )
      {
        v96 = (__int64 *)(v88 + 16);
        if ( (*(_DWORD *)(v88 + 16) & 0x400LL) == 0 )
        {
          v97 = *v96;
          if ( (unsigned __int64)(v88 + 0x90482413010LL) <= 0x7F8 )
            LOBYTE(v97) = MiReadPteShadow(v88 + 16, *v96);
          if ( (v97 & 4) != 0 )
          {
            v98 = 0LL;
            v99 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v100 = 0;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) )
            {
              do
              {
                if ( (++v100 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                {
                  _mm_pause();
                }
                else
                {
                  HvlNotifyLongSpinWait(v100);
                  v88 = v121;
                }
              }
              while ( (*(_QWORD *)(v88 + 24) & 0x8000000000000000uLL) != 0
                   || _interlockedbittestandset64((volatile signed __int32 *)(v88 + 24), 0x3FuLL) );
              v96 = (__int64 *)(v88 + 16);
            }
            v101 = *(_BYTE *)(v88 + 34);
            if ( (v101 & 0x10) == 0 && (*(_DWORD *)v96 & 0x400LL) == 0 )
            {
              if ( (v101 & 8) == 0 )
              {
                v89 = *v96;
                if ( (*v96 & 4) != 0 )
                {
                  v102 = *v96;
                  if ( (unsigned __int64)(v96 + 0x12090482600LL) <= 0x7F8 )
                    v102 = MiReadPteShadow(v96, v89);
                  v89 &= ~4uLL;
                  *v96 = v89;
                  v98 = v102 & 0xFFFFFFFFFFFFFFFDuLL;
                }
                else
                {
                  v98 = 0LL;
                }
              }
              *(_BYTE *)(v88 + 34) |= 0x10u;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v98 )
              MiReleasePageFileInfo(v132, v98, 1LL);
            __writecr8(v99);
            v94 = v126;
            v81 = v130;
          }
        }
      }
    }
  }
  v103 = 0LL;
  v104 = 0;
  v125 = 0;
  v128 = 0LL;
  if ( a6 )
    goto LABEL_241;
  if ( (v133 & 0x400) == 0 )
  {
    v105 = a3;
    if ( a3 < 0xFFFF800000000000uLL )
      goto LABEL_241;
    goto LABEL_225;
  }
  PrototypePteDirect = MiGetPrototypePteDirect(v133, 0LL, v93, v89);
  v128 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_DWORD *)(v128 + 56) & 0x20) == 0 )
  {
LABEL_241:
    v117 = v121;
    v116 = v122;
    goto LABEL_242;
  }
  v105 = a3;
  if ( a3 >= 0xFFFF800000000000uLL )
  {
LABEL_225:
    HasPrivateFixups = MiSystemImageHasPrivateFixups(v105, &v128, &v125);
    v109 = a3;
    goto LABEL_226;
  }
  if ( MEMORY[0xFFFFF58010804260] == v103 )
    goto LABEL_241;
  Address = MiLocateAddress(a3);
  v107 = Address;
  if ( !Address )
    goto LABEL_240;
  v108 = *((_DWORD *)Address + 12);
  if ( (v108 & 7) != 2 )
    goto LABEL_240;
  if ( (v108 & 0x20000) == 0 )
    goto LABEL_240;
  v109 = a3;
  v110 = *(_QWORD *)v107[9];
  if ( !_bittest(
          (const signed __int32 *)v107[19],
          (a3 >> 12) + ((__int64)(v107[10] - *(_QWORD *)(v110 + 128)) >> 3) - *((_DWORD *)v107 + 6)) )
    goto LABEL_240;
  HasPrivateFixups = v107[17];
  v125 = (a3 >> 12) + ((__int64)(v107[10] - *(_QWORD *)(v110 + 128)) >> 3) - *((_DWORD *)v107 + 6);
  v128 = v110;
LABEL_226:
  if ( !HasPrivateFixups )
  {
LABEL_240:
    v103 = 0LL;
    goto LABEL_241;
  }
  v104 = MiPrivateFixup(v128, v125, v121, v109, HasPrivateFixups, a1, v137);
  MiLockAndDecrementShareCount(v121, 0LL);
  if ( v104 == 297 || v104 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v77, 0LL);
    if ( v104 == 297 )
      return (unsigned int)-1073740748;
    return v104;
  }
  if ( (v104 & 0x80000000) != 0 )
    return v104;
  TransitionPteValid = MiMakeTransitionPteValid(v122, v112, v113, v114);
  v94 = TransitionPteValid;
  v126 = TransitionPteValid;
  if ( v127 <= 0x7F8 )
    TransitionPteValid = MiReadPteShadow(&v126, TransitionPteValid);
  v117 = 48 * ((TransitionPteValid >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v121 = v117;
  if ( a3 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v117 + 35) & 8) != 0 )
  {
    *v116 = v94;
    if ( v81 <= 0x7F8 )
      MiWritePteShadow(v116, v94);
    return v104;
  }
  v103 = 0LL;
  LODWORD(v84) = 0;
  v8 = v8 & 0xFA | 4;
LABEL_242:
  if ( (v8 & 1) != 0 )
    LODWORD(v84) = v84 & 0xFFFFFE0F;
  if ( (a7 & 1) == 0 || (v118 = a7 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(a7 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
    v118 = v103;
  if ( !MiAllocateWsle(a1, v116, v117, (unsigned int)v84, v94, v118) )
  {
    MiLockAndDecrementShareCount(v121, 0LL);
    if ( (v8 & 4) == 0 )
      MiLockAndDecrementShareCount(v77, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v83 )
    return v104;
  if ( (v94 & 0x800) != 0 )
    return v104;
  if ( (v94 & 0x200) == 0 )
    return v104;
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
    return v104;
  v119 = (unsigned int)MiCopyOnWriteEx(a3, v122, -1LL, v137, 0) == 0;
  result = 3221225495LL;
  if ( !v119 )
    return v104;
  return result;
}
