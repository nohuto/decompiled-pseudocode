/*
 * XREFs of CmRmFinalizeRecovery @ 0x1404EC588
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x1405640A8 (CmpTransMgrRollback.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rbx
  __int64 **v10; // rdi
  signed __int32 v11; // eax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 *v15; // rbx
  __int64 v16; // rax
  signed __int32 v17; // eax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  struct _KTHREAD *v23; // rax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rbx
  char v27; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  v7 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
  v9 = v7;
  if ( !v8 )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (__int64 **)(a1 + 16);
  while ( 1 )
  {
    qword_14034D768 = (__int64)v6;
    if ( *v10 == (__int64 *)v10 )
      break;
    v15 = *v10;
    v16 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v16 + 8) != v15 )
      __fastfail(3u);
    *v10 = (__int64 *)v16;
    *(_QWORD *)(v16 + 8) = v10;
    qword_14034D768 = 0LL;
    v17 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v17 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v17);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v18 = KeGetCurrentThread();
    v19 = v18->KernelApcDisable + 1;
    v18->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
      && !v18->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    CmpTransMgrRollback(v15, &v27);
    CmpTransMgrFreeVolatileData((__int64)v15, 8);
    v20 = (void *)v15[6];
    if ( v20 )
      ObfDereferenceObject(v20);
    v21 = (void *)v15[8];
    if ( v21 )
      ObfDereferenceObject(v21);
    v22 = (void *)v15[9];
    if ( v22 )
      ZwClose(v22);
    ExFreePoolWithTag(v15, 0x72544D43u);
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v6 = KeGetCurrentThread();
    v25 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v24);
    v8 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
    v26 = v25;
    if ( !v8 )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v25);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
  }
  qword_14034D768 = 0LL;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v11);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
