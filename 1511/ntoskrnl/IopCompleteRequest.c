/*
 * XREFs of IopCompleteRequest @ 0x140086090
 * Callers:
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     IopAbortRequest @ 0x1405F7080 (IopAbortRequest.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x1400205A0 (KiRequestSoftwareInterrupt.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KeInitializeApc @ 0x14002C320 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1400313A0 (KeInsertQueueApc.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140038DE0 (KxWaitForSpinLockAndAcquire.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiAbProcessContextSwitch @ 0x140083550 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeInsertQueueEx @ 0x140093534 (KeInsertQueueEx.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     IopDequeueIrpFromFileObject @ 0x1400DF8B4 (IopDequeueIrpFromFileObject.c)
 *     IopUpdateWriteTransferCount @ 0x1400E30A4 (IopUpdateWriteTransferCount.c)
 *     sub_1400EB8E0 @ 0x1400EB8E0 (sub_1400EB8E0.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x14015A8A0 (KiSwapContext.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     IopExceptionFilter @ 0x1401B71BC (IopExceptionFilter.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401C4B24 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401C4BD4 (KiReleaseSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

int __fastcall IopCompleteRequest(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4, _QWORD *a5)
{
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v7; // rsi
  int v8; // eax
  struct _MDL *v9; // rdi
  __int64 v10; // r15
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // edi
  struct _KPRCB *v15; // r12
  int v16; // eax
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r11
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  struct _KTHREAD *v25; // rax
  unsigned __int8 v26; // di
  volatile signed __int32 *v27; // rcx
  _QWORD *v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  volatile signed __int64 *v31; // rcx
  unsigned __int64 v32; // rax
  int v33; // ecx
  __int64 v34; // rdx
  __int64 BugCheckParameter4; // rax
  signed __int64 v36; // rax
  bool v37; // cc
  struct _MDL *Next; // r15
  __int64 v39; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _GENERAL_LOOKASIDE *P; // r8
  __int64 v42; // rdx
  int v43; // ecx
  struct _KPRCB *v44; // r12
  int v45; // eax
  _QWORD *v46; // r12
  _QWORD *v47; // rax
  __int64 v48; // rcx
  int v49; // eax
  volatile signed __int32 *v50; // rdi
  unsigned __int8 v51; // r12
  _QWORD *v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rcx
  unsigned __int64 v58; // rcx
  struct _KTHREAD *v59; // rax
  void *v60; // rcx
  struct _KEVENT *v61; // rcx
  __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // rdx
  __int64 v65; // r8
  _KTHREAD *NextThread; // rdi
  __int64 v67; // r8
  int v68; // r8d
  __int64 v69; // rdx
  __int64 v70; // r8
  _KTHREAD *v71; // rdi
  __int64 v72; // r8
  __int64 v73; // rdx
  __int64 v74; // rcx
  char v75; // al
  __int64 v76; // rdx
  __int64 v77; // rcx
  char v78; // al
  _QWORD *v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rcx
  char v82; // cl
  volatile signed __int32 *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  char v86; // al
  bool v87; // zf
  __int64 v88; // r8
  unsigned __int8 v89; // al
  unsigned __int8 v90; // al
  _QWORD *v91; // rax
  __int64 v92; // rdi
  _QWORD *v93; // rcx
  _QWORD *v94; // rax
  char v95; // al
  unsigned __int8 v96; // al
  __int64 v97; // rcx
  char v98; // al
  __int64 v99; // r8
  unsigned __int8 IsThreadRunning; // al
  unsigned __int8 v102; // [rsp+40h] [rbp-A8h]
  __int64 v103; // [rsp+40h] [rbp-A8h]
  __int64 v104; // [rsp+40h] [rbp-A8h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-A0h]
  __int64 v106; // [rsp+48h] [rbp-A0h]
  __int64 v107; // [rsp+48h] [rbp-A0h]
  struct _KPRCB *v108; // [rsp+50h] [rbp-98h]
  _QWORD *v109; // [rsp+50h] [rbp-98h]
  __int64 v110; // [rsp+50h] [rbp-98h]
  _KTHREAD *v111; // [rsp+58h] [rbp-90h]
  _KTHREAD *v112; // [rsp+58h] [rbp-90h]
  _KTHREAD *v113; // [rsp+58h] [rbp-90h]
  _QWORD *v114; // [rsp+60h] [rbp-88h]
  _QWORD *v115; // [rsp+60h] [rbp-88h]
  struct _KPRCB *v116; // [rsp+70h] [rbp-78h]
  _QWORD *v117; // [rsp+70h] [rbp-78h]
  struct _KPRCB *v118; // [rsp+70h] [rbp-78h]
  _QWORD *v119; // [rsp+70h] [rbp-78h]
  struct _KPRCB *v120; // [rsp+78h] [rbp-70h]
  _QWORD *v121; // [rsp+78h] [rbp-70h]
  struct _KPRCB *v122; // [rsp+78h] [rbp-70h]
  _QWORD *v123; // [rsp+80h] [rbp-68h]
  int v124; // [rsp+88h] [rbp-60h] BYREF
  int v125; // [rsp+8Ch] [rbp-5Ch] BYREF
  int v126; // [rsp+90h] [rbp-58h] BYREF
  __int64 v127; // [rsp+98h] [rbp-50h]
  void *retaddr; // [rsp+E8h] [rbp+0h]
  __int64 v129; // [rsp+F0h] [rbp+8h]
  int v130; // [rsp+F0h] [rbp+8h]
  __int64 v131; // [rsp+F0h] [rbp+8h]
  bool v132; // [rsp+100h] [rbp+18h]
  int v133; // [rsp+108h] [rbp+20h] BYREF

  v5 = a1 - 120;
  CurrentThread = KeGetCurrentThread();
  v7 = *a4;
  v132 = a3 && *(_QWORD *)a3 == 1LL;
  v8 = *(_DWORD *)(v5 + 16);
  if ( (v8 & 0x80u) != 0 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
    *(_QWORD *)(v5 + 160) = *a5;
    LODWORD(BugCheckParameter4) = KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
    return BugCheckParameter4;
  }
  if ( (v8 & 0x10) != 0 )
  {
    if ( (v8 & 0x40) != 0 )
    {
      v49 = *(_DWORD *)(v5 + 48);
      if ( v49 != -2147483626 && (v49 & 0xC0000000) != 0xC0000000 )
        memmove(*(void **)(v5 + 112), *(const void **)(v5 + 24), *(_QWORD *)(v5 + 56));
    }
    if ( (*(_DWORD *)(v5 + 16) & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v5 + 24), 0);
  }
  *(_DWORD *)(v5 + 16) &= 0xFFFFFFCF;
  v9 = *(struct _MDL **)(v5 + 8);
  if ( v9 )
  {
    do
    {
      Next = v9->Next;
      if ( (v9->MdlFlags & 0x20) != 0 )
        MmUnmapLockedPages(v9->MappedSystemVa, v9);
      if ( (v9->MdlFlags & 8) != 0 )
      {
        v39 = *((unsigned __int16 *)&v9->MdlFlags + 1);
        if ( (unsigned int)v39 >= (unsigned int)KeNumberProcessors_0 )
        {
          CurrentPrcb = 0LL;
        }
        else
        {
          _mm_lfence();
          CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v39];
        }
        if ( !CurrentPrcb )
          CurrentPrcb = KeGetCurrentPrcb();
        P = CurrentPrcb->PPLookasideList[3].P;
        ++P->TotalFrees;
        if ( LOWORD(P->ListHead.Alignment) < P->Depth
          || (++P->FreeMisses,
              P = CurrentPrcb->PPLookasideList[3].L,
              ++P->TotalFrees,
              LOWORD(P->ListHead.Alignment) < P->Depth) )
        {
          RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v9);
        }
        else
        {
          ++P->FreeMisses;
          ((void (__fastcall *)(struct _MDL *))P->FreeEx)(v9);
        }
      }
      else
      {
        ExFreePoolWithTag(v9, 0);
      }
      v9 = Next;
    }
    while ( Next );
  }
  *(_QWORD *)(v5 + 8) = 0LL;
  if ( (*(_DWORD *)(v5 + 48) & 0xC0000000) != 0xC0000000 )
  {
LABEL_11:
    v10 = 0LL;
    v127 = 0LL;
    if ( v7 )
    {
      v11 = *(__int64 **)(v7 + 176);
      if ( v11 )
      {
        v10 = *v11;
        v127 = v11[1];
      }
    }
    v12 = *(_QWORD *)(v5 + 72);
    if ( (*(_BYTE *)(v5 + 71) & 0x10) != 0 )
      *(_DWORD *)(v12 + 4) = *(_DWORD *)(v5 + 56);
    else
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v5 + 56);
    *(_DWORD *)v12 = *(_DWORD *)(v5 + 48);
    v13 = *(_QWORD *)(v5 + 80);
    if ( !v13 )
    {
      if ( !v7 )
        goto LABEL_35;
      if ( (*(_DWORD *)(v7 + 80) & 0x4000000) != 0 )
        goto LABEL_34;
      if ( (*(_BYTE *)(v7 + 152) & 0x7F) != 0 )
      {
        v14 = 0;
      }
      else
      {
        if ( *(_DWORD *)(v7 + 156) == 1 )
          goto LABEL_34;
        v14 = 1;
      }
      CurrentIrql = KeGetCurrentIrql();
      a3 = 2LL;
      __writecr8(2uLL);
      v15 = KeGetCurrentPrcb();
      v125 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v125, a2, a3);
          while ( (*(_DWORD *)(v7 + 152) & 0x80u) != 0 );
        }
        while ( _interlockedbittestandset((volatile signed __int32 *)(v7 + 152), 7u) );
        a3 = 2LL;
      }
      v16 = *(_DWORD *)(v7 + 156);
      *(_DWORD *)(v7 + 156) = 1;
      if ( !v16 )
      {
        if ( v14 )
        {
          v17 = (_QWORD *)(v7 + 160);
          v18 = *(_QWORD **)(v7 + 160);
          if ( v18 == (_QWORD *)(v7 + 160) )
          {
LABEL_27:
            *(_QWORD *)(v7 + 168) = v7 + 160;
            *v17 = v17;
            goto LABEL_28;
          }
          while ( 1 )
          {
            v109 = v18;
            v117 = (_QWORD *)*v18;
            v76 = *((unsigned __int8 *)v18 + 16);
            if ( (_BYTE)v76 == 1 )
              break;
            if ( (_BYTE)v76 != 2 )
            {
              v99 = 256LL;
              goto LABEL_290;
            }
            *((_BYTE *)v18 + 17) = 5;
            v103 = v18[3];
            *v18 = 0LL;
            __writecr8(2uLL);
            v120 = KeGetCurrentPrcb();
            v112 = v120->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v120->CurrentThread);
              EtwTraceEnqueueWork(v112, v109, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v103, v76, a3);
            v77 = v103;
            if ( *(_QWORD *)(v103 + 16) == v103 + 8
              || *(_DWORD *)(v103 + 40) >= *(_DWORD *)(v103 + 44)
              || v112->Queue == (_DISPATCHER_HEADER *volatile)v103 && v112->WaitReason == 15 )
            {
              v78 = 0;
            }
            else
            {
              v78 = KiWakeQueueWaiter((__int64)v120, v103, (__int64)v109);
              v77 = v103;
            }
            if ( !v78 )
            {
              ++*(_DWORD *)(v77 + 4);
              a3 = *(_QWORD *)(v77 + 32);
              *v109 = v77 + 24;
              v109[1] = a3;
              if ( *(_QWORD *)a3 != v77 + 24 )
                __fastfail(3u);
              *(_QWORD *)a3 = v109;
              *(_QWORD *)(v77 + 32) = v109;
            }
            _InterlockedAnd((volatile signed __int32 *)v77, 0xFFFFFF7F);
LABEL_210:
            v18 = v117;
            if ( v117 == v17 )
              goto LABEL_27;
            a3 = 2LL;
          }
          v99 = *((unsigned __int16 *)v18 + 9);
LABEL_290:
          KiTryUnwaitThread(v15, v18, v99, 0LL);
          goto LABEL_210;
        }
        v91 = *(_QWORD **)(v7 + 160);
        if ( v91 != (_QWORD *)(v7 + 160) )
        {
          while ( 1 )
          {
            v92 = (__int64)v91;
            v119 = (_QWORD *)*v91;
            v93 = (_QWORD *)*v91;
            v94 = (_QWORD *)v91[1];
            if ( v93[1] != v92 || *v94 != v92 )
              __fastfail(3u);
            *v94 = v93;
            v93[1] = v94;
            v95 = *(_BYTE *)(v92 + 16);
            if ( v95 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(v15, v92, *(unsigned __int16 *)(v92 + 18), 0LL) )
              {
                v87 = (*(_DWORD *)(v7 + 156))-- == 1;
                if ( v87 )
                  break;
              }
            }
            else if ( v95 == 2 )
            {
              *(_BYTE *)(v92 + 17) = 5;
              v104 = *(_QWORD *)(v92 + 24);
              *(_QWORD *)v92 = 0LL;
              __writecr8(2uLL);
              v122 = KeGetCurrentPrcb();
              v113 = v122->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                v96 = KeIsThreadRunning(v122->CurrentThread);
                EtwTraceEnqueueWork(v113, v92, v96);
              }
              KiAcquireKobjectLockSafe((volatile signed __int32 *)v104, a2, a3);
              v97 = v104;
              if ( *(_QWORD *)(v104 + 16) == v104 + 8
                || *(_DWORD *)(v104 + 40) >= *(_DWORD *)(v104 + 44)
                || (a2 = (__int64)v113, v113->Queue == (_DISPATCHER_HEADER *volatile)v104) && v113->WaitReason == 15 )
              {
                v98 = 0;
              }
              else
              {
                v98 = KiWakeQueueWaiter((__int64)v122, v104, v92);
                v97 = v104;
              }
              if ( !v98 )
              {
                ++*(_DWORD *)(v97 + 4);
                a2 = *(_QWORD *)(v97 + 32);
                *(_QWORD *)v92 = v97 + 24;
                *(_QWORD *)(v92 + 8) = a2;
                if ( *(_QWORD *)a2 != v97 + 24 )
                  __fastfail(3u);
                *(_QWORD *)a2 = v92;
                *(_QWORD *)(v97 + 32) = v92;
              }
              _InterlockedAnd((volatile signed __int32 *)v97, 0xFFFFFF7F);
              v87 = (*(_DWORD *)(v7 + 156))-- == 1;
              if ( v87 )
                break;
            }
            else
            {
              KiTryUnwaitThread(v15, v92, 256LL, 0LL);
            }
            v91 = v119;
            if ( v119 == (_QWORD *)(v7 + 160) )
              break;
            a3 = 2LL;
          }
        }
      }
LABEL_28:
      _InterlockedAnd((volatile signed __int32 *)(v7 + 152), 0xFFFFFF7F);
      if ( v15->DeferredReadyListHead.Next )
        KiProcessThreadWaitList(v15, 1LL, 0LL);
      if ( CurrentIrql >= 2u )
      {
        if ( v15->NextThread && !v15->DpcRoutineActive )
          KiRequestSoftwareInterrupt(v15, 2u);
        goto LABEL_34;
      }
      v19 = (__int64)v15->CurrentThread;
      v129 = v19;
      if ( v15->NextThread )
      {
        KiAbProcessContextSwitch(v19, 0);
        v124 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v124, v64, v65);
          while ( v15->PrcbLock );
        }
        NextThread = v15->NextThread;
        v15->NextThread = 0LL;
        _disable();
        KiEndThreadCycleAccumulation((__int64)v15, v129, 0LL);
        _enable();
        v15->CurrentThread = NextThread;
        NextThread->WaitBlockFill6[68] = 2;
        *(_BYTE *)(v129 + 643) = 32;
        *(_BYTE *)(v129 + 390) = CurrentIrql;
        KiQueueReadyThread(v15, v129, v67);
        if ( !(unsigned __int8)KiSwapContext(v129, NextThread, CurrentIrql) )
          goto LABEL_33;
        __writecr8(1uLL);
        *(_DWORD *)(v129 + 116) &= ~0x40u;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 116) & 0x40) == 0 )
        {
LABEL_33:
          __writecr8(CurrentIrql);
          goto LABEL_34;
        }
        __writecr8(1uLL);
        *(_DWORD *)(v19 + 116) &= ~0x40u;
      }
      KiDeliverApc(0, 0LL, 0LL);
      goto LABEL_33;
    }
    if ( (*(_BYTE *)v13 & 0x7F) != 0 )
    {
      v43 = 0;
      v130 = 0;
      v42 = 1LL;
    }
    else
    {
      if ( *(_DWORD *)(v13 + 4) == 1 )
        goto LABEL_92;
      v42 = 1LL;
      v43 = 1;
      v130 = 1;
    }
    v102 = KeGetCurrentIrql();
    a3 = 2LL;
    __writecr8(2uLL);
    v44 = KeGetCurrentPrcb();
    v108 = v44;
    v133 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v133, v42, a3);
        while ( (*(_DWORD *)v13 & 0x80u) != 0 );
      }
      while ( _interlockedbittestandset((volatile signed __int32 *)v13, 7u) );
      v43 = v130;
      a3 = 2LL;
    }
    v45 = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v13 + 4) = 1;
    if ( !v45 )
    {
      if ( v43 )
      {
        v46 = (_QWORD *)(v13 + 8);
        v47 = *(_QWORD **)(v13 + 8);
        if ( v47 == (_QWORD *)(v13 + 8) )
        {
LABEL_85:
          *(_QWORD *)(v13 + 16) = v13 + 8;
          *v46 = v46;
          v44 = v108;
          goto LABEL_86;
        }
        while ( 1 )
        {
          v114 = v47;
          v123 = (_QWORD *)*v47;
          v73 = *((unsigned __int8 *)v47 + 16);
          if ( (_BYTE)v73 == 1 )
            break;
          if ( (_BYTE)v73 != 2 )
          {
            v88 = 256LL;
            goto LABEL_244;
          }
          *((_BYTE *)v47 + 17) = 5;
          v106 = v47[3];
          *v47 = 0LL;
          __writecr8(2uLL);
          v116 = KeGetCurrentPrcb();
          v111 = v116->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v90 = KeIsThreadRunning(v116->CurrentThread);
            EtwTraceEnqueueWork(v111, v114, v90);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v106, v73, a3);
          v74 = v106;
          if ( *(_QWORD *)(v106 + 16) == v106 + 8
            || *(_DWORD *)(v106 + 40) >= *(_DWORD *)(v106 + 44)
            || v111->Queue == (_DISPATCHER_HEADER *volatile)v106 && v111->WaitReason == 15 )
          {
            v75 = 0;
          }
          else
          {
            v75 = KiWakeQueueWaiter((__int64)v116, v106, (__int64)v114);
            v74 = v106;
          }
          if ( !v75 )
          {
            ++*(_DWORD *)(v74 + 4);
            a3 = *(_QWORD *)(v74 + 32);
            *v114 = v74 + 24;
            v114[1] = a3;
            if ( *(_QWORD *)a3 != v74 + 24 )
              __fastfail(3u);
            *(_QWORD *)a3 = v114;
            *(_QWORD *)(v74 + 32) = v114;
          }
          _InterlockedAnd((volatile signed __int32 *)v74, 0xFFFFFF7F);
LABEL_194:
          v47 = v123;
          if ( v123 == v46 )
            goto LABEL_85;
          a3 = 2LL;
        }
        v88 = *((unsigned __int16 *)v47 + 9);
LABEL_244:
        KiTryUnwaitThread(v108, v47, v88, 0LL);
        goto LABEL_194;
      }
      v57 = *(_QWORD **)(v13 + 8);
      if ( v57 != (_QWORD *)(v13 + 8) )
      {
        while ( 1 )
        {
          v79 = v57;
          v115 = v57;
          v121 = (_QWORD *)*v57;
          v80 = *v57;
          v81 = (_QWORD *)v57[1];
          if ( *(_QWORD **)(v80 + 8) != v79 || (_QWORD *)*v81 != v79 )
            __fastfail(3u);
          *v81 = v80;
          *(_QWORD *)(v80 + 8) = v81;
          v82 = *((_BYTE *)v79 + 16);
          if ( v82 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(v44, v79, *((unsigned __int16 *)v79 + 9), 0LL) )
            {
              v87 = (*(_DWORD *)(v13 + 4))-- == 1;
              if ( v87 )
                break;
            }
          }
          else if ( v82 == 2 )
          {
            *((_BYTE *)v79 + 17) = 5;
            v107 = v79[3];
            v83 = (volatile signed __int32 *)v107;
            *v79 = 0LL;
            __writecr8(2uLL);
            v118 = KeGetCurrentPrcb();
            v84 = (__int64)v118->CurrentThread;
            v110 = v84;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              v89 = KeIsThreadRunning(v84);
              EtwTraceEnqueueWork(v110, v115, v89);
              v83 = (volatile signed __int32 *)v107;
            }
            KiAcquireKobjectLockSafe(v83, v84, a3);
            v85 = v107;
            if ( *(_QWORD *)(v107 + 16) == v107 + 8
              || *(_DWORD *)(v107 + 40) >= *(_DWORD *)(v107 + 44)
              || *(_QWORD *)(v110 + 232) == v107 && *(_BYTE *)(v110 + 643) == 15 )
            {
              v86 = 0;
            }
            else
            {
              v86 = KiWakeQueueWaiter((__int64)v118, v107, (__int64)v115);
              v85 = v107;
            }
            if ( !v86 )
            {
              ++*(_DWORD *)(v85 + 4);
              a3 = *(_QWORD *)(v85 + 32);
              *v115 = v85 + 24;
              v115[1] = a3;
              if ( *(_QWORD *)a3 != v85 + 24 )
                __fastfail(3u);
              *(_QWORD *)a3 = v115;
              *(_QWORD *)(v85 + 32) = v115;
            }
            _InterlockedAnd((volatile signed __int32 *)v85, 0xFFFFFF7F);
            v87 = (*(_DWORD *)(v13 + 4))-- == 1;
            if ( v87 )
              break;
          }
          else
          {
            KiTryUnwaitThread(v44, v79, 256LL, 0LL);
          }
          v57 = v121;
          if ( v121 == (_QWORD *)(v13 + 8) )
            break;
          a3 = 2LL;
        }
      }
    }
LABEL_86:
    _InterlockedAnd((volatile signed __int32 *)v13, 0xFFFFFF7F);
    if ( v44->DeferredReadyListHead.Next )
      KiProcessThreadWaitList(v44, 1LL, 0LL);
    if ( v102 >= 2u )
    {
      if ( v44->NextThread && !v44->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v44, 2u);
      goto LABEL_92;
    }
    v48 = (__int64)v44->CurrentThread;
    v131 = v48;
    if ( v44->NextThread )
    {
      KiAbProcessContextSwitch(v48, 0);
      v126 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v44->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v126, v69, v70);
        while ( v44->PrcbLock );
      }
      v71 = v44->NextThread;
      v44->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v44, v131, 0LL);
      _enable();
      v44->CurrentThread = v71;
      v71->WaitBlockFill6[68] = 2;
      *(_BYTE *)(v131 + 643) = 32;
      *(_BYTE *)(v131 + 390) = v102;
      KiQueueReadyThread(v44, v131, v72);
      if ( !(unsigned __int8)KiSwapContext(v131, v71, v102) )
        goto LABEL_91;
      __writecr8(1uLL);
      *(_DWORD *)(v131 + 116) &= ~0x40u;
    }
    else
    {
      if ( (*(_DWORD *)(v48 + 116) & 0x40) == 0 )
      {
LABEL_91:
        __writecr8(v102);
LABEL_92:
        if ( !v7 )
          goto LABEL_35;
        if ( (*(_DWORD *)(v5 + 16) & 4) == 0 )
          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 80), 0x746C6644u);
        if ( (*(_BYTE *)(v7 + 80) & 2) == 0 || (*(_DWORD *)(v5 + 16) & 0x1000) != 0 )
        {
LABEL_35:
          v20 = 2LL;
          v21 = *(_DWORD *)(v5 + 16);
          if ( (v21 & 0x2000) != 0 )
            v22 = *(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL;
          else
            v22 = 0LL;
          if ( (v21 & 0x100) != 0 )
          {
            v58 = *(unsigned int *)(v5 + 56);
            if ( v22 )
            {
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), v58);
            }
            else
            {
              v59 = KeGetCurrentThread();
              v59->ReadTransferCount += v58;
            }
            __addgsqword(0x2E68u, v58);
          }
          else if ( (v21 & 0x200) != 0 )
          {
            IopUpdateWriteTransferCount(*(unsigned int *)(v5 + 56), v22);
          }
          else
          {
            v23 = *(_QWORD *)(v5 + 56);
            if ( v23 >= 0 )
            {
              v24 = (unsigned int)v23;
              if ( v22 )
              {
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1248), (unsigned int)v23);
              }
              else
              {
                v25 = KeGetCurrentThread();
                v25->OtherTransferCount += v24;
              }
              __addgsqword(0x2E78u, v24);
            }
          }
          if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
          {
            v50 = (volatile signed __int32 *)(v7 + 184);
            v51 = KeGetCurrentIrql();
            __writecr8(v20);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v7 + 184);
            }
            else if ( _interlockedbittestandset64(v50, 0LL) )
            {
              KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v7 + 184), v22, a3);
            }
            v52 = (_QWORD *)(v5 + 32);
            v53 = *(_QWORD *)(v5 + 32);
            v54 = *(_QWORD **)(v5 + 40);
            if ( *(_QWORD *)(v53 + 8) != v5 + 32 || (_QWORD *)*v54 != v52 )
              __fastfail(3u);
            *v54 = v53;
            *(_QWORD *)(v53 + 8) = v54;
            *(_QWORD *)(v5 + 40) = v5 + 32;
            *v52 = v52;
            ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
            *(_DWORD *)(v5 + 16) = *(_DWORD *)(v5 + 16) & 0xFFFF5FFF | 0x8000;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(v7 + 184, retaddr);
            else
              _InterlockedAnd64((volatile signed __int64 *)v50, 0LL);
            v32 = v51;
          }
          else
          {
            *(_QWORD *)(v5 + 152) = CurrentThread;
            v26 = 0;
            if ( CurrentThread )
            {
              v27 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill11[16];
              v26 = KeGetCurrentIrql();
              __writecr8(v20);
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireSpinLockInstrumented(v27);
              }
              else if ( _interlockedbittestandset64(v27, 0LL) )
              {
                KxWaitForSpinLockAndAcquire(v27, v22, a3);
              }
            }
            v28 = (_QWORD *)(v5 + 32);
            v29 = *(_QWORD *)(v5 + 32);
            v30 = *(_QWORD **)(v5 + 40);
            if ( *(_QWORD *)(v29 + 8) != v5 + 32 || (_QWORD *)*v30 != v28 )
              __fastfail(3u);
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            *(_QWORD *)(v5 + 40) = v5 + 32;
            *v28 = v28;
            if ( !CurrentThread )
              goto LABEL_55;
            v31 = (volatile signed __int64 *)&CurrentThread[1].WaitBlockFill11[16];
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(v31, retaddr);
            else
              _InterlockedAnd64(v31, 0LL);
            v32 = v26;
          }
          __writecr8(v32);
LABEL_55:
          v33 = *(_DWORD *)(v5 + 16) & 0x8000;
          if ( !v33 && (*(_QWORD *)(v5 + 88) &= ~1uLL, (v34 = *(_QWORD *)(v5 + 88)) != 0) )
          {
            if ( v132 )
              v68 = *(char *)(v5 + 70);
            else
              v68 = 2;
            KeInitializeApc(
              v5 + 120,
              (__int64)CurrentThread,
              v68,
              (__int64)IopUserRundown,
              (__int64)IopUserRundown,
              v34,
              *(_BYTE *)(v5 + 64),
              *(_QWORD *)(v5 + 96));
            LODWORD(BugCheckParameter4) = KeInsertQueueApc(v5 + 120, *(_QWORD *)(v5 + 72), 0LL, 2);
          }
          else if ( v10
                 && *(_QWORD *)(v5 + 96)
                 && ((*(_DWORD *)(v7 + 80) & 0x2000000) == 0
                  || *(_BYTE *)(v5 + 65)
                  || (*(_DWORD *)(v5 + 48) & 0xC0000000) == 0x80000000) )
          {
            v62 = 0LL;
            v63 = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 72LL);
            if ( v63 == 8 || v63 == 20 )
              v62 = 1LL;
            *(_QWORD *)(v5 + 120) = v127;
            *(_DWORD *)(v5 + 184) = 0;
            LODWORD(BugCheckParameter4) = KeInsertQueueEx(v10, v5 + 168, v62, 0LL);
          }
          else
          {
            if ( !v33 )
              goto LABEL_59;
            BugCheckParameter4 = *(_QWORD *)(v5 + 88);
            do
            {
              v55 = BugCheckParameter4;
              v56 = (((unsigned __int64)BugCheckParameter4 >> 1) & 3) - 1;
              BugCheckParameter4 = _InterlockedCompareExchange64(
                                     (volatile signed __int64 *)(v5 + 88),
                                     BugCheckParameter4 & 0xFFFFFFFFFFFFFFF9uLL | (2 * v56),
                                     BugCheckParameter4);
            }
            while ( v55 != BugCheckParameter4 );
            if ( !(_DWORD)v56 )
LABEL_59:
              LODWORD(BugCheckParameter4) = pIoFreeIrp(v5);
          }
          if ( v7 )
          {
            if ( ObpTraceFlags )
              ObpPushStackInfo(v7 - 48);
            v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 - 48), 0xFFFFFFFFFFFFFFFFuLL);
            v37 = v36 <= 1;
            BugCheckParameter4 = v36 - 1;
            if ( v37 )
            {
              if ( *(_QWORD *)(v7 - 40) )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v7 - 48) >> 8)],
                  v7,
                  3uLL,
                  *(_QWORD *)(v7 - 40));
              if ( BugCheckParameter4 < 0 )
                KeBugCheckEx(0x18u, 0LL, v7, 4uLL, BugCheckParameter4);
              LODWORD(BugCheckParameter4) = ObpDeferObjectDeletion(v7 - 48);
            }
          }
          return BugCheckParameter4;
        }
        KeSetEvent((PRKEVENT)(v7 + 152), 0, 0);
LABEL_34:
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
        goto LABEL_35;
      }
      __writecr8(1uLL);
      *(_DWORD *)(v48 + 116) &= ~0x40u;
    }
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_91;
  }
  a2 = *(unsigned __int8 *)(v5 + 65);
  if ( (_BYTE)a2 )
  {
    if ( (*(_DWORD *)(v5 + 16) & 4) == 0 && (!v7 || (*(_DWORD *)(v7 + 80) & 2) == 0) )
      goto LABEL_11;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v5 + 16) & 4) != 0 )
      {
        *(_OWORD *)*(_QWORD *)(v5 + 72) = *(_OWORD *)(v5 + 48);
        v61 = *(struct _KEVENT **)(v5 + 80);
        if ( v61 )
          goto LABEL_148;
      }
      else
      {
        *(_DWORD *)(v7 + 56) = *(_DWORD *)(v5 + 48);
      }
      v61 = (struct _KEVENT *)(v7 + 152);
LABEL_148:
      KeSetEvent(v61, 0, 0);
    }
  }
  if ( (*(_DWORD *)(v5 + 16) & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(v5, v7);
  if ( v7 )
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v7, 0x746C6644u);
  v60 = *(void **)(v5 + 80);
  if ( v60 && v7 && (*(_DWORD *)(v5 + 16) & 4) == 0 )
    ObfDereferenceObjectWithTag(v60, 0x746C6644u);
  if ( (*(_DWORD *)(v5 + 16) & 0x8000) != 0 )
  {
    LODWORD(BugCheckParameter4) = sub_1400EB8E0(v5 + 88, -1LL);
    if ( (_DWORD)BugCheckParameter4 )
      return BugCheckParameter4;
  }
  else
  {
    *(_QWORD *)(v5 + 152) = CurrentThread;
    IopDequeueIrpFromThread((_QWORD *)v5, a2, a3);
  }
  LODWORD(BugCheckParameter4) = pIoFreeIrp(v5);
  return BugCheckParameter4;
}
