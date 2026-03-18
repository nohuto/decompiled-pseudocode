/*
 * XREFs of CmpTryToRundownHive @ 0x1400D2844
 * Callers:
 *     CmUnloadKeyEx @ 0x140498BA0 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpUnblockPushLock @ 0x1400D2A8C (ExpUnblockPushLock.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x140499670 (CmpSearchForOpenSubKeys.c)
 *     CmShutdownCmRM @ 0x14049B0F8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14049B370 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14049B390 (CmCloseRmHandle.c)
 *     CmSnapshotRMTxArray @ 0x14049B3B0 (CmSnapshotRMTxArray.c)
 *     CmObliterateRMTxArray @ 0x1405E3848 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x1405E5C08 (CmpRollbackTransactionArray.c)
 */

char CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, _DWORD *a2, char *a3, ...)
{
  char v3; // r12
  char v4; // r15
  char v5; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // r8
  bool v11; // zf
  unsigned __int64 Count; // rcx
  __int64 v14; // rcx
  unsigned __int32 v15; // ebx
  void *v16; // r14
  void *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  signed __int32 v21[12]; // [rsp+0h] [rbp-68h] BYREF
  int v22; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v23[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v3 = *a3;
  v4 = 0;
  v5 = 0;
  v22 = 0;
  while ( 1 )
  {
    if ( *a3 )
    {
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CurrentThread = KeGetCurrentThread();
    *a3 = 0;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_17:
      if ( v4 )
      {
        a2[1] &= ~0x40000u;
        _InterlockedExchange64((volatile __int64 *)&a1[347], 0LL);
        if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v21, 0);
          if ( CmpActiveHiveRundownEvent )
            ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
        }
      }
      if ( *a3 )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        *a3 = 0;
      }
      return 0;
    }
    v11 = *a2 == 2;
    *a3 = 1;
    if ( !v11 && ((unsigned int)CmpSearchForOpenSubKeys(a2, 0LL, v10, 0LL) || *a2 != 2) )
      goto LABEL_17;
    if ( !v4 )
    {
      a2[1] |= 0x40000u;
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      _InterlockedIncrement(&CmpActiveHiveRundownCount);
      ExWaitForRundownProtectionRelease(a1 + 347);
      v4 = 1;
      _InterlockedExchange64((volatile __int64 *)&a1[347], 1LL);
      LOCK_HIVE_LOAD();
      LOBYTE(v14) = 1;
      goto LABEL_15;
    }
    Count = a1[675].Count;
    if ( !Count || v5 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, &v24, v23) < 0 )
      goto LABEL_17;
    v15 = v24;
    v21[8] = v24;
    CmpLogTransactionAbortedWithChildName(a2, 0LL, 11LL);
    CmpUnlockRegistry();
    if ( v15 )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpRollbackTransactionArray(v15, v23[0], (__int64 *)va, &v22) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v20) = 1;
        CmpLockRegistryFreezeAware(v20);
        goto LABEL_17;
      }
      if ( (_BYTE)v25 == 1 )
        CmObliterateRMTxArray(a1[675].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v14) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v14);
    }
    else
    {
      v16 = (void *)CmCloseRmHandle(a1[675].Count, 0LL);
      v17 = (void *)CmCloseTmHandle(a1[675].Count);
      UNLOCK_HIVE_LOAD();
      if ( v16 )
        ZwClose(v16);
      if ( v17 )
        ZwClose(v17);
      LOCK_HIVE_LOAD();
      LOBYTE(v18) = 1;
      CmShutdownCmRM(a1[675].Count, v18);
      LOBYTE(v19) = 1;
      CmpLockRegistryFreezeAware(v19);
      v5 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v21, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0LL);
  }
  if ( !v3 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    *a3 = 0;
  }
  return 1;
}
