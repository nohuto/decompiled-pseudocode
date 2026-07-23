/*
 * XREFs of NtWaitForWorkViaWorkerFactory @ 0x14009D900
 * Callers:
 *     <none>
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002DDCC (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x14002E0E0 (KeRegisterObjectNotification.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     IoRemoveIoCompletion @ 0x14009E3A0 (IoRemoveIoCompletion.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140125CCC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 *     NtAlpcSendWaitReceivePort @ 0x14047B5F0 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     AlpciDestroyDeferredMessageContext @ 0x1404BE280 (AlpciDestroyDeferredMessageContext.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtWaitForWorkViaWorkerFactory(
        HANDLE WorkerFactoryHandle,
        PFILE_IO_COMPLETION_INFORMATION MiniPackets,
        ULONG Count,
        PULONG PacketsReturned,
        PWORKER_FACTORY_DEFERRED_WORK DeferredWork)
{
  ULONG v6; // r15d
  char PreviousMode; // cl
  _DWORD *v9; // rcx
  KPROCESSOR_MODE v10; // bl
  int v11; // r14d
  _QWORD *v12; // rsi
  unsigned __int64 *volatile *v13; // rdi
  unsigned __int64 *v14; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v16; // rdx
  PULONG v17; // rcx
  ULONG *v18; // r13
  __int64 v19; // rax
  HANDLE v20; // r13
  ULONG v21; // r15d
  HANDLE v22; // rcx
  struct _KTHREAD *v23; // rax
  unsigned int v24; // r15d
  NTSTATUS v25; // eax
  __int64 v26; // r9
  _QWORD *v27; // rbx
  signed __int32 v28; // r14d
  volatile signed __int32 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rsi
  struct _KEVENT *v32; // rcx
  char v33; // al
  __int64 v34; // r8
  int v35; // r9d
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  volatile __int64 *v38; // r8
  unsigned __int8 v39; // cl
  _QWORD *v40; // rdx
  unsigned __int64 *volatile v41; // rdx
  int *v42; // r8
  struct _KTHREAD *v43; // r15
  unsigned int v44; // ecx
  _QWORD *v45; // rbx
  struct _KTHREAD **v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  PVOID *v49; // rbx
  unsigned __int64 *volatile v50; // rbx
  int v51; // edx
  __int64 Next; // rax
  signed __int64 v53; // rbx
  signed __int64 v54; // r13
  bool v55; // cc
  signed __int64 v56; // r13
  __int64 v57; // rax
  int HandleInformation; // [rsp+28h] [rbp-1E0h]
  int Timeout; // [rsp+38h] [rbp-1D0h]
  unsigned __int8 v61; // [rsp+40h] [rbp-1C8h]
  PVOID Object; // [rsp+48h] [rbp-1C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-1B8h] BYREF
  ULONG v64; // [rsp+68h] [rbp-1A0h]
  PULONG v65; // [rsp+70h] [rbp-198h]
  unsigned int *v66; // [rsp+78h] [rbp-190h]
  ULONG v67; // [rsp+80h] [rbp-188h] BYREF
  PVOID P; // [rsp+88h] [rbp-180h]
  PFILE_IO_COMPLETION_INFORMATION v69; // [rsp+90h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-170h]
  unsigned __int64 *volatile *v71; // [rsp+A0h] [rbp-168h]
  __int64 v72; // [rsp+A8h] [rbp-160h] BYREF
  PVOID v73; // [rsp+B0h] [rbp-158h]
  HANDLE Handle[2]; // [rsp+B8h] [rbp-150h]
  ULONG Flags[2]; // [rsp+C8h] [rbp-140h]
  PVOID v76; // [rsp+D0h] [rbp-138h] BYREF
  PULONG v77; // [rsp+D8h] [rbp-130h]
  PFILE_IO_COMPLETION_INFORMATION v78; // [rsp+E0h] [rbp-128h]
  PVOID v79[3]; // [rsp+F0h] [rbp-118h] BYREF
  __int64 v80; // [rsp+108h] [rbp-100h]
  __int64 v81; // [rsp+110h] [rbp-F8h]
  __int64 v82; // [rsp+118h] [rbp-F0h]
  __int64 v83; // [rsp+120h] [rbp-E8h]
  __int64 v84; // [rsp+128h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+130h] [rbp-D8h]
  PVOID v86; // [rsp+138h] [rbp-D0h]
  _BYTE v87[128]; // [rsp+140h] [rbp-C8h] BYREF
  void *retaddr; // [rsp+208h] [rbp+0h]

  v77 = PacketsReturned;
  v6 = Count;
  v64 = Count;
  v78 = MiniPackets;
  v71 = (unsigned __int64 *volatile *)WorkerFactoryHandle;
  v69 = MiniPackets;
  LODWORD(v66) = Count;
  v65 = PacketsReturned;
  v67 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v61 = PreviousMode;
  P = v87;
  Flags[1] = 0;
  if ( Count - 1 > 0x7FFFFFE )
  {
    v11 = -1073741811;
    goto LABEL_106;
  }
  if ( PreviousMode )
  {
    ProbeForWrite(MiniPackets, 32LL * Count, 8u);
    v9 = PacketsReturned;
    if ( (unsigned __int64)PacketsReturned >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
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
  v10 = v61;
  v11 = ObReferenceObjectByHandle(WorkerFactoryHandle, 2u, ExpWorkerFactoryObjectType, v61, &Object, 0LL);
  v12 = Object;
  BugCheckParameter2 = (ULONG_PTR)Object;
  if ( v11 >= 0 )
  {
    if ( v6 > 0x10 )
    {
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v6, 0x656E6F4Eu);
      if ( !P )
      {
        v6 = 16;
        v64 = 16;
        P = v87;
      }
    }
    v13 = (unsigned __int64 *volatile *)(v12 + 2);
    v71 = (unsigned __int64 *volatile *)(v12 + 2);
    v14 = (unsigned __int64 *)v12[2];
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
      v12 = Object;
    }
    if ( *((_BYTE *)*v13 + 33) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v11 = 128;
      goto LABEL_106;
    }
    v66 = (unsigned int *)(v12 + 18);
    if ( (v12[18] & 0x200) != 0 )
      ExpLeaveWorkerFactoryAwayMode(v12);
    ++*((_DWORD *)*v13 + 7);
    v17 = (PULONG)v12 + 29;
    v65 = (PULONG)v12 + 29;
    v18 = (ULONG *)(v12 + 15);
    v69 = (PFILE_IO_COMPLETION_INFORMATION)(v12 + 15);
    while ( 1 )
    {
      if ( *v17 < *v18 || *((_BYTE *)*v13 + 33) )
      {
        v11 = 258;
LABEL_77:
        --*((_DWORD *)*v13 + 7);
        if ( v11 == 258 )
        {
          --*v18;
          --*((_DWORD *)v12 + 31);
          ExpRemoveCurrentThreadFromThreadHistory(v12);
LABEL_88:
          v42 = (int *)v66;
        }
        else
        {
          v42 = (int *)v66;
          if ( (*v66 & 7) != 4 )
          {
            v43 = KeGetCurrentThread();
            v44 = 0;
            v12 = Object;
            v45 = (char *)Object + 72;
            v46 = (struct _KTHREAD **)((char *)Object + 72);
            while ( *v46 != v43 )
            {
              ++v44;
              ++v46;
              if ( v44 >= 4 )
              {
                ObfReferenceObjectWithTag(v43, 0x746C6644u);
                v47 = 0LL;
                while ( *v45 )
                {
                  v47 = (unsigned int)(v47 + 1);
                  ++v45;
                  if ( (unsigned int)v47 >= 4 )
                  {
                    v48 = *v66 & 7;
                    v49 = (PVOID *)&v12[v48];
                    ObfDereferenceObjectWithTag(v49[9], 0x746C6644u);
                    v49[9] = v43;
                    v42 = (int *)v66;
                    *v66 = *v66 & 0xFFFFFFF8 | ((_BYTE)v48 + 1) & 3;
                    v13 = v71;
                    goto LABEL_89;
                  }
                }
                v12[v47 + 9] = v43;
                goto LABEL_88;
              }
            }
          }
        }
LABEL_89:
        v50 = *v13;
        if ( *v18 < *v65 && !*((_DWORD *)v50 + 7) )
        {
          if ( *((_DWORD *)v12 + 35) )
          {
            v51 = *v42 | 0x200;
            *v42 = v51;
            if ( !*(_DWORD *)(v50[1] + 4) )
            {
              if ( (v51 & 0x400) == 0 )
              {
                *v42 = v51 | 0x400;
                ObfReferenceObjectWithTag(v12, 0x746C6644u);
                KeRegisterObjectNotification(v50[1], (__int64)&ExpWorkerFactoryManagerQueue, (__int64)(v12 + 44));
              }
              goto LABEL_96;
            }
          }
          ExpWorkerFactoryCheckCreate(v12, &LockHandle, 0);
LABEL_103:
          if ( !v11 )
            *v77 = v67;
          goto LABEL_106;
        }
LABEL_96:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_102:
          __writecr8(LockHandle.OldIrql);
          goto LABEL_103;
        }
        _m_prefetchw(&LockHandle);
        Next = (__int64)LockHandle.LockQueue.Next;
        if ( !LockHandle.LockQueue.Next )
        {
          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                               0LL,
                                               (signed __int64)&LockHandle) == &LockHandle )
            goto LABEL_102;
          Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
        }
        LockHandle.LockQueue.Next = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
        goto LABEL_102;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
        break;
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_35:
      __writecr8(LockHandle.OldIrql);
      if ( (Flags[1] & 1) != 0 )
      {
        v20 = Handle[0];
        v21 = Flags[0];
        v22 = Handle[1];
        memset(v79, 0, sizeof(v79));
        v80 = 0LL;
        v81 = 0LL;
        v82 = 0LL;
        v83 = 0LL;
        v84 = 0LL;
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        v72 = 0LL;
        v73 = 0LL;
        v24 = v21 & 0xFFFF0000;
        if ( (v24 & 0x20000) == 0 )
        {
          v25 = ObReferenceObjectByHandle(v22, 1u, AlpcPortObjectType, v10, &v76, 0LL);
          v27 = v76;
          v86 = v76;
          if ( v25 < 0 )
          {
            v10 = v61;
          }
          else
          {
            if ( (v24 & 0x40000) != 0 )
            {
              v28 = _InterlockedIncrement((volatile signed __int32 *)v76 + 101);
              v27 = v76;
              if ( *((_QWORD *)v76 + 51) )
              {
                v29 = (volatile signed __int32 *)((char *)v76 + 352);
                v30 = KeAbPreAcquire((ULONG_PTR)v76 + 352, 0LL, 0LL, v26);
                v31 = v30;
                if ( _interlockedbittestandset64(v29, 0LL) )
                  ExfAcquirePushLockExclusiveEx(v27 + 44, v30, v27 + 44);
                if ( v31 )
                  *(_BYTE *)(v31 + 26) |= 1u;
                v32 = (struct _KEVENT *)v27[51];
                if ( v32 && v28 == v32[1].Header.LockNV )
                  KeSetEvent(v32, 0, 0);
                v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v29, 0xFFFFFFFFFFFFFFFFuLL);
                if ( (v33 & 2) != 0 && (v33 & 4) == 0 )
                  ExfTryToWakePushLock(v27 + 44);
                KeAbPostRelease((ULONG_PTR)(v27 + 44));
                v27 = v76;
                v13 = v71;
              }
            }
            v79[0] = v27;
            LODWORD(v83) = v24 | 4;
            v81 = 0LL;
            v80 = 0LL;
            v82 = 0LL;
            v10 = v61;
            if ( (int)AlpcpSendMessage(v79, v20, 0LL, v61) >= 0 )
            {
              v72 = v81;
              v73 = v79[0];
              AlpcpSignal((__int64)v79, 1u, v34, v35);
            }
            else
            {
              ObfDereferenceObject(v79[0]);
            }
          }
        }
        v36 = KeGetCurrentThread();
        v37 = v36->KernelApcDisable + 1;
        v36->KernelApcDisable = v37;
        if ( !v37
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
          && !v36->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery(v36);
        }
        v6 = v64;
        v18 = (ULONG *)v69;
        v12 = Object;
      }
      LOBYTE(Timeout) = 1;
      LOBYTE(HandleInformation) = v10;
      v11 = IoRemoveIoCompletion(*((_QWORD *)*v13 + 1), v78, P, v6, &v67, HandleInformation, 0LL, Timeout);
      if ( (Flags[1] & 1) != 0 )
      {
        AlpciDestroyDeferredMessageContext(&v72);
        Flags[1] &= ~1u;
      }
      v38 = (volatile __int64 *)*v13;
      LockHandle.LockQueue.Lock = *v13;
      LockHandle.LockQueue.Next = 0LL;
      v39 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = v39;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v38);
      }
      else
      {
        v40 = (_QWORD *)_InterlockedExchange64(v38, (__int64)&LockHandle);
        if ( v40 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v40);
        v12 = Object;
      }
      if ( v11 == 258 )
      {
        v17 = v65;
        if ( !*((_DWORD *)v12 + 34) && *v18 < *v65 + 1 )
        {
          v41 = *v13;
          if ( *((_DWORD *)*v13 + 7) <= 1u )
          {
            v17 = v65;
            if ( *(_DWORD *)(v41[1] + 4) || *((_DWORD *)v41 + 6) )
              continue;
          }
        }
        if ( *v18 <= *((_DWORD *)v12 + 28) || CurrentThread[1].FirstArgument != &CurrentThread[1].FirstArgument )
          continue;
      }
      goto LABEL_77;
    }
    _m_prefetchw(&LockHandle);
    v19 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_34:
        v12 = Object;
        goto LABEL_35;
      }
      v19 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
    goto LABEL_34;
  }
LABEL_106:
  if ( P != v87 )
    ExFreePoolWithTag(P, 0);
  if ( BugCheckParameter2 )
  {
    v53 = BugCheckParameter2 - 48;
    if ( ObpTraceFlags )
      ObpPushStackInfo(v53);
    v54 = _InterlockedExchangeAdd64((volatile signed __int64 *)v53, 0xFFFFFFFFFFFFFFFFuLL);
    v55 = v54 <= 1;
    v56 = v54 - 1;
    if ( v55 )
    {
      if ( *(_QWORD *)(v53 + 8) )
        KeBugCheckEx(
          0x18u,
          ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v53 + 24) ^ (unsigned __int64)BYTE1(v53)],
          BugCheckParameter2,
          1uLL,
          *(_QWORD *)(v53 + 8));
      if ( v56 < 0 )
        KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 2uLL, v56);
      if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
      {
        ObpDeferObjectDeletion(v53);
      }
      else
      {
        if ( (*(_BYTE *)(v53 + 26) & 0x40) != 0 )
        {
          v57 = ObpInfoMaskToOffset[*(_BYTE *)(v53 + 26) & 0x7F];
          if ( v53 != v57 )
            ObpHandleRevocationBlockRemoveObject(v53 - v57);
        }
        if ( ObpTraceFlags )
          ObpDeregisterObject(v53);
        ObpRemoveObjectRoutine(v53, 0LL);
      }
    }
  }
  if ( (Flags[1] & 1) != 0 )
    NtAlpcSendWaitReceivePort(Handle[1], Flags[0], (PPORT_MESSAGE)Handle[0], 0LL, 0LL, 0LL, 0LL, 0LL);
  return v11;
}
