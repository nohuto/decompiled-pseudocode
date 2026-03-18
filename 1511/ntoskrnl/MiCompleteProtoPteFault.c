/*
 * XREFs of MiCompleteProtoPteFault @ 0x140054EB0
 * Callers:
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x14000D5AC (ObFastReferenceObjectLocked.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140079C34 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     MiSystemImageHasPrivateFixups @ 0x1400DF9F4 (MiSystemImageHasPrivateFixups.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     PfSnTraceBufferAllocate @ 0x1400FAED4 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FB130 (ExAcquireRundownProtectionEx.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 MiCompleteProtoPteFault(__int64 a1, char a2, unsigned __int64 a3, ...)
{
  char v3; // si
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // r12
  unsigned __int16 v8; // cx
  __int64 v9; // r14
  __int64 v10; // rdi
  signed __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // r13
  unsigned int v14; // edx
  volatile signed __int64 *v15; // r13
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  signed __int64 BugCheckParameter4; // rax
  KIRQL v19; // bl
  unsigned __int64 v20; // r12
  _KPROCESS *Process; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // r15
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rcx
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v31; // rdi
  signed __int64 v32; // rdx
  signed __int64 v33; // rax
  unsigned __int64 v34; // rbx
  unsigned int v35; // edx
  BOOLEAN v36; // r15
  KIRQL v37; // r13
  signed __int64 v38; // rax
  signed __int64 v39; // rtt
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  unsigned __int64 v42; // rax
  struct _KTHREAD *v43; // rax
  __int64 v44; // r13
  unsigned __int64 v45; // r12
  int v46; // r15d
  int v47; // edi
  unsigned __int64 *v48; // rcx
  _QWORD *v49; // rcx
  __int64 v50; // rdi
  signed __int32 v51; // eax
  char v52; // cc
  signed __int32 v53; // eax
  _QWORD *v54; // r15
  KIRQL v55; // al
  _QWORD *v56; // rcx
  signed __int32 v57; // eax
  __int64 v58; // r9
  signed __int64 v59; // rax
  signed __int64 v60; // rtt
  __int64 v61; // rax
  __int64 v62; // r15
  unsigned __int64 v63; // rax
  __int64 v64; // r13
  unsigned __int64 v65; // rbx
  __int64 *v66; // rdx
  unsigned __int64 v67; // r8
  char PagePrivilege; // al
  __int64 v69; // rcx
  unsigned __int8 v70; // dl
  char v71; // al
  unsigned __int64 v72; // r9
  unsigned __int64 ValidKernelPte; // rdi
  __int64 v74; // rdi
  unsigned __int8 v75; // r12
  __int64 v76; // rax
  char v77; // r8
  unsigned int v78; // r12d
  unsigned __int64 v79; // r14
  unsigned __int64 Address; // rax
  unsigned __int64 v81; // r10
  int v82; // eax
  __int64 v83; // r8
  __int64 HasPrivateFixups; // rax
  _QWORD *v85; // r14
  __int64 v86; // rcx
  unsigned __int64 v87; // rax
  bool v88; // zf
  __int64 result; // rax
  unsigned __int8 v90; // [rsp+40h] [rbp-71h]
  __int64 v91; // [rsp+48h] [rbp-69h]
  _QWORD *v92; // [rsp+50h] [rbp-61h]
  bool v93; // [rsp+58h] [rbp-59h]
  int v94; // [rsp+58h] [rbp-59h]
  int v95; // [rsp+5Ch] [rbp-55h] BYREF
  __int64 v96; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v97; // [rsp+68h] [rbp-49h]
  int v98[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v99; // [rsp+78h] [rbp-39h]
  __int64 v100; // [rsp+80h] [rbp-31h]
  struct _KTHREAD *v101; // [rsp+88h] [rbp-29h]
  int v102; // [rsp+90h] [rbp-21h] BYREF
  int *v103; // [rsp+98h] [rbp-19h]
  unsigned __int64 *v104; // [rsp+A0h] [rbp-11h] BYREF
  _DWORD *v105; // [rsp+A8h] [rbp-9h]
  __int64 v109; // [rsp+118h] [rbp+67h] BYREF
  va_list va; // [rsp+118h] [rbp+67h]
  __int64 v111; // [rsp+120h] [rbp+6Fh]
  __int64 v112; // [rsp+128h] [rbp+77h]
  __int64 v113; // [rsp+130h] [rbp+7Fh]
  va_list va1; // [rsp+138h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v109 = va_arg(va1, _QWORD);
  v111 = va_arg(va1, _QWORD);
  v112 = va_arg(va1, _QWORD);
  v113 = va_arg(va1, _QWORD);
  v3 = 0;
  v4 = a3;
  v5 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v92 = (_QWORD *)v5;
  v100 = MI_GET_PAGE_FRAME_FROM_PTE((__int64 *)va);
  v7 = (_QWORD *)(48 * v100 - 0x58000000000LL);
  v91 = (__int64)v7;
  v8 = ((unsigned int)HIDWORD(v7[5]) >> 8) & 0x3FF;
  if ( v8 == 1023 )
    v103 = &MiSystemPartition;
  else
    v103 = *(int **)(qword_1402FEC28 + 8LL * v8);
  v9 = v7[2];
  v105 = v7 + 2;
  if ( !PfSnNumActiveTraces || (v9 & 0x400) == 0 )
    goto LABEL_104;
  v99 = v9 >> 16;
  v10 = *(_QWORD *)(v9 >> 16);
  _m_prefetchw((const void *)(v10 + 64));
  v11 = *(_QWORD *)(v10 + 64);
  if ( (v11 & 0xF) != 0 )
  {
    do
    {
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v11 - 1, v11);
      if ( v11 == v12 )
        break;
      v11 = v12;
    }
    while ( (v12 & 0xF) != 0 );
  }
  v13 = v11;
  v14 = v11 & 0xF;
  v15 = (volatile signed __int64 *)(v13 & 0xFFFFFFFFFFFFFFF0uLL);
  v97 = (unsigned __int64)v15;
  if ( v14 <= 1 )
  {
    if ( !v14 )
    {
LABEL_22:
      v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v10 + 72));
      v97 = ObFastReferenceObjectLocked((_QWORD *)(v10 + 64));
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(v10 + 72), v19);
      v4 = a3;
      goto LABEL_23;
    }
    ObReferenceObjectExWithTag(v15, 15LL);
    _m_prefetchw((const void *)(v10 + 64));
    v16 = *(_QWORD *)(v10 + 64);
    while ( (v16 & 0xF) == 0 )
    {
      if ( v15 != (volatile signed __int64 *)(v16 & 0xFFFFFFFFFFFFFFF0uLL) )
        break;
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v16 + 15, v16);
      if ( v17 == v16 )
        goto LABEL_21;
    }
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)v15 - 48);
    BugCheckParameter4 = _InterlockedExchangeAdd64(v15 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
    if ( BugCheckParameter4 <= 0 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v15, 5uLL, BugCheckParameter4);
      ObpDeferObjectDeletion(v15 - 6);
    }
    v4 = a3;
  }
LABEL_21:
  if ( !v15 )
    goto LABEL_22;
LABEL_23:
  v20 = v7[1] | 0x8000000000000000uLL;
  if ( v4 + 0x800000000000LL <= 0x78FFFFFFFFFFLL
    || v4 >= 0xFFFFF98000000000uLL
    || (Process = KeGetCurrentThread()->ApcState.Process, (v22 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
    || Process == PsInitialSystemProcess )
  {
    v23 = 0xFFFFFFFFLL;
  }
  else
  {
    v23 = *(unsigned int *)(v22 + 8);
  }
  v24 = v99;
  if ( (*(_DWORD *)(*(_QWORD *)v99 + 56LL) & 0x20) != 0 )
  {
    v25 = *(_QWORD *)(v99 + 8);
    if ( v20 < v25 || v20 >= v25 + 8LL * *(unsigned int *)(v99 + 44) )
    {
      if ( (*(_BYTE *)(v99 + 34) & 2) != 0 )
        v26 = (v20 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v99, (unsigned int)v23, v99) + 32) << 9);
      else
        v26 = (v20 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos((_QWORD *)v99) + 32) << 9);
    }
    else
    {
      v26 = (v20 << 9) - (v25 << 9);
    }
    v27 = ((unsigned __int64)*(unsigned int *)(v99 + 36) << 9) + (v26 & 0xFFFFFFFFFFFFF000uLL);
  }
  else
  {
    v28 = *(_QWORD *)(v99 + 8);
    if ( v28 )
      v29 = (__int64)(v20 - v28) >> 3 << 12;
    else
      v29 = 0LL;
    v27 = v29 + ((*(unsigned int *)(v99 + 36) | ((unsigned __int64)(*(_WORD *)(v99 + 32) & 0xFFC0) << 26)) << 12);
  }
  v93 = (*(_BYTE *)(*(_QWORD *)v99 + 56LL) & 0x20) != 0;
  CurrentThread = KeGetCurrentThread();
  v101 = CurrentThread;
  v31 = CurrentThread->ApcState.Process;
  _m_prefetchw(&v31[1].ThreadSeed[4]);
  v32 = *(_QWORD *)&v31[1].ThreadSeed[4];
  if ( (v32 & 0xF) != 0 )
  {
    do
    {
      v33 = _InterlockedCompareExchange64((volatile signed __int64 *)&v31[1].ThreadSeed[4], v32 - 1, v32);
      if ( v32 == v33 )
        break;
      v32 = v33;
    }
    while ( (v33 & 0xF) != 0 );
  }
  v34 = v32 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v32 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    goto LABEL_99;
  v35 = v32 & 0xF;
  if ( v35 > 1 )
    goto LABEL_62;
  if ( v35 )
  {
    if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v34 + 360), 0xFu) )
    {
      _m_prefetchw(&v31[1].ThreadSeed[4]);
      v38 = *(_QWORD *)&v31[1].ThreadSeed[4];
      while ( (v38 & 0xF) == 0 )
      {
        if ( v34 != (v38 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v39 = v38;
        v38 = _InterlockedCompareExchange64((volatile signed __int64 *)&v31[1].ThreadSeed[4], v38 + 15, v38);
        if ( v39 == v38 )
          goto LABEL_62;
      }
      _m_prefetchw((const void *)(v34 + 360));
      v40 = *(_QWORD *)(v34 + 360);
      if ( (v40 & 1) != 0 )
      {
LABEL_59:
        v42 = v40 & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v42 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v42 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v41 = v40;
          v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v34 + 360), v40 - 30, v40);
          if ( v41 == v40 )
            break;
          if ( (v40 & 1) != 0 )
            goto LABEL_59;
        }
      }
    }
    goto LABEL_62;
  }
  v36 = 1;
  v37 = KeAcquireSpinLockRaiseToDpc(&qword_1403058D0);
  v34 = *(_QWORD *)&v31[1].ThreadSeed[4] & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v34 )
    v36 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v34 + 360));
  KeReleaseSpinLock(&qword_1403058D0, v37);
  if ( v36 )
  {
    CurrentThread = v101;
LABEL_62:
    if ( v34 )
    {
      if ( (BYTE4(CurrentThread[1].Queue) & 0x40) == 0 )
      {
        if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) == 0
          && ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2
          || CurrentThread == KeGetCurrentThread() && HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        {
          v43 = *(struct _KTHREAD **)(v34 + 432);
          if ( !v43 || v43 == CurrentThread && *(void **)(v34 + 440) == CurrentThread[1].KernelStack )
          {
            v44 = *(_QWORD *)(v97 + 24);
            PfSnGetFileInformation(v34, v97, v6, v23);
            if ( (*(_BYTE *)(v34 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v34 + 352) + 1498LL) == 2 )
              _InterlockedOr16((volatile signed __int16 *)(v34 + 484), 1u);
            if ( v27 < 0x20000000000LL )
            {
              v45 = v27 >> 9;
              if ( v93 )
                v46 = 1;
              else
                v46 = (v93 & 2) != 0 ? 3 : 0;
              v94 = v46;
              v47 = dword_140317B10;
              if ( dword_140317B10 != *(_DWORD *)(v34 + 404) && (int)PfSnTraceGetLogEntry(v34, 1LL, &v104) >= 0 )
              {
                v48 = v104;
                *v104 = *v104 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                *((_DWORD *)v48 + 2) = v47;
                *(_DWORD *)(v34 + 404) = v47;
                *(_QWORD *)(v34 + 408) = v34 + 416;
              }
              if ( v46 || (v49 = *(_QWORD **)(v34 + 408), *v49 >> 3 != v45) || v49[1] != v44 )
              {
                if ( _InterlockedIncrement((volatile signed __int32 *)(v34 + 344)) <= *(_DWORD *)(v34 + 340) )
                {
                  v50 = *(_QWORD *)(v34 + 96);
                  v51 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 16), 1u);
                  v52 = (v51 + 1 < 0) ^ __OFADD__(1, v51) | (v51 == -1);
                  v53 = v51 + 1;
                  if ( v52 )
                  {
LABEL_96:
                    _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 344), 0xFFFFFFFF);
                  }
                  else
                  {
                    while ( v53 > *(_DWORD *)(v50 + 20) )
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 16), 0xFFFFFFFF);
                      v54 = (_QWORD *)PfSnTraceBufferAllocate();
                      if ( v54 )
                      {
                        v55 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 128));
                        if ( *(_QWORD *)(v34 + 96) == v50 )
                        {
                          v56 = *(_QWORD **)(v34 + 112);
                          *v54 = v34 + 104;
                          v54[1] = v56;
                          if ( *v56 != v34 + 104 )
                            __fastfail(3u);
                          *v56 = v54;
                          *(_QWORD *)(v34 + 112) = v54;
                          ++*(_DWORD *)(v34 + 120);
                          *(_QWORD *)(v34 + 96) = v54;
                          KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 128), v55);
                        }
                        else
                        {
                          KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 128), v55);
                          ExFreePoolWithTag(v54, 0);
                        }
                        v50 = *(_QWORD *)(v34 + 96);
                        v57 = _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 16), 1u);
                        v52 = (v57 + 1 < 0) ^ __OFADD__(1, v57) | (v57 == -1);
                        v53 = v57 + 1;
                        if ( !v52 )
                          continue;
                      }
                      goto LABEL_96;
                    }
                    v66 = (__int64 *)(16LL * (v53 - 1) + v50 + 24);
                    v66[1] = v44;
                    *v66 = (8 * v45) ^ v94 & 7;
                    _InterlockedIncrement((volatile signed __int32 *)(v34 + 332));
                    if ( !v94 )
                      *(_QWORD *)(v34 + 408) = v66;
                  }
                }
                else
                {
                  _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 344), 0xFFFFFFFF);
                  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v34 + 400), 3, 0) )
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v34 + 368), DelayedWorkQueue);
                }
              }
            }
          }
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v34 + 336));
        }
      }
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v34 + 360));
    }
  }
  v24 = v99;
LABEL_99:
  v58 = *(_QWORD *)v24;
  _m_prefetchw((const void *)(*(_QWORD *)v24 + 64LL));
  v59 = *(_QWORD *)(v58 + 64);
  if ( (v97 ^ v59) >= 0xF )
  {
LABEL_102:
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v97, 0x746C6644u);
  }
  else
  {
    while ( 1 )
    {
      v60 = v59;
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v58 + 64), v59 + 1, v59);
      if ( v60 == v59 )
        break;
      if ( (v97 ^ v59) >= 0xF )
        goto LABEL_102;
    }
  }
  v7 = (_QWORD *)v91;
  v5 = (unsigned __int64)v92;
LABEL_104:
  v96 = MI_READ_PTE_LOCK_FREE(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v61 = MI_GET_PFN_FROM_PTE(&v96);
  v102 = 0;
  v62 = v61;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v62 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v102);
    while ( (*(_QWORD *)(v62 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_QWORD *)(v62 + 24) ^= (*(_QWORD *)(v62 + 24) ^ (*(_QWORD *)(v62 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v63 = MI_READ_PTE_LOCK_FREE(v5);
  if ( HIDWORD(v63) == 0xFFFFFFFF )
  {
    v64 = v111;
    v65 = 16 * ((v63 >> 5) & 0x1F);
  }
  else
  {
    v3 = 1;
    v65 = 16 * (((unsigned __int64)v9 >> 5) & 0x1F);
    if ( (v63 & 0x100) != 0 )
    {
      v3 = 3;
      v65 = v65 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
    }
    v64 = v111;
    if ( v111 && (v65 & 0x40) == 0 )
      v64 = 0LL;
  }
  v67 = a3;
  if ( (MiFlags & 0x10000) != 0 && a3 >= 0xFFFF800000000000uLL && (v65 & 0x20) != 0 )
  {
    PagePrivilege = MiGetPagePrivilege(v7, 0LL, 0LL);
    if ( (PagePrivilege & 1) != 0 )
    {
      v65 = v65 & 0xFFFFFFFFFFFFFE0FuLL | 0x30;
      v64 = 0LL;
    }
    else if ( (PagePrivilege & 8) != 0 )
    {
      v65 = v65 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
      v64 = 0LL;
    }
    else
    {
      v65 &= ~0x20uLL;
      if ( (v65 & 0x1F0) == 0 )
        v65 = v65 & 0xFFFFFFFFFFFFFE0FuLL | 0x10;
    }
    v67 = a3;
  }
  v69 = (v65 >> 4) & 7;
  v70 = *(_BYTE *)(v91 + 34);
  v90 = v70;
  v71 = v70 >> 6;
  if ( v70 >> 6 != 1 )
  {
    if ( v71 )
    {
      if ( v71 == 2 )
        v69 = (unsigned int)v69 | 0x18;
    }
    else
    {
      v69 = (unsigned int)v69 | 8;
    }
  }
  v72 = 0xFFFFF6FB7DBED000uLL;
  if ( v67 >= 0xFFFF800000000000uLL )
  {
    if ( (*(_BYTE *)(a1 + 216) & 7u) < 2 )
    {
      ValidKernelPte = MmProtectToPteMask[v69] ^ ((v100 << 12) ^ MmProtectToPteMask[v69]) & 0xFFFFFFFFF000LL | 0x21;
      if ( (unsigned __int64)(v92 + 0x12098000000LL) <= 0x3FFFFFFF )
        ValidKernelPte &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (unsigned __int64)v92 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && (unsigned __int64)v92 >= 0xFFFFF68000000000uLL
        || (unsigned __int64)v92 >= 0xFFFFF6FB40000000uLL
        && (unsigned __int64)v92 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
        || (unsigned __int64)v92 >= 0xFFFFF6FB7DA00000uLL
        && (unsigned __int64)v92 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
        || (unsigned __int64)v92 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v92 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
      {
        ValidKernelPte |= 4uLL;
      }
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v92) )
        ValidKernelPte |= 0x100uLL;
    }
    else
    {
      ValidKernelPte = MiMakeValidKernelPte(v100, v69, v5, 0xFFFFF6FB7DBED000uLL);
    }
    v70 = v90;
  }
  else
  {
    ValidKernelPte = MmProtectToPteMask[v69] & 0xFFFFFFFFFFFFFF7FuLL | (((16 * (v100 & 0xFFFFFFFFFLL)) | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
  }
  if ( v64 )
  {
    if ( ((v65 >> 4) & 5) != 5 )
    {
      ValidKernelPte |= 0x42uLL;
      v96 = ValidKernelPte;
      if ( (v70 & 0x10) == 0 && (*v105 & 0x400LL) == 0 && (unsigned int)MI_GET_PAGING_FILE_OFFSET(v105) )
      {
        v74 = 0LL;
        v75 = MiLockPageInline(v91);
        v76 = v91;
        v77 = *(_BYTE *)(v91 + 34);
        if ( (v77 & 0x10) == 0 && (*(_DWORD *)(v91 + 16) & 0x400LL) == 0 )
        {
          if ( (v77 & 8) == 0 )
          {
            v74 = MiCapturePageFileInfoInline(v91 + 16, 1LL, 0LL);
            v76 = v91;
          }
          *(_BYTE *)(v76 + 34) |= 0x10u;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v74 )
          MiReleasePageFileInfo(v103, v74, 1LL);
        __writecr8(v75);
        ValidKernelPte = v96;
      }
    }
  }
  v78 = 0;
  v95 = 0;
  *(_QWORD *)v98 = 0LL;
  if ( (_DWORD)v112 )
    goto LABEL_200;
  if ( (v9 & 0x400) == 0 )
  {
    v79 = a3;
    if ( a3 >= 0xFFFF800000000000uLL )
      goto LABEL_174;
LABEL_200:
    v85 = v92;
    v86 = v91;
    goto LABEL_201;
  }
  *(_QWORD *)v98 = *(_QWORD *)(v9 >> 16);
  if ( (*(_DWORD *)(*(_QWORD *)v98 + 56LL) & 0x20) == 0 )
    goto LABEL_200;
  v79 = a3;
  if ( a3 >= 0xFFFF800000000000uLL )
  {
LABEL_174:
    HasPrivateFixups = MiSystemImageHasPrivateFixups(v79, v98, &v95, v72);
    goto LABEL_175;
  }
  if ( !MEMORY[0xFFFFF580108042B8] )
    goto LABEL_200;
  Address = MiLocateAddress(a3);
  v81 = Address;
  if ( !Address )
    goto LABEL_200;
  v82 = *(_DWORD *)(Address + 48);
  if ( (v82 & 7) != 2 )
    goto LABEL_200;
  if ( (v82 & 0x10000) == 0 )
    goto LABEL_200;
  v83 = **(_QWORD **)(v81 + 72);
  if ( !_bittest(
          *(const signed __int32 **)(v81 + 152),
          (a3 >> 12) + ((__int64)(*(_QWORD *)(v81 + 80) - *(_QWORD *)(v83 + 128)) >> 3) - *(_DWORD *)(v81 + 24)) )
    goto LABEL_200;
  HasPrivateFixups = *(_QWORD *)(v81 + 136);
  v95 = (a3 >> 12) + ((__int64)(*(_QWORD *)(v81 + 80) - *(_QWORD *)(v83 + 128)) >> 3) - *(_DWORD *)(v81 + 24);
  *(_QWORD *)v98 = v83;
LABEL_175:
  if ( !HasPrivateFixups )
    goto LABEL_200;
  v78 = MiPrivateFixup(v98[0], v95, v91, v79, HasPrivateFixups, (PEX_SPIN_LOCK)a1, a2);
  MiLockAndDecrementShareCount(v91, 0);
  if ( v78 == 297 || v78 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v62, 0);
    if ( v78 == 297 )
      return (unsigned int)-1073740748;
    return v78;
  }
  if ( (v78 & 0x80000000) != 0 )
    return v78;
  v85 = v92;
  ValidKernelPte = MmProtectToPteMask[(*v92 >> 5) & 0x1FLL] ^ (*v92 ^ MmProtectToPteMask[(*v92 >> 5) & 0x1FLL]) & 0xFFFFFFFFF000LL | 0x21;
  v96 = ValidKernelPte;
  if ( (unsigned __int64)(v92 + 0x12098000000LL) <= 0x3FFFFFFF )
  {
    ValidKernelPte &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
    v96 = ValidKernelPte;
  }
  if ( (unsigned __int64)v92 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
    && (unsigned __int64)v92 >= 0xFFFFF68000000000uLL
    || (unsigned __int64)v92 >= 0xFFFFF6FB40000000uLL
    && (unsigned __int64)v92 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
    || (unsigned __int64)v92 >= 0xFFFFF6FB7DA00000uLL
    && (unsigned __int64)v92 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
    || (unsigned __int64)v92 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v92 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
  {
    ValidKernelPte |= 4uLL;
    v96 = ValidKernelPte;
  }
  if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v92) )
  {
    ValidKernelPte |= 0x100uLL;
    v96 = ValidKernelPte;
  }
  v86 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v96) - 0x58000000000LL;
  v91 = v86;
  if ( a3 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v86 + 35) & 8) != 0 )
  {
    *v92 = ValidKernelPte;
    if ( (unsigned int)MiPteInShadowRange(v92) )
      MiWritePteShadow(v92, ValidKernelPte);
    return v78;
  }
  LODWORD(v65) = 0;
  v3 = v3 & 0xFA | 4;
LABEL_201:
  if ( (v3 & 1) != 0 )
    LODWORD(v65) = v65 & 0xFFFFFE0F;
  if ( (v113 & 1) == 0 || (v87 = v113 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL) != 5) )
    v87 = 0LL;
  if ( !MiAllocateWsle(a1, v85, v86, (unsigned int)v65, ValidKernelPte, v87) )
  {
    MiLockAndDecrementShareCount(v91, 0);
    if ( (v3 & 4) == 0 )
      MiLockAndDecrementShareCount(v62, 0);
    return (unsigned int)-1073741801;
  }
  if ( !v64 )
    return v78;
  if ( (ValidKernelPte & 0x800) != 0 )
    return v78;
  if ( (ValidKernelPte & 0x200) == 0 )
    return v78;
  if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
    return v78;
  v88 = (unsigned int)MiCopyOnWriteEx(a3, 0) == 0;
  result = 3221225495LL;
  if ( !v88 )
    return v78;
  return result;
}
