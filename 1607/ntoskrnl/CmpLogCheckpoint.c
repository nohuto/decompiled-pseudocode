/*
 * XREFs of CmpLogCheckpoint @ 0x1404BD8D8
 * Callers:
 *     CmpStopRMLog @ 0x1404BD0D8 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x140519ED8 (CmpTransWriteLog.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3)
{
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *NextElement; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v14; // rbx
  void *v15; // rcx
  NTSTATUS v16; // eax
  CLFS_INFORMATION *v17; // rax
  CLFS_INFORMATION *v18; // rbx
  const CLFS_LSN *v20; // r14
  CLFS_CONTAINER_ID v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  CLFS_LSN plsn; // [rsp+48h] [rbp-89h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-81h] BYREF
  ULONG v27; // [rsp+54h] [rbp-7Dh] BYREF
  ULONG v28; // [rsp+58h] [rbp-79h] BYREF
  __int64 v29; // [rsp+60h] [rbp-71h] BYREF
  CLFS_LSN plsnNext; // [rsp+68h] [rbp-69h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+70h] [rbp-61h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+78h] [rbp-59h] BYREF

  v3 = 0;
  v29 = 0LL;
  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  plsnNext.ullOffset = (unsigned __int64)CLFS_LSN_NULL_EXT;
  pcbInfoBuffer = 120;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  while ( 1 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(a1 + 16), &v29, 0);
    if ( !NextElement )
      break;
    v20 = (const CLFS_LSN *)(NextElement + 104);
    if ( !ClfsLsnInvalid((const CLFS_LSN *)NextElement + 13) )
    {
      v21 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v20) == v21 )
      {
        ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v23, v24);
        return 0LL;
      }
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v20, &plsn) )
      plsn = *v20;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  if ( ClfsLsnInvalid(&plsn) )
  {
    LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
    LastLsn = plsn;
    v3 = LogFileInformation;
    if ( LogFileInformation >= 0 )
      LastLsn = pinfoBuffer.LastLsn;
    plsn = LastLsn;
  }
  v27 = 120;
  PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, &v27);
    ExFreePoolWithTag(v14, 0);
  }
  if ( v3 >= 0 )
  {
    v15 = *(void **)(a1 + 96);
    pvRestartBuffer = plsn;
    v16 = ClfsWriteRestartArea(
            v15,
            &pvRestartBuffer,
            8u,
            (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
            0,
            &pcbInfoBuffer,
            &plsnNext);
    v3 = v16;
    if ( a3 )
    {
      if ( v16 >= 0 )
        *(CLFS_LSN *)(a1 + 120) = plsn;
    }
  }
  v28 = 120;
  v17 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(PagedPool, 0x78uLL, 0x20204D43u);
  v18 = v17;
  if ( v17 )
  {
    ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v17, &v28);
    ExFreePoolWithTag(v18, 0);
  }
  return (unsigned int)v3;
}
