/*
 * XREFs of CmpLogCheckpoint @ 0x1404EEB78
 * Callers:
 *     CmpStopRMLog @ 0x1404EF168 (CmpStopRMLog.c)
 *     CmpTransWriteLog @ 0x1404F2470 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpLogCheckpoint(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v6; // esi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  const CLFS_LSN *NextElement; // rax
  int v12; // r8d
  POOL_TYPE v13; // r14d
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  NTSTATUS LogFileInformation; // eax
  CLFS_LSN LastLsn; // rcx
  CLFS_INFORMATION *PoolWithTag; // rax
  CLFS_INFORMATION *v20; // rbx
  void *v21; // rcx
  NTSTATUS v22; // eax
  CLFS_INFORMATION *v23; // rax
  CLFS_INFORMATION *v24; // rbx
  const CLFS_LSN *v26; // r14
  CLFS_CONTAINER_ID v27; // ebx
  signed __int32 v28; // eax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  CLFS_LSN plsn; // [rsp+48h] [rbp-89h] BYREF
  ULONG pcbInfoBuffer; // [rsp+50h] [rbp-81h] BYREF
  ULONG v33; // [rsp+54h] [rbp-7Dh] BYREF
  ULONG v34; // [rsp+58h] [rbp-79h] BYREF
  __int64 v35; // [rsp+60h] [rbp-71h] BYREF
  CLFS_LSN pvRestartBuffer; // [rsp+68h] [rbp-69h] BYREF
  CLFS_LSN plsnNext; // [rsp+70h] [rbp-61h] BYREF
  CLFS_INFORMATION pinfoBuffer; // [rsp+78h] [rbp-59h] BYREF

  plsn.ullOffset = CLFS_LSN_INVALID_EXT;
  plsnNext.ullOffset = (unsigned __int64)CLFS_LSN_NULL_EXT;
  v6 = 0;
  pcbInfoBuffer = 120;
  CurrentThread = KeGetCurrentThread();
  v35 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = KeGetCurrentThread();
  v9 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
  v10 = v9;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14034D768 = (__int64)v8;
  while ( 1 )
  {
    NextElement = (const CLFS_LSN *)CmListGetNextElement(a1 + 16, &v35, 0LL);
    if ( !NextElement )
    {
      qword_14034D768 = 0LL;
      v13 = v12 + 1;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, v12 + 1, 0);
      if ( v14 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v14);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v15 = KeGetCurrentThread();
      v16 = v15->KernelApcDisable + 1;
      v15->KernelApcDisable = v16;
      if ( !v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
        && !v15->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( ClfsLsnInvalid(&plsn) )
      {
        LogFileInformation = ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), &pinfoBuffer, &pcbInfoBuffer);
        LastLsn = plsn;
        v6 = LogFileInformation;
        if ( LogFileInformation >= 0 )
          LastLsn = pinfoBuffer.LastLsn;
        plsn = LastLsn;
      }
      v34 = 120;
      PoolWithTag = (CLFS_INFORMATION *)ExAllocatePoolWithTag(v13, 0x78uLL, 0x20204D43u);
      v20 = PoolWithTag;
      if ( PoolWithTag )
      {
        ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), PoolWithTag, &v34);
        ExFreePoolWithTag(v20, 0);
      }
      if ( v6 >= 0 )
      {
        v21 = *(void **)(a1 + 96);
        pvRestartBuffer = plsn;
        v22 = ClfsWriteRestartArea(
                v21,
                &pvRestartBuffer,
                8u,
                (PCLFS_LSN)((unsigned __int64)&plsn & -(__int64)(a3 != 0)),
                0,
                &pcbInfoBuffer,
                &plsnNext);
        v6 = v22;
        if ( a3 )
        {
          if ( v22 >= 0 )
            *(CLFS_LSN *)(a1 + 120) = plsn;
        }
      }
      v33 = 120;
      v23 = (CLFS_INFORMATION *)ExAllocatePoolWithTag(v13, 0x78uLL, 0x20204D43u);
      v24 = v23;
      if ( v23 )
      {
        ClfsGetLogFileInformation(*(PLOG_FILE_OBJECT *)(a1 + 88), v23, &v33);
        ExFreePoolWithTag(v24, 0);
      }
      return (unsigned int)v6;
    }
    v26 = NextElement + 12;
    if ( !ClfsLsnInvalid(NextElement + 12) )
    {
      v27 = ClfsLsnContainer((const CLFS_LSN *)(a1 + 120));
      if ( ClfsLsnContainer(v26) == v27 )
        break;
    }
    if ( ClfsLsnInvalid(&plsn) || ClfsLsnLess(v26, &plsn) )
      plsn = *v26;
  }
  qword_14034D768 = 0LL;
  v28 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v28 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v28);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v29 = KeGetCurrentThread();
  v30 = v29->KernelApcDisable + 1;
  v29->KernelApcDisable = v30;
  if ( !v30
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
    && !v29->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0LL;
}
