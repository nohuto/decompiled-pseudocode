/*
 * XREFs of MiCompleteProtoPteFault @ 0x140039670
 * Callers:
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x140006C80 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x140006D40 (ExAcquireRundownProtectionEx.c)
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400368B0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     MiCheckAndUpdateIoAttribution @ 0x14006E5B0 (MiCheckAndUpdateIoAttribution.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     MiCapturePageFileInfoInline @ 0x140097B20 (MiCapturePageFileInfoInline.c)
 *     MiSystemImageHasPrivateFixups @ 0x140099A90 (MiSystemImageHasPrivateFixups.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     ObFastReferenceObjectLocked @ 0x1400CF3D4 (ObFastReferenceObjectLocked.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     PfSnTraceGetLogEntry @ 0x1400ED550 (PfSnTraceGetLogEntry.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 MiCompleteProtoPteFault(__int64 a1, char a2, unsigned __int64 a3, ...)
{
  char v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 *v5; // r10
  __int64 v6; // rdi
  unsigned __int16 v7; // cx
  __int64 v8; // rcx
  _QWORD *PrototypePteDirect; // r15
  __int64 v10; // rdi
  signed __int64 *v11; // rsi
  signed __int64 v12; // rdx
  signed __int64 v13; // rax
  signed __int64 v14; // r13
  unsigned int v15; // edx
  _QWORD *v16; // r13
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  signed __int64 BugCheckParameter4; // rax
  KIRQL v20; // bl
  unsigned __int64 v21; // r12
  _KPROCESS *Process; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  bool v30; // r15
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v32; // rdi
  signed __int64 v33; // rdx
  signed __int64 v34; // rax
  unsigned __int64 v35; // rbx
  unsigned int v36; // edx
  BOOLEAN v37; // si
  KIRQL v38; // r15
  signed __int64 v39; // rax
  signed __int64 v40; // rtt
  signed __int64 v41; // rax
  signed __int64 v42; // rtt
  unsigned __int64 v43; // rax
  struct _KTHREAD *v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r9
  unsigned __int64 v47; // r12
  int v48; // r13d
  int v49; // edi
  unsigned __int64 *v50; // rcx
  _QWORD *v51; // rcx
  __int64 v52; // rdi
  signed __int32 v53; // eax
  char v54; // cc
  signed __int32 v55; // eax
  _QWORD *v56; // rsi
  KIRQL v57; // al
  _QWORD *v58; // rcx
  signed __int32 v59; // eax
  unsigned __int64 v60; // rtt
  __int64 v61; // r8
  signed __int64 v62; // rax
  signed __int64 v63; // rtt
  __int64 v64; // rax
  unsigned __int64 *v65; // r10
  __int64 v66; // r13
  __int64 v67; // rax
  unsigned __int64 v68; // r9
  unsigned __int64 v69; // r10
  __int64 v70; // r11
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // rdx
  char PagePrivilege; // al
  __int64 v74; // r12
  unsigned __int8 v75; // r15
  char v76; // al
  __int64 v77; // rcx
  __int64 *v78; // rdx
  char v79; // r9
  __int64 v80; // rcx
  unsigned __int64 ValidKernelPte; // rdi
  __int64 v82; // r15
  unsigned __int64 v83; // rdi
  unsigned __int8 v84; // al
  char v85; // r8
  unsigned __int8 v86; // si
  __int64 v87; // rsi
  unsigned int v88; // r15d
  __int64 v89; // r12
  unsigned __int64 v90; // r12
  __int64 HasPrivateFixups; // rax
  unsigned int v92; // edx
  __int64 v93; // r11
  __int64 v94; // rsi
  unsigned __int64 v95; // rax
  _KPROCESS *CurrentProcess; // rax
  unsigned __int64 Address; // rax
  unsigned __int64 v98; // r10
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rcx
  bool v102; // zf
  __int64 result; // rax
  bool v104; // [rsp+40h] [rbp-71h]
  __int64 v105; // [rsp+40h] [rbp-71h]
  __int64 v106; // [rsp+40h] [rbp-71h]
  __int64 v107; // [rsp+48h] [rbp-69h]
  unsigned __int64 *v108; // [rsp+50h] [rbp-61h]
  unsigned int v109; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int64 v110; // [rsp+60h] [rbp-51h]
  __int64 TransitionPteValid; // [rsp+68h] [rbp-49h] BYREF
  int v112; // [rsp+70h] [rbp-41h] BYREF
  __int64 v113; // [rsp+78h] [rbp-39h]
  __int64 v114; // [rsp+80h] [rbp-31h] BYREF
  __int64 v115; // [rsp+88h] [rbp-29h] BYREF
  struct _KEVENT *v116; // [rsp+90h] [rbp-21h]
  unsigned __int64 *v117; // [rsp+98h] [rbp-19h] BYREF
  _QWORD *v118; // [rsp+A0h] [rbp-11h]
  _DWORD *v119; // [rsp+A8h] [rbp-9h]
  __int64 v123; // [rsp+118h] [rbp+67h] BYREF
  va_list va; // [rsp+118h] [rbp+67h]
  __int64 v125; // [rsp+120h] [rbp+6Fh]
  __int64 v126; // [rsp+128h] [rbp+77h]
  __int64 v127; // [rsp+130h] [rbp+7Fh]
  va_list va1; // [rsp+138h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v123 = va_arg(va1, _QWORD);
  v125 = va_arg(va1, _QWORD);
  v126 = va_arg(va1, _QWORD);
  v127 = va_arg(va1, _QWORD);
  v3 = 0;
  v4 = a3;
  v108 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v113 = MI_GET_PAGE_FRAME_FROM_PTE((__int64 *)va);
  v6 = 48 * v113 - 0x58000000000LL;
  v107 = v6;
  v7 = ((unsigned int)HIDWORD(*(_QWORD *)(v6 + 40)) >> 8) & 0x3FF;
  if ( v7 == 1023 )
    v116 = (struct _KEVENT *)MiSystemPartition;
  else
    v116 = *(struct _KEVENT **)(qword_140327038 + 8LL * v7);
  v8 = *(_QWORD *)(v6 + 16);
  v119 = (_DWORD *)(v6 + 16);
  v114 = v8;
  if ( !PfSnNumActiveTraces || (v8 & 0x400) == 0 )
    goto LABEL_105;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(v8);
  v118 = PrototypePteDirect;
  v10 = *PrototypePteDirect;
  v11 = (signed __int64 *)(*PrototypePteDirect + 64LL);
  _m_prefetchw(v11);
  v12 = *v11;
  if ( (*v11 & 0xF) != 0 )
  {
    do
    {
      v13 = _InterlockedCompareExchange64(v11, v12 - 1, v12);
      if ( v12 == v13 )
        break;
      v12 = v13;
    }
    while ( (v13 & 0xF) != 0 );
  }
  v14 = v12;
  v15 = v12 & 0xF;
  v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
  v110 = (unsigned __int64)v16;
  if ( v15 > 1 )
  {
LABEL_21:
    if ( v16 )
      goto LABEL_23;
    goto LABEL_22;
  }
  if ( v15 )
  {
    ObReferenceObjectExWithTag(v16, 15LL);
    _m_prefetchw(v11);
    v17 = *v11;
    while ( (v17 & 0xF) == 0 )
    {
      if ( v16 != (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v18 = v17;
      v17 = _InterlockedCompareExchange64(v11, v17 + 15, v17);
      if ( v18 == v17 )
        goto LABEL_21;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v16 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64(v16 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v16, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v16 - 6);
    }
    v4 = a3;
    goto LABEL_21;
  }
LABEL_22:
  v20 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v10 + 72));
  v110 = ObFastReferenceObjectLocked(v11);
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v10 + 72), v20);
  v4 = a3;
LABEL_23:
  v21 = *(_QWORD *)(v107 + 8) | 0x8000000000000000uLL;
  if ( v4 >= 0xFFFF800000000000uLL && (v4 < qword_140326950 || v4 >= qword_140326950 + 0x8000000000LL)
    || (Process = KeGetCurrentThread()->ApcState.Process, (v23 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v24 = 0xFFFFFFFFLL;
  }
  else
  {
    v24 = *(unsigned int *)(v23 + 8);
  }
  if ( (*(_DWORD *)(*PrototypePteDirect + 56LL) & 0x20) != 0 )
  {
    v25 = PrototypePteDirect[1];
    if ( v21 < v25 || v21 >= v25 + 8LL * *((unsigned int *)PrototypePteDirect + 11) )
    {
      if ( (*((_BYTE *)PrototypePteDirect + 34) & 2) != 0 )
        v26 = (v21 << 9) - (*(_QWORD *)(MiGetSharedProtos(*PrototypePteDirect, v24, PrototypePteDirect) + 32) << 9);
      else
        v26 = (v21 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(PrototypePteDirect) + 32) << 9);
    }
    else
    {
      v26 = (v21 << 9) - (v25 << 9);
    }
    v27 = ((unsigned __int64)*((unsigned int *)PrototypePteDirect + 9) << 9) + (v26 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v28 = PrototypePteDirect[1];
    if ( v28 )
      v29 = (__int64)(v21 - v28) >> 3 << 12;
    else
      v29 = 0LL;
    v27 = v29
        + ((*((unsigned int *)PrototypePteDirect + 9) | ((unsigned __int64)((_WORD)PrototypePteDirect[4] & 0xFFC0) << 26)) << 12);
  }
  v30 = (*(_BYTE *)(*PrototypePteDirect + 56LL) & 0x20) != 0;
  v104 = v30;
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread->ApcState.Process;
  _m_prefetchw(&v32[1].ThreadSeed[4]);
  v33 = *(_QWORD *)&v32[1].ThreadSeed[4];
  if ( (v33 & 0xF) != 0 )
  {
    do
    {
      v34 = _InterlockedCompareExchange64((volatile signed __int64 *)&v32[1].ThreadSeed[4], v33 - 1, v33);
      if ( v33 == v34 )
        break;
      v33 = v34;
    }
    while ( (v34 & 0xF) != 0 );
  }
  v35 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v33 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v36 = v33 & 0xF;
    if ( v36 > 1 )
      goto LABEL_63;
    if ( v36 )
    {
      if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v35 + 360), 0xFu) )
      {
        _m_prefetchw(&v32[1].ThreadSeed[4]);
        v39 = *(_QWORD *)&v32[1].ThreadSeed[4];
        while ( (v39 & 0xF) == 0 )
        {
          if ( v35 != (v39 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v40 = v39;
          v39 = _InterlockedCompareExchange64((volatile signed __int64 *)&v32[1].ThreadSeed[4], v39 + 15, v39);
          if ( v40 == v39 )
            goto LABEL_63;
        }
        _m_prefetchw((const void *)(v35 + 360));
        v41 = *(_QWORD *)(v35 + 360);
        if ( (v41 & 1) != 0 )
        {
LABEL_60:
          v43 = v41 & 0xFFFFFFFFFFFFFFFEuLL;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFF1uLL) == 15
            && !_interlockedbittestandreset((volatile signed __int32 *)(v43 + 32), 0) )
          {
            KeSetEvent((PRKEVENT)(v43 + 8), 0, 0);
          }
        }
        else
        {
          while ( 1 )
          {
            v42 = v41;
            v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 360), v41 - 30, v41);
            if ( v42 == v41 )
              break;
            if ( (v41 & 1) != 0 )
              goto LABEL_60;
          }
        }
      }
      goto LABEL_63;
    }
    v37 = 1;
    v38 = KeAcquireSpinLockRaiseToDpc(&qword_140328710);
    v35 = *(_QWORD *)&v32[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v35 )
      v37 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v35 + 360));
    KeReleaseSpinLock(&qword_140328710, v38);
    if ( v37 )
    {
      v30 = v104;
LABEL_63:
      if ( v35 )
      {
        if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 )
        {
          if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) == 0
            && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7u) >= 2
            || CurrentThread == KeGetCurrentThread() && CurrentThread[1].Timer.DueTime.LowPart )
          {
            v44 = *(struct _KTHREAD **)(v35 + 432);
            if ( !v44 || v44 == CurrentThread && *(void **)(v35 + 440) == CurrentThread[1].KernelStack )
            {
              v45 = *(_QWORD *)(v110 + 24);
              v105 = v45;
              PfSnGetFileInformation(v35, (_QWORD *)v110);
              if ( (*(_BYTE *)(v35 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v35 + 352) + 1466LL) == 2 )
                _InterlockedOr16((volatile signed __int16 *)(v35 + 484), 1u);
              if ( v27 < 0x20000000000LL )
              {
                v47 = v27 >> 9;
                if ( v30 )
                  v48 = 1;
                else
                  v48 = (v30 & 2) != 0 ? 3 : 0;
                v49 = dword_14033B850;
                if ( dword_14033B850 != *(_DWORD *)(v35 + 404) && (int)PfSnTraceGetLogEntry(v35, 1LL, &v117, v46) >= 0 )
                {
                  v50 = v117;
                  *v117 = *v117 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                  *((_DWORD *)v50 + 2) = v49;
                  *(_DWORD *)(v35 + 404) = v49;
                  *(_QWORD *)(v35 + 408) = v35 + 416;
                }
                if ( v48 || (v51 = *(_QWORD **)(v35 + 408), *v51 >> 3 != v47) || v51[1] != v45 )
                {
                  if ( _InterlockedIncrement((volatile signed __int32 *)(v35 + 344)) <= *(_DWORD *)(v35 + 340) )
                  {
                    v52 = *(_QWORD *)(v35 + 96);
                    v53 = _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 16), 1u);
                    v54 = (v53 + 1 < 0) ^ __OFADD__(1, v53) | (v53 == -1);
                    v55 = v53 + 1;
                    if ( v54 )
                    {
LABEL_97:
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 344), 0xFFFFFFFF);
                    }
                    else
                    {
                      while ( v55 > *(_DWORD *)(v52 + 20) )
                      {
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 16), 0xFFFFFFFF);
                        v56 = PfSnTraceBufferAllocate();
                        if ( v56 )
                        {
                          v57 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v35 + 128));
                          if ( *(_QWORD *)(v35 + 96) == v52 )
                          {
                            v58 = *(_QWORD **)(v35 + 112);
                            if ( *v58 != v35 + 104 )
                              __fastfail(3u);
                            v56[1] = v58;
                            *v56 = v35 + 104;
                            *v58 = v56;
                            *(_QWORD *)(v35 + 112) = v56;
                            ++*(_DWORD *)(v35 + 120);
                            *(_QWORD *)(v35 + 96) = v56;
                            KeReleaseSpinLock((PKSPIN_LOCK)(v35 + 128), v57);
                          }
                          else
                          {
                            KeReleaseSpinLock((PKSPIN_LOCK)(v35 + 128), v57);
                            ExFreePoolWithTag(v56, 0);
                          }
                          v52 = *(_QWORD *)(v35 + 96);
                          v59 = _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 16), 1u);
                          v54 = (v59 + 1 < 0) ^ __OFADD__(1, v59) | (v59 == -1);
                          v55 = v59 + 1;
                          if ( !v54 )
                            continue;
                        }
                        goto LABEL_97;
                      }
                      v78 = (__int64 *)(16LL * (v55 - 1) + v52 + 24);
                      v78[1] = v105;
                      *v78 = (8 * v47) ^ v48 & 7;
                      _InterlockedIncrement((volatile signed __int32 *)(v35 + 332));
                      if ( !v48 )
                        *(_QWORD *)(v35 + 408) = v78;
                    }
                  }
                  else
                  {
                    _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 344), 0xFFFFFFFF);
                    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v35 + 400), 3, 0) )
                      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v35 + 368), DelayedWorkQueue);
                  }
                }
              }
            }
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v35 + 336));
          }
        }
        _m_prefetchw((const void *)(v35 + 360));
        v60 = *(_QWORD *)(v35 + 360) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v60 != _InterlockedCompareExchange64((volatile signed __int64 *)(v35 + 360), v60 - 2, v60) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v35 + 360));
      }
    }
  }
  v6 = v107;
  v61 = *v118;
  _m_prefetchw((const void *)(*v118 + 64LL));
  v62 = *(_QWORD *)(v61 + 64);
  if ( (v110 ^ v62) >= 0xF )
  {
LABEL_103:
    ObDereferenceObjectDeferDelete((PVOID)v110);
  }
  else
  {
    while ( 1 )
    {
      v63 = v62;
      v62 = _InterlockedCompareExchange64((volatile signed __int64 *)(v61 + 64), v62 + 1, v62);
      if ( v63 == v62 )
        break;
      if ( (v110 ^ v62) >= 0xF )
        goto LABEL_103;
    }
  }
  v5 = v108;
LABEL_105:
  TransitionPteValid = MI_READ_PTE_LOCK_FREE((((unsigned __int64)v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v64 = MI_GET_PFN_FROM_PTE(&TransitionPteValid);
  v112 = 0;
  v66 = v64;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v112);
      while ( (*(_QWORD *)(v66 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v66 + 24), 0x3FuLL) );
    v65 = v108;
  }
  *(_QWORD *)(v66 + 24) ^= (*(_QWORD *)(v66 + 24) ^ (*(_QWORD *)(v66 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v66 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v67 = MI_READ_PTE_LOCK_FREE(v65);
  if ( (unsigned int)MiIsPrototypePteVadLookup(v67) )
  {
    v106 = v125;
    v71 = 16 * ((v68 >> 5) & 0x1F);
  }
  else
  {
    v3 = 1;
    v71 = 16 * (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v114) & 0x1F);
    if ( (v79 & 8) != 0 )
    {
      v3 = 3;
      v71 = v71 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
    }
    v80 = v125;
    v106 = v125;
    if ( v125 )
    {
      if ( (v71 & 0x40) == 0 )
        v80 = 0LL;
      v106 = v80;
    }
  }
  v72 = a3;
  if ( (MiFlags & 0x4000) != 0 && a3 >= 0xFFFF800000000000uLL && (v71 & 0x20) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v6, 0LL, 0LL);
    if ( (PagePrivilege & 1) != 0 )
    {
      v71 = v71 & 0xFFFFFFFFFFFFFE0FuLL | 0x30;
    }
    else
    {
      if ( (PagePrivilege & 8) == 0 )
      {
        v74 = v106;
        v71 &= ~0x20uLL;
        if ( (v71 & 0x1F0) == 0 )
          v71 = v71 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
        goto LABEL_117;
      }
      v71 = v71 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
    }
    v74 = 0LL;
    v106 = 0LL;
LABEL_117:
    v72 = a3;
    v69 = (unsigned __int64)v108;
    v70 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_118;
  }
  v74 = v106;
LABEL_118:
  v75 = *(_BYTE *)(v6 + 34);
  v76 = v75 >> 6;
  v77 = (v71 >> 4) & 7;
  if ( v75 >> 6 != 1 )
  {
    if ( v76 )
    {
      if ( v76 == 2 )
        v77 = (unsigned int)v77 | 0x18;
    }
    else
    {
      v77 = (unsigned int)v77 | 8;
    }
  }
  if ( v72 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7u) < 2 )
    {
      ValidKernelPte = MmProtectToPteMask[v77] ^ ((v113 << 12) ^ MmProtectToPteMask[v77]) & 0xFFFFFFFFF000LL | 0x21;
      if ( v69 >= 0xFFFFF6FB40000000uLL && v69 <= 0xFFFFF6FB7FFFFFFFuLL )
        ValidKernelPte &= v70 & ~qword_1403A9350;
      if ( v69 <= 0xFFFFF6BFFFFFFF78uLL && v69 >= 0xFFFFF68000000000uLL
        || v69 >= 0xFFFFF6FB40000000uLL && v69 <= 0xFFFFF6FB5FFFFFF8uLL
        || v69 >= 0xFFFFF6FB7DA00000uLL && v69 <= 0xFFFFF6FB7DAFFFF8uLL
        || v69 >= 0xFFFFF6FB7DBED000uLL && v69 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        ValidKernelPte |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v69) )
        ValidKernelPte |= 0x100uLL;
    }
    else
    {
      ValidKernelPte = MiMakeValidKernelPte(v113, v77, v69);
    }
  }
  else
  {
    ValidKernelPte = MmProtectToPteMask[v77] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v113 & 0xFFFFFFFFFLL)) | HIBYTE(word_140326AE8) & 1) << 8) | 0x25;
  }
  if ( !v74 || ((v71 >> 4) & 5) == 5 )
  {
    v87 = v114;
  }
  else
  {
    ValidKernelPte |= 0x42uLL;
    TransitionPteValid = ValidKernelPte;
    if ( (v75 & 0x10) != 0 || (*v119 & 0x400LL) != 0 )
    {
      v82 = v107;
    }
    else
    {
      v82 = v107;
      if ( (unsigned int)MiGetPagingFileOffset(v119) )
      {
        v83 = 0LL;
        v84 = MiLockPageInline(v107);
        v85 = *(_BYTE *)(v107 + 34);
        v86 = v84;
        if ( (v85 & 0x10) == 0 && (*(_DWORD *)(v107 + 16) & 0x400LL) == 0 )
        {
          if ( (v85 & 8) == 0 )
            v83 = MiCapturePageFileInfoInline(v107 + 16, 1LL, 0LL);
          *(_BYTE *)(v107 + 34) |= 0x10u;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v107 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v83 )
          MiReleasePageFileInfo(v116, v83, 1);
        __writecr8(v86);
        ValidKernelPte = TransitionPteValid;
      }
    }
    v87 = v114;
    if ( (v114 & 0x400) != 0 && (*(_BYTE *)(a1 + 184) & 7) != 2 )
      MiCheckAndUpdateIoAttribution(v82);
  }
  v88 = 0;
  v109 = 0;
  v115 = 0LL;
  if ( (_DWORD)v126 )
    goto LABEL_180;
  v89 = *(_QWORD *)(v107 + 8);
  if ( v89 >= 0 )
  {
LABEL_179:
    v74 = v106;
LABEL_180:
    v94 = v107;
    goto LABEL_181;
  }
  if ( a3 >= 0xFFFF800000000000uLL )
  {
    v90 = a3;
    HasPrivateFixups = MiSystemImageHasPrivateFixups(a3, &v115, &v109);
    v92 = v109;
    LODWORD(v93) = v115;
    goto LABEL_198;
  }
  if ( (v87 & 0x400) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)MiGetPrototypePteDirect(v87) + 56LL) & 0x20) == 0 )
      goto LABEL_179;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( CurrentProcess[1].Affinity.Bitmap[12] && MiLocateCloneAddress(CurrentProcess, v89 | 0x8000000000000000uLL) )
      goto LABEL_179;
  }
  if ( !*(_QWORD *)(qword_140327FD0 + 276840640) )
    goto LABEL_179;
  v90 = a3;
  Address = MiLocateAddress(a3);
  v98 = Address;
  if ( !Address )
    goto LABEL_179;
  v99 = *(_DWORD *)(Address + 48);
  if ( (v99 & 7) != 2 )
    goto LABEL_179;
  if ( (v99 & 0x10000) == 0 )
    goto LABEL_179;
  v93 = **(_QWORD **)(v98 + 72);
  v92 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v98 + 80) - *(_QWORD *)(v93 + 136)) >> 3) - *(_DWORD *)(v98 + 24);
  if ( !_bittest(*(const signed __int32 **)(v98 + 152), v92) )
    goto LABEL_179;
  HasPrivateFixups = *(_QWORD *)(v98 + 136);
  v109 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v98 + 80) - *(_QWORD *)(v93 + 136)) >> 3) - *(_DWORD *)(v98 + 24);
  v115 = v93;
LABEL_198:
  if ( !HasPrivateFixups )
    goto LABEL_179;
  v88 = MiPrivateFixup(v93, v92, v107, v90, HasPrivateFixups, a1, a2);
  MiLockAndDecrementShareCount(v107, 0LL);
  if ( v88 == 297 || v88 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v66, 0LL);
    if ( v88 == 297 )
      return (unsigned int)-1073740748;
    return v88;
  }
  if ( (v88 & 0x80000000) != 0 )
    return v88;
  TransitionPteValid = MiMakeTransitionPteValid(v108);
  ValidKernelPte = TransitionPteValid;
  v94 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&TransitionPteValid) - 0x58000000000LL;
  if ( v90 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v94 + 35) & 8) != 0 )
  {
    *v108 = ValidKernelPte;
    if ( (unsigned int)MiPteInShadowRange(v108, v100) )
      MiWritePteShadow(v101, ValidKernelPte);
    return v88;
  }
  v74 = v106;
  LODWORD(v71) = 0;
  v3 = v3 & 0xFA | 4;
LABEL_181:
  if ( (v3 & 1) != 0 )
    LODWORD(v71) = v71 & 0xFFFFFE0F;
  if ( (v127 & 1) == 0 || (v95 = v127 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v127 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
    v95 = 0LL;
  if ( !MiAllocateWsle(a1, v108, v94, (unsigned int)v71, ValidKernelPte, v95) )
  {
    MiLockAndDecrementShareCount(v94, 0LL);
    if ( (v3 & 4) == 0 )
      MiLockAndDecrementShareCount(v66, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v74 )
    return v88;
  if ( (ValidKernelPte & 0x800) != 0 )
    return v88;
  if ( (ValidKernelPte & 0x200) == 0 )
    return v88;
  if ( PsGetCurrentProcess()[1].Affinity.Bitmap[10] )
    return v88;
  v102 = (unsigned int)MiCopyOnWriteEx(a3, 0) == 0;
  result = 3221225495LL;
  if ( !v102 )
    return v88;
  return result;
}
