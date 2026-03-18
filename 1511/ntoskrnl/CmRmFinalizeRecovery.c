/*
 * XREFs of CmRmFinalizeRecovery @ 0x1404C2C8C
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x1404BA9E8 (CmpTransMgrRollback.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v3; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  struct _KTHREAD *v12; // rax
  int v13; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 **)(a1 + 16);
  while ( *v3 != (__int64 *)v3 )
  {
    v5 = *v3;
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmpTransMgrRollback((__int64)v5, &v13);
    CmpTransMgrFreeVolatileData((__int64)v5, 8LL, v7, v8);
    v9 = (void *)v5[6];
    if ( v9 )
      ObfDereferenceObject(v9);
    v10 = (void *)v5[8];
    if ( v10 )
      ObfDereferenceObject(v10);
    v11 = (void *)v5[9];
    if ( v11 )
      ZwClose(v11);
    ExFreePoolWithTag(v5, 0x72544D43u);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
