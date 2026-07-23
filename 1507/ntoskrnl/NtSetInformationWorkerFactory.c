/*
 * XREFs of NtSetInformationWorkerFactory @ 0x14006CC00
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002DDCC (ExpLeaveWorkerFactoryAwayMode.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x14006CAF0 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x14006D694 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KeTimeOutQueueWaiters @ 0x140120854 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x140125CCC (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     ExSystemExceptionFilter @ 0x14040A5E8 (ExSystemExceptionFilter.c)
 *     ObpRemoveObjectRoutine @ 0x14048AD40 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140524370 (ObpHandleRevocationBlockRemoveObject.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  int v8; // eax
  NTSTATUS result; // eax
  unsigned int *v10; // rcx
  unsigned int v11; // edi
  unsigned int *v12; // rbx
  NTSTATUS Thread; // r14d
  bool v14; // r13
  PKSPIN_LOCK *v15; // r15
  unsigned __int64 *v16; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v18; // rdx
  char v19; // r12
  __int64 v20; // rdx
  unsigned int v21; // edx
  int v22; // eax
  PKSPIN_LOCK v23; // rax
  unsigned int v24; // edx
  unsigned int v25; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  signed __int64 v27; // rbx
  signed __int64 v28; // rdi
  bool v29; // cc
  signed __int64 v30; // rdi
  __int64 v31; // rax
  signed __int64 v32; // rcx
  signed __int64 i; // rax
  __int128 v34; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v37[4]; // [rsp+70h] [rbp-48h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v39; // [rsp+C8h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = 0uLL;
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryIdleTimeout:
      v8 = 8;
      goto LABEL_6;
    case WorkerFactoryBindingCount:
    case WorkerFactoryThreadMinimum:
    case WorkerFactoryThreadMaximum:
    case WorkerFactoryAdjustThreadGoal:
    case WorkerFactoryCallbackType:
    case WorkerFactoryThreadBasePriority:
    case WorkerFactoryTimeoutWaiters:
    case WorkerFactoryFlags:
    case WorkerFactoryThreadSoftMaximum:
      v8 = 4;
      goto LABEL_6;
    case WorkerFactoryPaused:
      return -1073741822;
    case WorkerFactoryStackInformation:
      v8 = 16;
LABEL_6:
      if ( WorkerFactoryInformationLength != v8 )
        return -1073741820;
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v34 = *(_QWORD *)WorkerFactoryInformation;
          v11 = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( PreviousMode )
          {
            v10 = (unsigned int *)WorkerFactoryInformation;
            if ( (unsigned __int64)WorkerFactoryInformation >= MmUserProbeAddress )
              v10 = (unsigned int *)MmUserProbeAddress;
            v11 = *v10;
            LODWORD(v34) = *v10;
          }
          else
          {
            v11 = *(_DWORD *)WorkerFactoryInformation;
            LODWORD(v34) = *(_DWORD *)WorkerFactoryInformation;
          }
          break;
        default:
          return -1073741821;
      }
      result = ObReferenceObjectByHandle(
                 WorkerFactoryHandle,
                 4u,
                 ExpWorkerFactoryObjectType,
                 PreviousMode,
                 &Object,
                 0LL);
      v12 = (unsigned int *)Object;
      v37[2] = Object;
      if ( result < 0 )
        return result;
      if ( WorkerFactoryInformationClass == WorkerFactoryAdjustThreadGoal )
      {
        if ( !v11 )
        {
          v11 = KeNumberProcessors_0;
          v12 = (unsigned int *)Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v11;
        ObfDereferenceObjectWithTag(v12, 0x746C6644u);
        return 0;
      }
      Thread = 0;
      v14 = 0;
      v39 = 1;
      v15 = (PKSPIN_LOCK *)((char *)Object + 16);
      v16 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v16;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v16);
      }
      else
      {
        v18 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v16, (__int64)&LockHandle);
        if ( v18 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v18);
        v12 = (unsigned int *)Object;
        v11 = v34;
      }
      switch ( 0x40000000u )
      {
        case 0u:
          if ( *((_BYTE *)*v15 + 33) )
            goto LABEL_30;
          if ( (__int64)v34 >= 0 )
          {
            Thread = -1073741811;
          }
          else
          {
            v20 = -10000000LL;
            if ( (__int64)v34 <= -10000000 )
            {
              v20 = v34;
              if ( (__int64)v34 < -6000000000LL )
                v20 = -6000000000LL;
            }
            *((_QWORD *)v12 + 13) = v20;
            v37[0] = 0LL;
            v37[1] = -1LL;
            KeSetTimer2(v12 + 40, v20, -v20, v37);
          }
LABEL_75:
          v19 = 0;
          goto LABEL_76;
        case 1u:
          v21 = v12[35];
          if ( (v11 & 0x80000000) != 0 )
          {
            if ( v21 <= -v11 )
              v12[35] = 0;
            else
              v12[35] = v21 + v11;
          }
          else
          {
            v22 = -1;
            if ( v21 < v21 + v11 )
              v22 = v21 + v11;
            v12[35] = v22;
          }
          if ( v21 )
          {
            if ( !v12[35] && (v12[36] & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode(v12);
          }
          else if ( v12[35] && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v12) )
          {
            ExpWorkerFactoryCheckCreate(v12, &LockHandle, 0);
            v39 = 0;
          }
          goto LABEL_75;
        case 2u:
          if ( *((_BYTE *)*v15 + 33) )
          {
            Thread = 128;
            v19 = 0;
            goto LABEL_76;
          }
          v14 = v11 > v12[28];
          v12[28] = v11;
          if ( v12[29] < v11 )
            v12[29] = v11;
          if ( !v14 )
            goto LABEL_63;
          v14 = 0;
          if ( (v12[36] & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v12);
          if ( v12[30] + v12[32] >= v12[28] )
            goto LABEL_63;
          break;
        case 3u:
          v23 = *v15;
          if ( *((_BYTE *)*v15 + 33) )
          {
LABEL_30:
            Thread = 128;
            v19 = 0;
          }
          else
          {
            if ( v11 && (!v12[29] && *((_DWORD *)v23 + 6) || *(int *)(v23[1] + 4) > 0) )
              v14 = 1;
            v12[29] = v11;
            if ( v11 < v12[28] )
              v12[28] = v11;
            v19 = 1;
          }
          goto LABEL_76;
        default:
          return -1073741821;
      }
      break;
    default:
      return -1073741821;
  }
  while ( 1 )
  {
    ++v12[34];
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    Thread = ExpWorkerFactoryCreateThread((__int64)v12);
    KeAcquireInStackQueuedSpinLock(*v15, &LockHandle);
    if ( Thread < 0 )
      break;
    if ( v12[30] + v12[32] >= v12[28] )
    {
      v19 = 0;
      goto LABEL_76;
    }
  }
  --v12[34];
LABEL_63:
  v19 = 0;
LABEL_76:
  if ( v14 )
  {
    v24 = v12[30];
    if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 33LL) )
    {
      Thread = 128;
    }
    else
    {
      v25 = v12[29];
      if ( v24 < v25 )
      {
        if ( v12[34] || v24 + v12[32] >= v25 )
          goto LABEL_88;
        if ( (v12[36] & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v12);
        ++v12[34];
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v39 = 0;
        Thread = ExpWorkerFactoryCreateThread((__int64)v12);
        if ( Thread < 0 )
        {
          v39 = 1;
          KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v12 + 2), &LockHandle);
          --v12[34];
          if ( v19 )
LABEL_88:
            Thread = 0;
        }
      }
      else if ( !v19 )
      {
        Thread = -1073741527;
      }
    }
  }
  if ( v39 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_97:
      __writecr8(LockHandle.OldIrql);
      goto LABEL_98;
    }
    _m_prefetchw(&LockHandle);
    Next = LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
      {
LABEL_96:
        v12 = (unsigned int *)Object;
        goto LABEL_97;
      }
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_96;
  }
LABEL_98:
  v27 = (signed __int64)(v12 - 12);
  if ( ObpTraceFlags )
    ObpPushStackInfo(v27);
  v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL);
  v29 = v28 <= 1;
  v30 = v28 - 1;
  if ( v29 )
  {
    if ( *(_QWORD *)(v27 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v27 + 24) ^ (unsigned __int64)BYTE1(v27)],
        (ULONG_PTR)Object,
        1uLL,
        *(_QWORD *)(v27 + 8));
    if ( v30 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v30);
    if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      _m_prefetchw(&ObpRemoveObjectList);
      v32 = ObpRemoveObjectList;
      *(_QWORD *)(v27 + 8) = ObpRemoveObjectList;
      for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, v27, v32);
            i != v32;
            i = _InterlockedCompareExchange64(&ObpRemoveObjectList, v27, i) )
      {
        v32 = i;
        *(_QWORD *)(v27 + 8) = i;
      }
      if ( !v32 )
      {
        if ( (unsigned __int8)KeAreInterruptsEnabled() && KeGetCurrentIrql() <= 2u )
          ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
        else
          KiInsertQueueDpc((unsigned int)&ObpRemoveObjectDpc, 0, 0, 0, 0);
      }
    }
    else
    {
      if ( (*(_BYTE *)(v27 + 26) & 0x40) != 0 )
      {
        v31 = ObpInfoMaskToOffset[*(_BYTE *)(v27 + 26) & 0x7F];
        if ( v27 != v31 )
          ObpHandleRevocationBlockRemoveObject(v27 - v31);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v27);
      ObpRemoveObjectRoutine(v27, 0LL);
    }
  }
  return Thread;
}
