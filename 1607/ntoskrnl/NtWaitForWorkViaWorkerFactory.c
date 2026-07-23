/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14005E490
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     IoRemoveIoCompletion @ 0x140069C60 (IoRemoveIoCompletion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A39E8 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400A7D50 (AlpcpReleaseDirectAttribute.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1400A96B0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x1400AAC18 (ExpWorkerFactoryWantsToCreate.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeRegisterObjectNotification @ 0x1400EBC20 (KeRegisterObjectNotification.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400F7920 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtAlpcSendWaitReceivePort @ 0x140448140 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     AlpciDestroyDeferredMessageContext @ 0x14044CA00 (AlpciDestroyDeferredMessageContext.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r12d
  char PreviousMode; // cl
  __int64 v9; // rcx
  KPROCESSOR_MODE v10; // bl
  int v11; // r14d
  char *v12; // rsi
  unsigned __int64 *volatile *v13; // r13
  unsigned __int64 *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v16; // rdx
  _DWORD *v17; // rdi
  _DWORD *v18; // rcx
  _KSPIN_LOCK_QUEUE *volatile v19; // rax
  HANDLE v20; // r12
  ULONG v21; // r15d
  HANDLE v22; // rcx
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r15d
  NTSTATUS v25; // eax
  _QWORD *v26; // rbx
  signed __int32 v27; // r14d
  volatile signed __int32 *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rsi
  struct _KEVENT *v31; // rcx
  __int64 v32; // r13
  ULONG *v33; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  int v35; // eax
  int v36; // ecx
  _QWORD *v37; // rax
  __int64 v38; // r12
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  char v41; // al
  __int64 v42; // rsi
  __int64 v43; // rdi
  char v44; // bl
  char v45; // al
  int v46; // ecx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  __int64 v52; // r10
  bool v53; // zf
  __int64 v54; // rbx
  _QWORD *v55; // rsi
  char v56; // r14
  struct _KPRCB *v57; // r15
  _KTHREAD *v58; // rdi
  unsigned __int8 IsThreadRunning; // al
  int v60; // r8d
  __int64 *v61; // rdx
  __int64 v62; // rbx
  volatile __int64 *v63; // r8
  unsigned __int8 v64; // cl
  _QWORD *v65; // rdx
  char v66; // al
  _DWORD *v67; // r12
  struct _KTHREAD *v68; // r15
  unsigned int v69; // ecx
  _QWORD *v70; // rbx
  struct _KTHREAD **v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdi
  PVOID *v74; // rbx
  unsigned __int64 *volatile v75; // rbx
  int v76; // edx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int HandleInformation; // [rsp+28h] [rbp-200h]
  int Timeout; // [rsp+38h] [rbp-1F0h]
  unsigned __int8 v81; // [rsp+40h] [rbp-1E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-1E0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-1C8h] BYREF
  ULONG v84; // [rsp+68h] [rbp-1C0h]
  ULONG v85; // [rsp+6Ch] [rbp-1BCh] BYREF
  struct _KPRCB *v86; // [rsp+70h] [rbp-1B8h]
  _DWORD *v87; // [rsp+78h] [rbp-1B0h]
  PVOID P; // [rsp+80h] [rbp-1A8h]
  PULONG v89; // [rsp+88h] [rbp-1A0h]
  PFILE_IO_COMPLETION_INFORMATION v90; // [rsp+90h] [rbp-198h]
  _DWORD *v91; // [rsp+98h] [rbp-190h]
  __int64 v92; // [rsp+A0h] [rbp-188h] BYREF
  PVOID v93; // [rsp+A8h] [rbp-180h]
  HANDLE Handle[2]; // [rsp+B0h] [rbp-178h]
  ULONG Flags[2]; // [rsp+C0h] [rbp-168h]
  int v96; // [rsp+C8h] [rbp-160h] BYREF
  int v97; // [rsp+CCh] [rbp-15Ch] BYREF
  int v98; // [rsp+D0h] [rbp-158h] BYREF
  PVOID v99; // [rsp+D8h] [rbp-150h] BYREF
  unsigned __int64 *volatile *v100; // [rsp+E0h] [rbp-148h]
  PULONG v101; // [rsp+E8h] [rbp-140h]
  PFILE_IO_COMPLETION_INFORMATION v102; // [rsp+F0h] [rbp-138h]
  PVOID v103; // [rsp+F8h] [rbp-130h]
  PVOID v104[3]; // [rsp+100h] [rbp-128h] BYREF
  __int64 v105; // [rsp+118h] [rbp-110h]
  __int64 v106; // [rsp+120h] [rbp-108h]
  __int64 v107; // [rsp+128h] [rbp-100h]
  __int64 v108; // [rsp+130h] [rbp-F8h]
  __int64 v109; // [rsp+138h] [rbp-F0h]
  _QWORD *v110; // [rsp+140h] [rbp-E8h]
  struct _KTHREAD *CurrentThread; // [rsp+148h] [rbp-E0h]
  PVOID v112; // [rsp+150h] [rbp-D8h]
  _BYTE v113[128]; // [rsp+160h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+228h] [rbp+0h]

  v101 = PacketsReturned;
  v6 = Count;
  v84 = Count;
  v102 = MiniPackets;
  v91 = WorkerFactoryHandle;
  v90 = MiniPackets;
  LODWORD(v86) = Count;
  v89 = PacketsReturned;
  v85 = 0;
  v103 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v81 = PreviousMode;
  P = v113;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v11 = -1073741811;
    goto LABEL_171;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v9 = (__int64)PacketsReturned;
    if ( (unsigned __int64)PacketsReturned >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > 0x7FFFFFFF0000LL || &DeferredWork[1] < DeferredWork )
      MEMORY[0x7FFFFFFF0000] = 0;
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  v10 = v81;
  v11 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, v81, &Object, 0LL);
  v12 = (char *)Object;
  v103 = Object;
  if ( v11 >= 0 )
  {
    if ( v6 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v6, 0x656E6F4Eu);
      if ( !P )
      {
        v6 = 16;
        v84 = 16;
        P = v113;
      }
    }
    v13 = (unsigned __int64 *volatile *)(v12 + 16);
    v100 = (unsigned __int64 *volatile *)(v12 + 16);
    v14 = (unsigned __int64 *)*((_QWORD *)v12 + 2);
    LockHandle.LockQueue.Lock = v14;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v14);
    }
    else
    {
      v16 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v14, (__int64)&LockHandle);
      if ( v16 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v16);
      v12 = (char *)Object;
    }
    if ( *((_BYTE *)*v13 + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v11 = 128;
      goto LABEL_171;
    }
    v90 = (PFILE_IO_COMPLETION_INFORMATION)(v12 + 152);
    if ( (*((_DWORD *)v12 + 38) & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(v12);
    ++*((_DWORD *)*v13 + 7);
    v17 = v12 + 128;
    v91 = v12 + 128;
    v18 = v12 + 124;
    v87 = v12 + 124;
    while ( 1 )
    {
      if ( *v18 < *v17 || *((_BYTE *)*v13 + 33) )
      {
        v11 = 258;
LABEL_143:
        --*((_DWORD *)*v13 + 7);
        if ( v11 == 258 )
        {
          --*v17;
          --*((_DWORD *)v12 + 33);
          ExpRemoveCurrentThreadFromThreadHistory(v12);
          v67 = v90;
        }
        else
        {
          v67 = v90;
          if ( ((__int64)v90->KeyContext & 7) != 4 )
          {
            v68 = KeGetCurrentThread();
            v69 = 0;
            v12 = (char *)Object;
            v70 = (char *)Object + 72;
            v71 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v71 != v68 )
            {
              ++v69;
              ++v71;
              if ( v69 >= 4 )
              {
                ObfReferenceObjectWithTag(v68, 0x746C6644u);
                v72 = 0LL;
                while ( *v70 )
                {
                  v72 = (unsigned int)(v72 + 1);
                  ++v70;
                  if ( (unsigned int)v72 >= 4 )
                  {
                    v73 = *v67 & 7;
                    v74 = (PVOID *)&v12[8 * v73];
                    ObfDereferenceObjectWithTag(v74[9], 0x746C6644u);
                    v74[9] = v68;
                    *v67 = *v67 & 0xFFFFFFF8 | ((_BYTE)v73 + 1) & 3;
                    goto LABEL_154;
                  }
                }
                *(_QWORD *)&v12[8 * v72 + 72] = v68;
                break;
              }
            }
          }
        }
LABEL_154:
        v75 = *v13;
        if ( *v91 < *v87 && !*((_DWORD *)v75 + 7) )
        {
          if ( *((_DWORD *)v12 + 37) )
          {
            v76 = *v67 | 0x200;
            *v67 = v76;
            if ( !*(_DWORD *)(v75[1] + 4) )
            {
              if ( (v76 & 0x400) == 0 )
              {
                *v67 = v76 | 0x400;
                ObfReferenceObjectWithTag(v12, 0x746C6644u);
                KeRegisterObjectNotification(v75[1], &ExpWorkerFactoryManagerQueue, v12 + 360);
              }
              goto LABEL_161;
            }
          }
          ExpWorkerFactoryCheckCreate(v12, &LockHandle);
LABEL_168:
          if ( !v11 )
            *v101 = v85;
          goto LABEL_171;
        }
LABEL_161:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_167:
          __writecr8(LockHandle.OldIrql);
          goto LABEL_168;
        }
        _m_prefetchw(&LockHandle);
        Next = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_167;
          Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
        goto LABEL_167;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_35;
      }
      _m_prefetchw(&LockHandle);
      v19 = LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_33;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
        break;
LABEL_34:
      v12 = (char *)Object;
LABEL_35:
      __writecr8(LockHandle.OldIrql);
      if ( (Flags[1] & 1) != 0 )
      {
        v20 = Handle[0];
        v21 = Flags[0];
        v22 = Handle[1];
        memset(v104, 0, sizeof(v104));
        v105 = 0LL;
        v106 = 0LL;
        v107 = 0LL;
        v108 = 0LL;
        v109 = 0LL;
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        v92 = 0LL;
        v93 = 0LL;
        v24 = v21 & 0xFFFF0000;
        if ( (v24 & 0x20000) != 0 )
          goto LABEL_125;
        v25 = ObReferenceObjectByHandle(v22, 1u, AlpcPortObjectType, v10, &v99, 0LL);
        v26 = v99;
        v112 = v99;
        if ( v25 < 0 )
        {
          v10 = v81;
          goto LABEL_125;
        }
        if ( (v24 & 0x40000) != 0 )
        {
          v27 = _InterlockedIncrement((volatile signed __int32 *)v99 + 101);
          v26 = v99;
          if ( *((_QWORD *)v99 + 51) )
          {
            v28 = (volatile signed __int32 *)((char *)v99 + 352);
            v29 = KeAbPreAcquire((ULONG_PTR)v99 + 352, 0LL, 0);
            v30 = v29;
            if ( _interlockedbittestandset64(v28, 0LL) )
              ExfAcquirePushLockExclusiveEx(v26 + 44, v29, v26 + 44);
            if ( v30 )
              *(_BYTE *)(v30 + 26) |= 1u;
            v31 = (struct _KEVENT *)v26[51];
            if ( v31 && v27 == v31[1].Header.LockNV )
              KeSetEvent(v31, 0, 0);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v26 + 44);
            KeAbPostRelease((ULONG_PTR)(v26 + 44));
            v26 = v99;
          }
        }
        v104[0] = v26;
        LODWORD(v108) = v24 | 4;
        v106 = 0LL;
        v105 = 0LL;
        v107 = 0LL;
        v10 = v81;
        if ( (int)AlpcpSendMessage(v104, v20, 0LL, v81) < 0 )
        {
          ObfDereferenceObject(v104[0]);
LABEL_125:
          KeLeaveCriticalRegion();
          v12 = (char *)Object;
          v6 = v84;
          v17 = v91;
          goto LABEL_126;
        }
        v92 = v106;
        v93 = v104[0];
        if ( v106 )
        {
          if ( BYTE2(v109) )
            AlpcpQueueIoCompletionPort(v106, BYTE3(v109), 1LL);
          else
            KeReleaseSemaphore(*(PRKSEMAPHORE *)(v106 + 248), 1, 1, 1u);
          goto LABEL_125;
        }
        v32 = v105;
        if ( v105 )
        {
          v33 = (ULONG *)KeGetCurrentIrql();
          v89 = v33;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          v86 = CurrentPrcb;
          v96 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)(v105 + 1600), 7u) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v96);
              while ( (*(_DWORD *)(v32 + 1600) & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset((volatile signed __int32 *)(v32 + 1600), 7u) );
            CurrentPrcb = v86;
            LOBYTE(v33) = (_BYTE)v89;
          }
          v35 = *(_DWORD *)(v32 + 1604);
          v36 = v35 + 1;
          if ( v35 + 1 > *(_DWORD *)(v32 + 1624) || v36 < v35 )
          {
            _InterlockedAnd((volatile signed __int32 *)(v32 + 1600), 0xFFFFFF7F);
            __writecr8((unsigned __int8)v33);
            RtlRaiseStatus(-1073741753);
          }
          *(_DWORD *)(v32 + 1604) = v36;
          if ( !v35 )
          {
            v37 = *(_QWORD **)(v32 + 1608);
            if ( v37 != (_QWORD *)(v32 + 1608) )
            {
              while ( 1 )
              {
                v38 = (__int64)v37;
                v110 = (_QWORD *)*v37;
                v39 = (_QWORD *)*v37;
                v40 = (_QWORD *)v37[1];
                if ( v39[1] != v38 || *v40 != v38 )
                  __fastfail(3u);
                *v40 = v39;
                v39[1] = v40;
                v41 = *(_BYTE *)(v38 + 16);
                if ( v41 == 1 )
                  break;
                if ( v41 == 2 )
                {
                  *(_BYTE *)(v38 + 17) = 5;
                  v54 = *(_QWORD *)(v38 + 24);
                  *(_QWORD *)v38 = 0LL;
                  v55 = (_QWORD *)(v54 + 8);
                  v56 = 0;
                  __writecr8(2uLL);
                  v57 = KeGetCurrentPrcb();
                  v58 = v57->CurrentThread;
                  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                  {
                    IsThreadRunning = KeIsThreadRunning(v57->CurrentThread);
                    EtwTraceEnqueueWork(v58, v38, IsThreadRunning);
                  }
                  KiAcquireKobjectLockSafe(v54);
                  if ( (_QWORD *)*v55 != v55
                    && *(_DWORD *)(v54 + 40) < *(_DWORD *)(v54 + 44)
                    && (v58->Queue != (_DISPATCHER_HEADER *volatile)v54 || v58->WaitReason != 15) )
                  {
                    v56 = KiWakeQueueWaiter(v57, v54, v38);
                  }
                  if ( !v56 )
                  {
                    v60 = *(_DWORD *)(v54 + 4);
                    *(_DWORD *)(v54 + 4) = v60 + 1;
                    v61 = *(__int64 **)(v54 + 32);
                    if ( *v61 != v54 + 24 )
                      __fastfail(3u);
                    *(_QWORD *)v38 = v54 + 24;
                    *(_QWORD *)(v38 + 8) = v61;
                    *v61 = v38;
                    *(_QWORD *)(v54 + 32) = v38;
                    if ( !v60 && (_QWORD *)*v55 != v55 )
                      KiWakeOtherQueueWaiters(v57, v54);
                  }
                  _InterlockedAnd((volatile signed __int32 *)v54, 0xFFFFFF7F);
                  v53 = (*(_DWORD *)(v32 + 1604))-- == 1;
                  if ( v53 )
                  {
LABEL_117:
                    v10 = v81;
                    goto LABEL_118;
                  }
                }
                else
                {
                  KiTryUnwaitThread((__int64)CurrentPrcb, v38, 256LL, 0LL);
                }
LABEL_116:
                v37 = v110;
                CurrentPrcb = v86;
                if ( v110 == (_QWORD *)(v32 + 1608) )
                  goto LABEL_117;
              }
              v42 = *(unsigned __int16 *)(v38 + 18);
              v43 = *(_QWORD *)(v38 + 24);
              v44 = 0;
              v97 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 64), 0LL) )
              {
                do
                  KeYieldProcessorEx(&v97);
                while ( *(_QWORD *)(v43 + 64) );
              }
              if ( *(_BYTE *)(v43 + 388) == 5 )
              {
                v45 = *(_BYTE *)(v43 + 112);
                v46 = v45 & 7;
                v44 = 0;
                if ( v46 == 1 || v46 == 4 )
                {
                  v47 = *(_QWORD *)(v43 + 232);
                  if ( v47 )
                  {
                    if ( (*(_BYTE *)v47 & 0x7F) == 0x15 )
                    {
                      v48 = (unsigned __int8)*(_DWORD *)(v43 + 540);
                      *(_DWORD *)(v43 + 540) = v48;
                      _InterlockedIncrement((volatile signed __int32 *)(v47 + 4 * v48 + 536));
                    }
                    else
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v47 + 40));
                    }
                  }
                  v49 = *(_QWORD *)(v43 + 712);
                  if ( v49 )
                  {
                    v98 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 22672), 0LL) )
                    {
                      do
                        KeYieldProcessorEx(&v98);
                      while ( *(_QWORD *)(v49 + 22672) );
                    }
                    if ( *(_QWORD *)(v43 + 712) )
                    {
                      v50 = *(_QWORD *)(v43 + 216);
                      v51 = *(_QWORD **)(v43 + 224);
                      if ( *(_QWORD *)(v50 + 8) != v43 + 216 || *v51 != v43 + 216 )
                        __fastfail(3u);
                      *v51 = v50;
                      *(_QWORD *)(v50 + 8) = v51;
                      *(_QWORD *)(v43 + 712) = 0LL;
                    }
                    _InterlockedAnd64((volatile signed __int64 *)(v49 + 22672), 0LL);
                  }
                  *(_BYTE *)(v43 + 388) = 7;
                  v52 = (__int64)v86;
                  *(_QWORD *)(v43 + 216) = v86->DeferredReadyListHead.Next;
                  *(_QWORD *)(v52 + 11400) = v43 + 216;
                  *(_QWORD *)(v43 + 200) = v42;
LABEL_96:
                  v44 = 1;
                }
                else
                {
                  if ( (*(_BYTE *)(v43 + 112) & 7) == 0 )
                  {
                    *(_BYTE *)(v43 + 112) = v45 & 0xF8 | 2;
                    *(_QWORD *)(v43 + 200) = v42;
                    *(_BYTE *)(v38 + 17) = 0;
                    goto LABEL_96;
                  }
                  if ( v46 == 5 )
                  {
                    *(_BYTE *)(v43 + 112) = v45 & 0xF8 | 6;
                  }
                  else if ( v46 == 3 )
                  {
                    *(_BYTE *)(v38 + 17) = 2;
                  }
                }
              }
              *(_QWORD *)(v43 + 64) = 0LL;
              ++*(_BYTE *)(v38 + 17);
              if ( v44 )
              {
                v53 = (*(_DWORD *)(v32 + 1604))-- == 1;
                if ( v53 )
                  goto LABEL_117;
              }
              goto LABEL_116;
            }
          }
LABEL_118:
          _InterlockedAnd((volatile signed __int32 *)(v32 + 1600), 0xFFFFFF7F);
          KiExitDispatcher((__int64)v86, 1LL, 1LL, 1LL, (unsigned __int8)v89);
        }
        else
        {
          v62 = v107;
          if ( v107 )
          {
            KeSetEvent((PRKEVENT)(v107 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
            AlpcpReleaseDirectAttribute(v62);
            v107 = 0LL;
          }
          v10 = v81;
        }
        v13 = v100;
        goto LABEL_125;
      }
LABEL_126:
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = v10;
      v11 = IoRemoveIoCompletion(*((_QWORD *)*v13 + 1), v102, P, v6, &v85, HandleInformation, 0LL, Timeout);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v92);
        Flags[1] &= ~1u;
      }
      v63 = (volatile __int64 *)*v13;
      LockHandle.LockQueue.Lock = *v13;
      LockHandle.LockQueue.Next = 0LL;
      v64 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v64;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v63);
      }
      else
      {
        v65 = (_QWORD *)_InterlockedExchange64(v63, (__int64)&LockHandle);
        if ( v65 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v65);
        v12 = (char *)Object;
      }
      if ( v11 == 258 )
      {
        v66 = ExpWorkerFactoryWantsToCreate(v12, 1LL);
        v18 = v87;
        if ( v66 || *v17 <= *((_DWORD *)v12 + 30) || CurrentThread[1].FirstArgument != &CurrentThread[1].FirstArgument )
          continue;
      }
      goto LABEL_143;
    }
    v19 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_33:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&v19->Lock, 1uLL);
    goto LABEL_34;
  }
LABEL_171:
  if ( P != v113 )
    ExFreePoolWithTag(P, 0);
  if ( v103 )
    ObfDereferenceObjectWithTag(v103, 0x746C6644u);
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v11;
}
