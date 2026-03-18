/*
 * XREFs of CmpCleanupTransactionState @ 0x1404F28B8
 * Callers:
 *     CmpRunDownCmRM @ 0x1404EEE04 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 *     CmObliterateRMTxArray @ 0x14065A634 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x14065A808 (CmpLazyCommitWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404C7410 (CmpLockRegistry.c)
 *     CmpLogCheckpoint @ 0x1404EEB78 (CmpLogCheckpoint.c)
 *     LockRMLog @ 0x1404F2704 (LockRMLog.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v9; // rbp
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  void **v14; // rax
  signed __int32 v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, a3);
  CmpUnlockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeGetCurrentThread();
  v11 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v10);
  v12 = v11;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_14034D768 = (__int64)v9;
  v13 = (_QWORD *)*a2;
  v14 = (void **)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || *v14 != a2 )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = v14;
  qword_14034D768 = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v15);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  *((_DWORD *)a2 + 26) |= 0x10u;
  v18 = (void *)a2[6];
  if ( v18 )
    ObfDereferenceObject(v18);
  v19 = (void *)a2[8];
  if ( v19 )
    ObDereferenceObjectDeferDelete(v19);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry();
    LockRMLog(a1);
    CmpLogCheckpoint(a1, v20, 1, v21);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    CmpUnlockRegistry();
  }
}
