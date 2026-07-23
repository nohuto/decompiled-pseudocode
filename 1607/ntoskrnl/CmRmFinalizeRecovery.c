/*
 * XREFs of CmRmFinalizeRecovery @ 0x1404CE378
 * Callers:
 *     CmpLoadKeyCommon @ 0x14010BB8C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrRollback @ 0x1404CBA14 (CmpTransMgrRollback.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rcx
  void *v14; // rcx
  struct _KTHREAD *v15; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v3 = (__int64 **)(a1 + 16);
  while ( *v3 != (__int64 *)v3 )
  {
    v8 = *v3;
    v9 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v3 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v3;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    CmpTransMgrRollback((__int64)v8, &v16);
    CmpTransMgrFreeVolatileData((ULONG_PTR)v8, 8);
    if ( v8[7] )
      CmpTransDereferenceTransaction(v8[7]);
    v13 = (void *)v8[9];
    if ( v13 )
      ObfDereferenceObject(v13);
    v14 = (void *)v8[10];
    if ( v14 )
      ZwClose(v14);
    ExFreePoolWithTag(v8, 0x72544D43u);
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  return 0LL;
}
