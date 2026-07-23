/*
 * XREFs of NtSetInformationWorkerFactory @ 0x1400C5D50
 * Callers:
 *     <none>
 * Callees:
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14002E49C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     KxWaitForLockChainValid @ 0x1400C6540 (KxWaitForLockChainValid.c)
 *     ExpWorkerFactoryCreateThread @ 0x1400C66BC (ExpWorkerFactoryCreateThread.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400C67C0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeTimeOutQueueWaiters @ 0x1400C6848 (KeTimeOutQueueWaiters.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400D5460 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ExpRemoveCurrentThreadFromThreadHistory @ 0x1400E90C0 (ExpRemoveCurrentThreadFromThreadHistory.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401C49A4 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x14042F540 (ObpRemoveObjectRoutine.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x14049BF20 (ObpHandleRevocationBlockRemoveObject.c)
 *     ExSystemExceptionFilter @ 0x14049E9B4 (ExSystemExceptionFilter.c)
 *     ObpDeregisterObject @ 0x14062F65C (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationWorkerFactory(
        HANDLE WorkerFactoryHandle,
        WORKERFACTORYINFOCLASS WorkerFactoryInformationClass,
        PVOID WorkerFactoryInformation,
        ULONG WorkerFactoryInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // dl
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int *v9; // rcx
  NTSTATUS result; // eax
  __int64 v11; // r8
  unsigned int *v12; // rdi
  NTSTATUS Thread; // r12d
  char v14; // r13
  unsigned __int64 *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  _QWORD *v17; // rdx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // eax
  bool v21; // zf
  unsigned int v22; // eax
  unsigned int v23; // eax
  char v24; // r14
  char v25; // si
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  char *v27; // rdi
  signed __int64 v28; // rbx
  bool v29; // cc
  signed __int64 v30; // rbx
  PKSPIN_LOCK v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  PKSPIN_LOCK *v35; // r14
  __int64 v36; // rax
  __int128 v37; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  PKSPIN_LOCK *v39; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v41[3]; // [rsp+78h] [rbp-40h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = 0uLL;
  if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
  {
LABEL_2:
    v7 = 4;
LABEL_3:
    if ( WorkerFactoryInformationLength != v7 )
      return -1073741820;
    if ( WorkerFactoryInformationClass == WorkerFactoryCallbackType )
    {
      if ( PreviousMode )
      {
        if ( ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)WorkerFactoryInformation + 4 > MmUserProbeAddress
          || (char *)WorkerFactoryInformation + 4 < WorkerFactoryInformation )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
LABEL_9:
      v8 = *(_DWORD *)WorkerFactoryInformation;
LABEL_10:
      LODWORD(v37) = v8;
    }
    else
    {
      switch ( WorkerFactoryInformationClass )
      {
        case WorkerFactoryIdleTimeout:
          if ( PreviousMode && ((unsigned __int8)WorkerFactoryInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&v37 = *(_QWORD *)WorkerFactoryInformation;
          v8 = *(_QWORD *)WorkerFactoryInformation;
          break;
        case WorkerFactoryBindingCount:
        case WorkerFactoryThreadMinimum:
        case WorkerFactoryThreadMaximum:
          if ( !PreviousMode )
            goto LABEL_9;
          v9 = (unsigned int *)WorkerFactoryInformation;
          if ( (unsigned __int64)WorkerFactoryInformation >= MmUserProbeAddress )
            v9 = (unsigned int *)MmUserProbeAddress;
          v8 = *v9;
          goto LABEL_10;
      }
    }
    result = ObReferenceObjectByHandle(WorkerFactoryHandle, 4u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
    v12 = (unsigned int *)Object;
    v41[2] = Object;
    if ( result >= 0 )
    {
      if ( WorkerFactoryInformationClass != WorkerFactoryAdjustThreadGoal )
      {
        Thread = 0;
        v14 = 0;
        v39 = (PKSPIN_LOCK *)((char *)Object + 16);
        v15 = (unsigned __int64 *)*((_QWORD *)Object + 2);
        LockHandle.LockQueue.Lock = v15;
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
          v17 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v15, (__int64)&LockHandle);
          if ( v17 )
            KxWaitForLockOwnerShip((__int64)&LockHandle, v17, v11);
          v12 = (unsigned int *)Object;
          v8 = v37;
        }
        if ( WorkerFactoryInformationClass != WorkerFactoryCallbackType )
        {
          switch ( WorkerFactoryInformationClass )
          {
            case WorkerFactoryIdleTimeout:
              if ( (__int64)v37 >= 0 )
                goto LABEL_128;
              if ( (__int64)v37 > -10000000 )
              {
                *(_QWORD *)&v37 = -10000000LL;
              }
              else if ( (__int64)v37 < -6000000000LL )
              {
                *(_QWORD *)&v37 = -6000000000LL;
              }
              *((_QWORD *)v12 + 13) = v37;
              v41[0] = 0LL;
              v41[1] = -1LL;
              KeSetTimer2(v12 + 40, v37, -(__int64)v37, (__int64)v41);
              goto LABEL_38;
            case WorkerFactoryBindingCount:
              v32 = v12[35];
              if ( (v8 & 0x80000000) != 0 )
              {
                if ( v32 > -v8 )
                  v12[35] = v32 + v8;
                else
                  v12[35] = 0;
              }
              else if ( v32 >= v32 + v8 )
              {
                v12[35] = -1;
              }
              else
              {
                v12[35] = v32 + v8;
              }
              if ( v32 )
              {
                if ( !v12[35] && (v12[36] & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v12);
              }
              else if ( v12[35] && (unsigned __int8)ExpTryEnterWorkerFactoryAwayMode(v12) )
              {
                ExpWorkerFactoryCheckCreate(v12, &LockHandle, 0LL);
                v24 = 0;
                goto LABEL_39;
              }
              goto LABEL_38;
            case WorkerFactoryThreadMinimum:
              v35 = v39;
              if ( *((_BYTE *)*v39 + 33) )
              {
                Thread = 128;
              }
              else
              {
                if ( v8 > v12[28] )
                  v14 = 1;
                v12[28] = v8;
                if ( v12[29] < v8 )
                  v12[29] = v8;
                if ( !v14 )
                {
                  v25 = 0;
                  goto LABEL_62;
                }
                v14 = 0;
                if ( (v12[36] & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v12);
                if ( v12[30] + v12[32] < v12[28] )
                {
                  while ( 1 )
                  {
                    ++v12[34];
                    KeReleaseInStackQueuedSpinLock(&LockHandle);
                    Thread = ExpWorkerFactoryCreateThread(v12);
                    KeAcquireInStackQueuedSpinLock(*v35, &LockHandle);
                    if ( Thread < 0 )
                      break;
                    if ( v12[30] + v12[32] >= v12[28] )
                      goto LABEL_38;
                  }
                  --v12[34];
                }
              }
              goto LABEL_38;
            case WorkerFactoryThreadMaximum:
              v31 = *v39;
              if ( *((_BYTE *)*v39 + 33) )
              {
                Thread = 128;
                goto LABEL_38;
              }
              v25 = 1;
              if ( v8 && (!v12[29] && *((_DWORD *)v31 + 6) || *(int *)(v31[1] + 4) > 0) )
                v14 = 1;
              v12[29] = v8;
              if ( v8 < v12[28] )
              {
                v12[28] = v8;
                v24 = 1;
              }
              else
              {
LABEL_62:
                v24 = 1;
              }
              break;
          }
LABEL_40:
          if ( v14 )
          {
            v33 = v12[30];
            if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 33LL) )
            {
              Thread = 128;
            }
            else
            {
              v34 = v12[29];
              if ( v33 >= v34 )
              {
                if ( !v25 )
                  Thread = -1073741527;
              }
              else
              {
                if ( v12[34] || v33 + v12[32] >= v34 )
                  goto LABEL_85;
                if ( (v12[36] & 0x200) != 0 )
                  ExpLeaveWorkerFactoryAwayMode(v12);
                ++v12[34];
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                v24 = 0;
                Thread = ExpWorkerFactoryCreateThread(v12);
                if ( Thread < 0 )
                {
                  v24 = 1;
                  KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)v12 + 2), &LockHandle);
                  --v12[34];
                  if ( v25 )
LABEL_85:
                    Thread = 0;
                }
              }
            }
          }
          if ( !v24 )
            goto LABEL_47;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
            goto LABEL_46;
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
LABEL_45:
              v12 = (unsigned int *)Object;
LABEL_46:
              __writecr8(LockHandle.OldIrql);
LABEL_47:
              v27 = (char *)(v12 - 12);
              if ( ObpTraceFlags )
                ObpPushStackInfo((_DWORD)v27);
              v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL);
              v29 = v28 <= 1;
              v30 = v28 - 1;
              if ( v29 )
              {
                if ( *((_QWORD *)v27 + 1) )
                  KeBugCheckEx(
                    0x18u,
                    ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v27[24] ^ (unsigned __int64)BYTE1(v27)],
                    (ULONG_PTR)Object,
                    1uLL,
                    *((_QWORD *)v27 + 1));
                if ( v30 < 0 )
                  KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v30);
                if ( KeAreAllApcsDisabled() )
                {
                  ObpDeferObjectDeletion(v27);
                }
                else
                {
                  v36 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v27);
                  if ( v36 )
                    ObpHandleRevocationBlockRemoveObject(v36);
                  if ( ObpTraceFlags )
                    ObpDeregisterObject(v27);
                  ObpRemoveObjectRoutine(v27, 0LL);
                }
              }
              return Thread;
            }
            Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(&LockHandle);
          }
          LockHandle.LockQueue.Next = 0LL;
          _InterlockedXor64((volatile signed __int64 *)&Next->Lock, 1uLL);
          goto LABEL_45;
        }
        if ( v8 )
        {
          v18 = v8 - 1;
          if ( !v18 )
            goto LABEL_70;
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 != 1 )
            {
LABEL_128:
              Thread = -1073741811;
              goto LABEL_38;
            }
            if ( !v12[30] )
            {
              Thread = -1073741823;
              goto LABEL_38;
            }
            ExpRemoveCurrentThreadFromThreadHistory(v12, v17);
            --v12[30];
            --v12[31];
            v21 = v12[30] == 0;
          }
          else
          {
            v20 = v12[30];
            if ( !v20 )
            {
              Thread = -1073741823;
              goto LABEL_38;
            }
            v22 = v20 - 1;
            v21 = v22 == 0;
            v12[30] = v22;
          }
          if ( v21 )
          {
LABEL_70:
            v14 = 1;
            v25 = 0;
            v24 = 1;
            goto LABEL_40;
          }
        }
        else
        {
          v23 = v12[30];
          if ( v23 == v12[31] )
            Thread = -1073741823;
          else
            v12[30] = v23 + 1;
        }
LABEL_38:
        v24 = 1;
LABEL_39:
        v25 = 0;
        goto LABEL_40;
      }
      if ( !v8 )
      {
        v8 = KeNumberProcessors_0;
        v12 = (unsigned int *)Object;
      }
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object + 2) + 8LL) + 44LL) = v8;
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      return 0;
    }
  }
  else
  {
    switch ( WorkerFactoryInformationClass )
    {
      case WorkerFactoryIdleTimeout:
        v7 = 8;
        goto LABEL_3;
      case WorkerFactoryBindingCount:
      case WorkerFactoryThreadMinimum:
      case WorkerFactoryThreadMaximum:
      case WorkerFactoryAdjustThreadGoal:
      case WorkerFactoryThreadBasePriority:
      case WorkerFactoryTimeoutWaiters:
      case WorkerFactoryFlags:
      case WorkerFactoryThreadSoftMaximum:
        goto LABEL_2;
      case WorkerFactoryPaused:
        result = -1073741822;
        break;
      case WorkerFactoryStackInformation:
        v7 = 16;
        goto LABEL_3;
      default:
        result = -1073741821;
        break;
    }
  }
  return result;
}
