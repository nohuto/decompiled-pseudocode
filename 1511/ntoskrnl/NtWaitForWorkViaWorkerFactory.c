/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14007F570
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002E49C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x14002E790 (KeRegisterObjectNotification.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     IoRemoveIoCompletion @ 0x140080540 (IoRemoveIoCompletion.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     AlpcpReleaseDirectAttribute @ 0x1400BBFFC (AlpcpReleaseDirectAttribute.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400BC0D4 (AlpcpQueueIoCompletionPort.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400D5460 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1400E90C0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ExpWorkerFactoryWantsToCreate @ 0x1400EA1CC (ExpWorkerFactoryWantsToCreate.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     NtAlpcSendWaitReceivePort @ 0x140427E70 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpciDestroyDeferredMessageContext @ 0x14042E840 (AlpciDestroyDeferredMessageContext.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ObpRemoveObjectRoutine @ 0x14042F540 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x14049BF20 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExSystemExceptionFilter @ 0x14049E9B4 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14062F65C (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v5; // r13d
  KPROCESSOR_MODE PreviousMode; // si
  _DWORD *v8; // rcx
  int v9; // r14d
  char *v10; // rsi
  unsigned __int64 *volatile *v11; // r12
  unsigned __int64 *v12; // rcx
  unsigned __int8 CurrentIrql; // al
  PULONG v14; // rcx
  ULONG *v15; // rdx
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  HANDLE v17; // r13
  ULONG v18; // r12d
  HANDLE v19; // rcx
  struct _KTHREAD *v20; // rax
  unsigned int v21; // r12d
  NTSTATUS v22; // eax
  __int64 v23; // rcx
  unsigned __int64 *v24; // r14
  signed __int32 v25; // r15d
  volatile signed __int32 *v26; // rsi
  struct _KTHREAD *v27; // rbx
  __int64 AbOrphanedEntrySummary; // rax
  __int64 v29; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v31; // rcx
  struct _KPROCESS *Process; // rax
  unsigned __int64 v33; // rcx
  int v34; // eax
  __int16 v35; // ax
  struct _KEVENT *v36; // rcx
  char v37; // al
  __int64 v38; // r8
  __int64 v39; // r13
  __int64 v40; // rdx
  struct _KPRCB *CurrentPrcb; // r10
  int v42; // eax
  int v43; // ecx
  _QWORD *v44; // rax
  __int64 v45; // r12
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  char v48; // al
  __int64 v49; // rsi
  __int64 v50; // rdi
  char v51; // bl
  char v52; // al
  int v53; // ecx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 *v56; // rcx
  struct _KPRCB *v57; // r10
  bool v58; // zf
  __int64 v59; // rbx
  char v60; // r14
  struct _KPRCB *v61; // r15
  _KTHREAD *v62; // rdi
  unsigned __int8 IsThreadRunning; // al
  __int64 *v64; // rcx
  __int64 v65; // rbx
  volatile __int64 *v66; // r8
  unsigned __int8 v67; // cl
  char v68; // al
  _DWORD *v69; // r13
  struct _KTHREAD *v70; // r15
  unsigned int v71; // ecx
  _QWORD *v72; // rbx
  struct _KTHREAD **v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdi
  PVOID *v76; // rbx
  unsigned __int64 *volatile v77; // rbx
  int v78; // edx
  _KSPIN_LOCK_QUEUE *volatile v79; // rax
  ULONG_PTR v80; // rbx
  signed __int64 v81; // r12
  bool v82; // cc
  signed __int64 v83; // r12
  __int64 v84; // rax
  PVOID *Object; // [rsp+20h] [rbp-218h]
  int HandleInformation; // [rsp+28h] [rbp-210h]
  int Timeout; // [rsp+38h] [rbp-200h]
  unsigned __int8 v89; // [rsp+40h] [rbp-1F8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-1F0h] BYREF
  PVOID v91; // [rsp+60h] [rbp-1D8h] BYREF
  ULONG v92; // [rsp+68h] [rbp-1D0h] BYREF
  ULONG v93; // [rsp+6Ch] [rbp-1CCh]
  PULONG v94; // [rsp+70h] [rbp-1C8h]
  struct _KPRCB *v95; // [rsp+78h] [rbp-1C0h]
  PVOID P; // [rsp+80h] [rbp-1B8h]
  PULONG v97; // [rsp+88h] [rbp-1B0h]
  _DWORD *v98; // [rsp+90h] [rbp-1A8h]
  ULONG *v99; // [rsp+98h] [rbp-1A0h]
  PFILE_IO_COMPLETION_INFORMATION v100; // [rsp+A0h] [rbp-198h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-190h]
  __int64 v102; // [rsp+B0h] [rbp-188h] BYREF
  PVOID v103; // [rsp+B8h] [rbp-180h]
  HANDLE Handle[2]; // [rsp+C0h] [rbp-178h]
  ULONG Flags[2]; // [rsp+D0h] [rbp-168h]
  int v106; // [rsp+D8h] [rbp-160h] BYREF
  int v107; // [rsp+DCh] [rbp-15Ch] BYREF
  int v108; // [rsp+E0h] [rbp-158h] BYREF
  PVOID v109; // [rsp+E8h] [rbp-150h] BYREF
  PFILE_IO_COMPLETION_INFORMATION v110; // [rsp+F0h] [rbp-148h]
  PVOID v111[3]; // [rsp+100h] [rbp-138h] BYREF
  __int64 v112; // [rsp+118h] [rbp-120h]
  __int64 v113; // [rsp+120h] [rbp-118h]
  __int64 v114; // [rsp+128h] [rbp-110h]
  __int64 v115; // [rsp+130h] [rbp-108h]
  __int64 v116; // [rsp+138h] [rbp-100h]
  int v117; // [rsp+140h] [rbp-F8h]
  _QWORD *v118; // [rsp+148h] [rbp-F0h]
  struct _KTHREAD *CurrentThread; // [rsp+150h] [rbp-E8h]
  unsigned __int64 *volatile *v120; // [rsp+158h] [rbp-E0h]
  PVOID v121; // [rsp+160h] [rbp-D8h]
  _BYTE v122[128]; // [rsp+170h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+238h] [rbp+0h]

  v97 = PacketsReturned;
  v5 = Count;
  v93 = Count;
  v110 = MiniPackets;
  v98 = WorkerFactoryHandle;
  v100 = MiniPackets;
  LODWORD(v95) = Count;
  v94 = PacketsReturned;
  v92 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v89 = PreviousMode;
  P = v122;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v9 = -1073741811;
    goto LABEL_187;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v8 = v97;
    if ( (unsigned __int64)v97 >= MmUserProbeAddress )
      v8 = (_DWORD *)MmUserProbeAddress;
    *v8 = *v8;
    if ( ((unsigned __int8)DeferredWork & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&DeferredWork[1] > MmUserProbeAddress || &DeferredWork[1] < DeferredWork )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)&DeferredWork->AlpcSendMessage;
    *(_QWORD *)Flags = *(_QWORD *)&DeferredWork->AlpcSendMessageFlags;
  }
  v9 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, PreviousMode, &v91, 0LL);
  v10 = (char *)v91;
  BugCheckParameter2 = (ULONG_PTR)v91;
  if ( v9 >= 0 )
  {
    if ( v5 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v5, 0x656E6F4Eu);
      if ( !P )
      {
        v5 = 16;
        v93 = 16;
        P = v122;
      }
    }
    v11 = (unsigned __int64 *volatile *)(v10 + 16);
    v120 = (unsigned __int64 *volatile *)(v10 + 16);
    v12 = (unsigned __int64 *)*((_QWORD *)v10 + 2);
    LockHandle.LockQueue.Lock = v12;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle);
    }
    else
    {
      if ( _InterlockedExchange64((volatile __int64 *)v12, (__int64)&LockHandle) )
        KxWaitForLockOwnerShip(&LockHandle);
      v10 = (char *)v91;
    }
    if ( *((_BYTE *)*v11 + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v9 = 128;
      goto LABEL_187;
    }
    v98 = v10 + 144;
    if ( (*((_DWORD *)v10 + 36) & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(v10);
    ++*((_DWORD *)*v11 + 7);
    v14 = (PULONG)(v10 + 120);
    v94 = (PULONG)(v10 + 120);
    v15 = (ULONG *)(v10 + 116);
    v99 = (ULONG *)(v10 + 116);
    while ( 1 )
    {
      if ( *v15 < *v14 || *((_BYTE *)*v11 + 33) )
      {
        v9 = 258;
        goto LABEL_159;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_35;
      }
      _m_prefetchw(&LockHandle);
      Next = LockHandle.LockQueue.Next;
      if ( LockHandle.LockQueue.Next )
        goto LABEL_33;
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) != &LockHandle )
        break;
LABEL_34:
      v10 = (char *)v91;
LABEL_35:
      __writecr8(LockHandle.OldIrql);
      if ( (Flags[1] & 1) == 0 )
        goto LABEL_140;
      v17 = Handle[0];
      v18 = Flags[0];
      v19 = Handle[1];
      memset(v111, 0, sizeof(v111));
      v112 = 0LL;
      v113 = 0LL;
      v114 = 0LL;
      v115 = 0LL;
      v116 = 0LL;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v102 = 0LL;
      v103 = 0LL;
      v21 = v18 & 0xFFFF0000;
      v22 = ObReferenceObjectByHandle(v19, 1u, AlpcPortObjectType, v89, &v109, 0LL);
      v24 = (unsigned __int64 *)v109;
      v121 = v109;
      if ( v22 < 0 )
        goto LABEL_139;
      if ( (v21 & 0x40000) != 0 )
      {
        v25 = _InterlockedIncrement((volatile signed __int32 *)v109 + 101);
        v24 = (unsigned __int64 *)v109;
        if ( *((_QWORD *)v109 + 51) )
        {
          v26 = (volatile signed __int32 *)((char *)v109 + 352);
          if ( KiAbEnabled )
          {
            v27 = KeGetCurrentThread();
            if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
              KeBugCheckEx(0x192u, (ULONG_PTR)v27, (ULONG_PTR)v109 + 352, KeGetCurrentIrql(), 0LL);
            --v27->SpecialApcDisable;
            if ( v27->AbEntrySummary )
            {
LABEL_46:
              AbEntrySummary = v27->AbEntrySummary;
              _BitScanForward((unsigned int *)&v31, AbEntrySummary);
              v117 = v31;
              v27->AbEntrySummary = AbEntrySummary & ~(1 << v31);
              v23 = 96 * v31;
              v29 = (__int64)v27->LockEntries + v23;
            }
            else
            {
              if ( v27->AbOrphanedEntrySummary )
              {
                AbOrphanedEntrySummary = v27->AbOrphanedEntrySummary;
                v27->AbOrphanedEntrySummary = 0;
                v27->AbEntrySummary |= AbOrphanedEntrySummary;
                goto LABEL_46;
              }
              v29 = 0LL;
              if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
                EtwTraceAutoBoostEntryExhaustion(v27, v24 + 44);
            }
            if ( v29 )
            {
              if ( (unsigned __int64)(v24 + 0xE00000002CLL) > 0x7FFFFFFFFFLL
                || (Process = v27->ApcState.Process, (v33 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
                || Process == PsInitialSystemProcess )
              {
                v34 = -1;
              }
              else
              {
                v34 = *(_DWORD *)(v33 + 8);
              }
              *(_DWORD *)(v29 + 40) = v34;
              v23 = 0x7FFFFFFFFFFFFFFCLL;
              *(_QWORD *)(v29 + 32) = (unsigned __int64)v26 & 0x7FFFFFFFFFFFFFFCLL;
            }
            else
            {
              _interlockedbittestandset((volatile signed __int32 *)&v27->116 + 1, 0xFu);
            }
            v35 = v27->SpecialApcDisable + 1;
            v27->SpecialApcDisable = v35;
            if ( !v35 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v27->ApcState.ApcListHead[0].Flink != &v27->152 )
              KiCheckForKernelApcDelivery(v23);
          }
          else
          {
            v29 = 0LL;
          }
          if ( _interlockedbittestandset64(v26, 0LL) )
            ExfAcquirePushLockExclusiveEx(v24 + 44, v29, (ULONG_PTR)(v24 + 44));
          if ( v29 )
            *(_BYTE *)(v29 + 26) |= 1u;
          v36 = (struct _KEVENT *)v24[51];
          if ( v36 && v25 == v36[1].Header.LockNV )
            KeSetEvent(v36, 0, 0);
          v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v37 & 2) != 0 && (v37 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)v24 + 44);
          KeAbPostRelease((ULONG_PTR)(v24 + 44));
          v24 = (unsigned __int64 *)v109;
        }
      }
      v111[0] = v24;
      LODWORD(v115) = v21 | 4;
      v113 = 0LL;
      v112 = 0LL;
      v114 = 0LL;
      if ( (int)AlpcpSendMessage(v111, v17, 0LL, v89) >= 0 )
      {
        v102 = v113;
        v103 = v111[0];
        if ( v113 )
        {
          if ( BYTE2(v116) )
            AlpcpQueueIoCompletionPort(v113, BYTE3(v116), 1LL);
          else
            KeReleaseSemaphore(*(PRKSEMAPHORE *)(v113 + 248), 1, 1, 1u);
          goto LABEL_139;
        }
        v39 = v112;
        if ( !v112 )
        {
          v65 = v114;
          if ( v114 )
          {
            KeSetEvent((PRKEVENT)(v114 & 0xFFFFFFFFFFFFFFFEuLL), 0, 1u);
            AlpcpReleaseDirectAttribute(v65);
            v114 = 0LL;
          }
          goto LABEL_139;
        }
        v40 = KeGetCurrentIrql();
        v100 = (PFILE_IO_COMPLETION_INFORMATION)v40;
        __writecr8(2uLL);
        CurrentPrcb = KeGetCurrentPrcb();
        v95 = CurrentPrcb;
        v107 = 0;
        if ( _interlockedbittestandset((volatile signed __int32 *)(v112 + 1592), 7u) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v107, v40, v38);
            while ( (*(_DWORD *)(v39 + 1592) & 0x80u) != 0 );
          }
          while ( _interlockedbittestandset((volatile signed __int32 *)(v39 + 1592), 7u) );
          CurrentPrcb = v95;
          v40 = (__int64)v100;
        }
        v42 = *(_DWORD *)(v39 + 1596);
        v43 = v42 + 1;
        if ( v42 + 1 > *(_DWORD *)(v39 + 1616) || v43 < v42 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v39 + 1592), 0xFFFFFF7F);
          __writecr8((unsigned __int8)v40);
          RtlRaiseStatus(-1073741753);
        }
        *(_DWORD *)(v39 + 1596) = v43;
        if ( v42 || (v44 = *(_QWORD **)(v39 + 1600), v44 == (_QWORD *)(v39 + 1600)) )
        {
LABEL_136:
          _InterlockedAnd((volatile signed __int32 *)(v39 + 1592), 0xFFFFFF7F);
          LOBYTE(Object) = (_BYTE)v100;
          KiExitDispatcher((_DWORD)v95, 1, 1, 1, Object);
          goto LABEL_139;
        }
        while ( 2 )
        {
          v45 = (__int64)v44;
          v118 = (_QWORD *)*v44;
          v46 = (_QWORD *)*v44;
          v47 = (_QWORD *)v44[1];
          if ( v46[1] != v45 || *v47 != v45 )
            __fastfail(3u);
          *v47 = v46;
          v46[1] = v47;
          v48 = *(_BYTE *)(v45 + 16);
          if ( v48 == 1 )
          {
            v49 = *(unsigned __int16 *)(v45 + 18);
            v50 = *(_QWORD *)(v45 + 24);
            v51 = 0;
            v108 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v50 + 64), 0LL) )
            {
              do
                KeYieldProcessorEx(&v108, v40, v38);
              while ( *(_QWORD *)(v50 + 64) );
            }
            if ( *(_BYTE *)(v50 + 388) == 5 )
            {
              v52 = *(_BYTE *)(v50 + 112);
              v53 = v52 & 7;
              v51 = 0;
              if ( v53 == 1 || v53 == 4 )
              {
                v40 = *(_QWORD *)(v50 + 232);
                if ( v40 )
                {
                  if ( (*(_BYTE *)v40 & 0x7F) == 0x15 )
                  {
                    v54 = (unsigned __int8)*(_DWORD *)(v50 + 540);
                    *(_DWORD *)(v50 + 540) = v54;
                    _InterlockedIncrement((volatile signed __int32 *)(v40 + 4 * v54 + 536));
                  }
                  else
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v40 + 40));
                  }
                }
                v55 = *(_QWORD *)(v50 + 712);
                if ( v55 )
                {
                  v106 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v55 + 22672), 0LL) )
                  {
                    do
                      KeYieldProcessorEx(&v106, v40, v38);
                    while ( *(_QWORD *)(v55 + 22672) );
                  }
                  if ( *(_QWORD *)(v50 + 712) )
                  {
                    v40 = *(_QWORD *)(v50 + 216);
                    v56 = *(__int64 **)(v50 + 224);
                    if ( *(_QWORD *)(v40 + 8) != v50 + 216 || *v56 != v50 + 216 )
                      __fastfail(3u);
                    *v56 = v40;
                    *(_QWORD *)(v40 + 8) = v56;
                    *(_QWORD *)(v50 + 712) = 0LL;
                  }
                  _InterlockedAnd64((volatile signed __int64 *)(v55 + 22672), 0LL);
                }
                *(_BYTE *)(v50 + 388) = 7;
                v57 = v95;
                *(_QWORD *)(v50 + 216) = v95->DeferredReadyListHead.Next;
                v57->DeferredReadyListHead.Next = (struct _SINGLE_LIST_ENTRY *)(v50 + 216);
                *(_QWORD *)(v50 + 200) = v49;
LABEL_117:
                v51 = 1;
              }
              else
              {
                if ( (*(_BYTE *)(v50 + 112) & 7) == 0 )
                {
                  *(_BYTE *)(v50 + 112) = v52 & 0xF8 | 2;
                  *(_QWORD *)(v50 + 200) = v49;
                  *(_BYTE *)(v45 + 17) = 0;
                  goto LABEL_117;
                }
                if ( v53 == 5 )
                {
                  *(_BYTE *)(v50 + 112) = v52 & 0xF8 | 6;
                }
                else if ( v53 == 3 )
                {
                  *(_BYTE *)(v45 + 17) = 2;
                }
              }
            }
            *(_QWORD *)(v50 + 64) = 0LL;
            ++*(_BYTE *)(v45 + 17);
            if ( v51 )
            {
              v58 = (*(_DWORD *)(v39 + 1596))-- == 1;
              if ( v58 )
                goto LABEL_136;
            }
          }
          else if ( v48 == 2 )
          {
            *(_BYTE *)(v45 + 17) = 5;
            v59 = *(_QWORD *)(v45 + 24);
            *(_QWORD *)v45 = 0LL;
            v60 = 0;
            __writecr8(2uLL);
            v61 = KeGetCurrentPrcb();
            v62 = v61->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v61->CurrentThread);
              EtwTraceEnqueueWork(v62, v45, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v59, v40, v38);
            if ( *(_QWORD *)(v59 + 16) != v59 + 8
              && *(_DWORD *)(v59 + 40) < *(_DWORD *)(v59 + 44)
              && (v62->Queue != (_DISPATCHER_HEADER *volatile)v59 || v62->WaitReason != 15) )
            {
              v60 = KiWakeQueueWaiter((__int64)v61, v59, v45);
            }
            if ( !v60 )
            {
              ++*(_DWORD *)(v59 + 4);
              v64 = *(__int64 **)(v59 + 32);
              *(_QWORD *)v45 = v59 + 24;
              *(_QWORD *)(v45 + 8) = v64;
              if ( *v64 != v59 + 24 )
                __fastfail(3u);
              *v64 = v45;
              *(_QWORD *)(v59 + 32) = v45;
            }
            _InterlockedAnd((volatile signed __int32 *)v59, 0xFFFFFF7F);
            v58 = (*(_DWORD *)(v39 + 1596))-- == 1;
            if ( v58 )
              goto LABEL_136;
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v45, 256LL, 0LL);
          }
          v44 = v118;
          CurrentPrcb = v95;
          if ( v118 == (_QWORD *)(v39 + 1600) )
            goto LABEL_136;
          continue;
        }
      }
      ObfDereferenceObject(v111[0]);
LABEL_139:
      KeLeaveCriticalRegion();
      v10 = (char *)v91;
      v11 = v120;
      v5 = v93;
LABEL_140:
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = v89;
      v9 = IoRemoveIoCompletion(*((_QWORD *)*v11 + 1), v110, P, v5, &v92, HandleInformation, 0LL, Timeout);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v102);
        Flags[1] &= ~1u;
      }
      v66 = (volatile __int64 *)*v11;
      LockHandle.LockQueue.Lock = *v11;
      LockHandle.LockQueue.Next = 0LL;
      v67 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v67;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle);
      }
      else
      {
        v15 = (ULONG *)_InterlockedExchange64(v66, (__int64)&LockHandle);
        if ( v15 )
          KxWaitForLockOwnerShip(&LockHandle);
        v10 = (char *)v91;
      }
      if ( v9 != 258 )
      {
        v14 = v94;
LABEL_159:
        --*((_DWORD *)*v11 + 7);
        if ( v9 == 258 )
        {
          --*v14;
          --*((_DWORD *)v10 + 31);
          ExpRemoveCurrentThreadFromThreadHistory(v10, v15);
          v69 = v98;
        }
        else
        {
          v69 = v98;
          if ( (*v98 & 7) != 4 )
          {
            v70 = KeGetCurrentThread();
            v71 = 0;
            v10 = (char *)v91;
            v72 = (char *)v91 + 72;
            v73 = (struct _KTHREAD **)((char *)v91 + 72);
            while ( *v73 != v70 )
            {
              ++v71;
              ++v73;
              if ( v71 >= 4 )
              {
                ObfReferenceObjectWithTag(v70, 0x746C6644u);
                v74 = 0LL;
                while ( *v72 )
                {
                  v74 = (unsigned int)(v74 + 1);
                  ++v72;
                  if ( (unsigned int)v74 >= 4 )
                  {
                    v75 = *v69 & 7;
                    v76 = (PVOID *)&v10[8 * v75];
                    ObfDereferenceObjectWithTag(v76[9], 0x746C6644u);
                    v76[9] = v70;
                    *v69 = *v69 & 0xFFFFFFF8 | ((_BYTE)v75 + 1) & 3;
                    goto LABEL_170;
                  }
                }
                *(_QWORD *)&v10[8 * v74 + 72] = v70;
                break;
              }
            }
          }
        }
LABEL_170:
        v77 = *v11;
        if ( *v94 < *v99 && !*((_DWORD *)v77 + 7) )
        {
          if ( !*((_DWORD *)v10 + 35) || (v78 = *v69 | 0x200, *v69 = v78, *(_DWORD *)(v77[1] + 4)) )
          {
            ExpWorkerFactoryCheckCreate(v10, &LockHandle);
            goto LABEL_184;
          }
          if ( (v78 & 0x400) == 0 )
          {
            *v69 = v78 | 0x400;
            ObfReferenceObjectWithTag(v10, 0x746C6644u);
            KeRegisterObjectNotification(v77[1], (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v10 + 352));
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_183:
          __writecr8(LockHandle.OldIrql);
LABEL_184:
          if ( !v9 )
            *v97 = v92;
          goto LABEL_187;
        }
        _m_prefetchw(&LockHandle);
        v79 = LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_183;
          v79 = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)&v79->Lock, 1uLL);
        goto LABEL_183;
      }
      v68 = ExpWorkerFactoryWantsToCreate(v10, 1LL);
      v14 = v94;
      v15 = v99;
      if ( !v68 && *v94 > *((_DWORD *)v10 + 28) && CurrentThread[1].FirstArgument == &CurrentThread[1].FirstArgument )
        goto LABEL_159;
    }
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
LABEL_33:
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_34;
  }
LABEL_187:
  if ( P != v122 )
    ExFreePoolWithTag(P, 0);
  if ( BugCheckParameter2 )
  {
    v80 = BugCheckParameter2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(BugCheckParameter2 - 48);
    v81 = _InterlockedExchangeAdd64((volatile signed __int64 *)v80, 0xFFFFFFFFFFFFFFFFuLL);
    v82 = v81 <= 1;
    v83 = v81 - 1;
    if ( v82 )
    {
      if ( *(_QWORD *)(v80 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v80 + 24) ^ (unsigned __int64)BYTE1(v80)],
          BugCheckParameter2,
          1uLL,
          *(_QWORD *)(v80 + 8));
      if ( v83 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v83);
      if ( KeAreAllApcsDisabled() )
      {
        ObpDeferObjectDeletion(v80);
      }
      else
      {
        v84 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v80);
        if ( v84 )
          ObpHandleRevocationBlockRemoveObject(v84);
        if ( ObpTraceFlags )
          ObpDeregisterObject(v80);
        ObpRemoveObjectRoutine(v80, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v9;
}
