/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1400F5A50
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     KeAreInterruptsEnabled @ 0x140051240 (KeAreInterruptsEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     KeTimeOutQueueWaiters @ 0x1400A6788 (KeTimeOutQueueWaiters.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1400A96B0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400F6478 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F6D70 (ExpWorkerFactoryCheckCreate.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400F7224 (ExpWorkerFactoryCreateThread.c)
 *     KxWaitForLockChainValid @ 0x1400F7370 (KxWaitForLockChainValid.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400F7920 (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401D3988 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ObpRemoveObjectRoutine @ 0x14041A5F0 (ObpRemoveObjectRoutine.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1404A5760 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r9
  int v7; // eax
  NTSTATUS result; // eax
  __int64 v9; // rax
  unsigned int v10; // edi
  PVOID v11; // rbx
  NTSTATUS Thread; // r14d
  bool v13; // r13
  PKSPIN_LOCK *v14; // r15
  unsigned __int64 *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v17; // rdx
  char v18; // r12
  __int64 v19; // rdx
  unsigned int v20; // edx
  int v21; // eax
  PKSPIN_LOCK v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // eax
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  signed __int64 v26; // rbx
  signed __int64 v27; // rdi
  bool v28; // cc
  signed __int64 v29; // rdi
  __int64 v30; // rcx
  __int128 v31; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v34[4]; // [rsp+70h] [rbp-48h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  char v36; // [rsp+C8h] [rbp+10h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = 0uLL;
  switch ( WorkerFactoryInformationClass )
  {
    case WorkerFactoryIdleTimeout:
      v7 = 8;
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
      v7 = 4;
      goto LABEL_6;
    case WorkerFactoryPaused:
      return -1073741822;
    case WorkerFactoryStackInformation:
      v7 = 16;
LABEL_6:
      if ( WorkerFactoryInformationLength != v7 )
        return -1073741820;
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v31 = *(_QWORD *)WorkerFactoryInformation;
          v10 = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( PreviousMode )
          {
            v9 = (__int64)WorkerFactoryInformation;
            if ( (unsigned __int64)WorkerFactoryInformation >= 0x7FFFFFFF0000LL )
              v9 = 0x7FFFFFFF0000LL;
            v10 = *(_DWORD *)v9;
            LODWORD(v31) = *(_DWORD *)v9;
          }
          else
          {
            v10 = *(_DWORD *)WorkerFactoryInformation;
            LODWORD(v31) = *(_DWORD *)WorkerFactoryInformation;
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
      v11 = Object;
      v34[2] = Object;
      if ( result < 0 )
        return result;
      if ( WorkerFactoryInformationClass == WorkerFactoryAdjustThreadGoal )
      {
        if ( !v10 )
        {
          v10 = KeNumberProcessors_0;
          v11 = Object;
        }
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v10;
        ObfDereferenceObjectWithTag(v11, 0x746C6644u);
        return 0;
      }
      Thread = 0;
      v13 = 0;
      v36 = 1;
      v14 = (PKSPIN_LOCK *)((char *)Object + 16);
      v15 = (unsigned __int64 *)*((_QWORD *)Object + 2);
      LockHandle.LockQueue.Lock = v15;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&LockHandle, v15);
      }
      else
      {
        v17 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v15, (__int64)&LockHandle);
        if ( v17 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v17);
        v11 = Object;
        v10 = v31;
      }
      switch ( 0x40000000u )
      {
        case 0u:
          if ( *((_BYTE *)*v14 + 33) )
            goto LABEL_30;
          if ( (__int64)v31 >= 0 )
          {
            Thread = -1073741811;
          }
          else
          {
            v19 = -10000000LL;
            if ( (__int64)v31 <= -10000000 )
            {
              v19 = v31;
              if ( (__int64)v31 < -6000000000LL )
                v19 = -6000000000LL;
            }
            *((_QWORD *)v11 + 14) = v19;
            v34[0] = 0LL;
            v34[1] = -1LL;
            KeSetTimer2((__int64)v11 + 168, v19, -v19, (__int64)v34);
          }
LABEL_75:
          v18 = 0;
          goto LABEL_76;
        case 1u:
          v20 = *((_DWORD *)v11 + 37);
          if ( (v10 & 0x80000000) != 0 )
          {
            if ( v20 <= -v10 )
              *((_DWORD *)v11 + 37) = 0;
            else
              *((_DWORD *)v11 + 37) = v20 + v10;
          }
          else
          {
            v21 = -1;
            if ( v20 < v20 + v10 )
              v21 = v20 + v10;
            *((_DWORD *)v11 + 37) = v21;
          }
          if ( v20 )
          {
            if ( !*((_DWORD *)v11 + 37) && (*((_DWORD *)v11 + 38) & 0x200) != 0 )
              ExpLeaveWorkerFactoryAwayMode(v11);
          }
          else if ( *((_DWORD *)v11 + 37) && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v11) )
          {
            ExpWorkerFactoryCheckCreate(v11, &LockHandle);
            v36 = 0;
          }
          goto LABEL_75;
        case 2u:
          if ( *((_BYTE *)*v14 + 33) )
          {
            Thread = 128;
            v18 = 0;
            goto LABEL_76;
          }
          v13 = v10 > *((_DWORD *)v11 + 30);
          *((_DWORD *)v11 + 30) = v10;
          if ( *((_DWORD *)v11 + 31) < v10 )
            *((_DWORD *)v11 + 31) = v10;
          if ( !v13 )
            goto LABEL_63;
          v13 = 0;
          if ( (*((_DWORD *)v11 + 38) & 0x200) != 0 )
            ExpLeaveWorkerFactoryAwayMode(v11);
          if ( (unsigned int)(*((_DWORD *)v11 + 32) + *((_DWORD *)v11 + 34)) >= *((_DWORD *)v11 + 30) )
            goto LABEL_63;
          break;
        case 3u:
          v22 = *v14;
          if ( *((_BYTE *)*v14 + 33) )
          {
LABEL_30:
            Thread = 128;
            v18 = 0;
          }
          else
          {
            if ( v10 && (!*((_DWORD *)v11 + 31) && *((_DWORD *)v22 + 6) || *(int *)(v22[1] + 4) > 0) )
              v13 = 1;
            *((_DWORD *)v11 + 31) = v10;
            if ( v10 < *((_DWORD *)v11 + 30) )
              *((_DWORD *)v11 + 30) = v10;
            v18 = 1;
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
    ++*((_DWORD *)v11 + 36);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    Thread = ExpWorkerFactoryCreateThread(v11);
    KeAcquireInStackQueuedSpinLock(*v14, &LockHandle);
    if ( Thread < 0 )
      break;
    if ( (unsigned int)(*((_DWORD *)v11 + 32) + *((_DWORD *)v11 + 34)) >= *((_DWORD *)v11 + 30) )
    {
      v18 = 0;
      goto LABEL_76;
    }
  }
  --*((_DWORD *)v11 + 36);
LABEL_63:
  v18 = 0;
LABEL_76:
  if ( v13 )
  {
    v23 = *((_DWORD *)v11 + 32);
    if ( *(_BYTE *)(*((_QWORD *)v11 + 2) + 33LL) )
    {
      Thread = 128;
    }
    else
    {
      v24 = *((_DWORD *)v11 + 31);
      if ( v23 < v24 )
      {
        if ( *((_DWORD *)v11 + 36) || v23 + *((_DWORD *)v11 + 34) >= v24 )
          goto LABEL_88;
        if ( (*((_DWORD *)v11 + 38) & 0x200) != 0 )
          ExpLeaveWorkerFactoryAwayMode(v11);
        ++*((_DWORD *)v11 + 36);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v36 = 0;
        Thread = ExpWorkerFactoryCreateThread(v11);
        if ( Thread < 0 )
        {
          v36 = 1;
          KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v11 + 2), &LockHandle);
          --*((_DWORD *)v11 + 36);
          if ( v18 )
LABEL_88:
            Thread = 0;
        }
      }
      else if ( !v18 )
      {
        Thread = -1073741527;
      }
    }
  }
  if ( v36 )
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
        v11 = Object;
        goto LABEL_97;
      }
      Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
    goto LABEL_96;
  }
LABEL_98:
  v26 = (signed __int64)v11 - 48;
  if ( ObpTraceFlags )
    ObpPushStackInfo(v26);
  v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)v26, 0xFFFFFFFFFFFFFFFFuLL);
  v28 = v27 <= 1;
  v29 = v27 - 1;
  if ( v28 )
  {
    if ( *(_QWORD *)(v26 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v26 + 24) ^ (unsigned __int64)BYTE1(v26)],
        (ULONG_PTR)Object,
        1uLL,
        *(_QWORD *)(v26 + 8));
    if ( v29 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v29);
    if ( KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql() )
    {
      ObpDeferObjectDeletion(v26);
    }
    else
    {
      if ( (*(_BYTE *)(v26 + 26) & 0x40) != 0 )
      {
        v30 = *(_QWORD *)(v26 - ObpInfoMaskToOffset[*(_BYTE *)(v26 + 26) & 0x7F]);
        if ( *(_BYTE *)(v30 + 24) )
          ObpHandleRevocationBlockRemoveObject(v30);
      }
      if ( ObpTraceFlags )
        ObpDeregisterObject(v26);
      ObpRemoveObjectRoutine(v26, 0LL);
    }
  }
  return Thread;
}
