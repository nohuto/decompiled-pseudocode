/*
 * XREFs of CmpTryToRundownHive @ 0x1400876A8
 * Callers:
 *     CmUnloadKeyEx @ 0x14049D9AC (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     ExpUnblockPushLock @ 0x140087548 (ExpUnblockPushLock.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B4B50 (CmpLogTransactionAbortedWithChildName.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x14049ACE4 (CmpSearchForOpenSubKeys.c)
 *     CmShutdownCmRM @ 0x1404D9898 (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404EFED4 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EFEF4 (CmCloseTmHandle.c)
 *     CmObliterateRMTxArray @ 0x140603200 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 */

char CmpTryToRundownHive(struct _EX_RUNDOWN_REF *a1, _DWORD *a2, char *a3, ...)
{
  char v3; // r12
  char v4; // r15
  char v5; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // zf
  unsigned __int64 Count; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int32 v23; // ebx
  void *v24; // r14
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  signed __int32 v32[12]; // [rsp+0h] [rbp-68h] BYREF
  int v33; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v34[6]; // [rsp+38h] [rbp-30h] BYREF
  signed __int32 v35; // [rsp+80h] [rbp+18h] BYREF
  __int64 v36; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v36 = va_arg(va1, _QWORD);
  v3 = *a3;
  v4 = 0;
  v5 = 0;
  v33 = 0;
  while ( 1 )
  {
    if ( *a3 )
    {
      ExReleaseRundownProtection(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
    }
    CurrentThread = KeGetCurrentThread();
    *a3 = 0;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
LABEL_17:
      if ( v4 )
      {
        a2[1] &= ~0x40000u;
        _InterlockedExchange64((volatile __int64 *)&a1[347], 0LL);
        if ( _InterlockedExchangeAdd(&CmpActiveHiveRundownCount, 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v32, 0);
          if ( CmpActiveHiveRundownEvent )
            ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
        }
      }
      if ( *a3 )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
        *a3 = 0;
      }
      return 0;
    }
    v16 = *a2 == 2;
    *a3 = 1;
    if ( !v16 && ((unsigned int)CmpSearchForOpenSubKeys(a2, 0LL, v14, 0LL) || *a2 != 2) )
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
      LOBYTE(v19) = 1;
      goto LABEL_15;
    }
    Count = a1[675].Count;
    if ( !Count || v5 )
      break;
    if ( (int)CmSnapshotRMTxArray(Count, &v35, v34) < 0 )
      goto LABEL_17;
    v23 = v35;
    v32[8] = v35;
    CmpLogTransactionAbortedWithChildName(a2, 0LL, 11LL);
    CmpUnlockRegistry();
    if ( v23 )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpRollbackTransactionArray(v23, v34[0], (__int64 *)va, &v33) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v28) = 1;
        CmpLockRegistryFreezeAware(v28);
        goto LABEL_17;
      }
      if ( (_BYTE)v36 == 1 )
        CmObliterateRMTxArray(a1[675].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v19) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v19);
    }
    else
    {
      v24 = (void *)CmCloseRmHandle(a1[675].Count, 0LL);
      v25 = (void *)CmCloseTmHandle(a1[675].Count);
      UNLOCK_HIVE_LOAD();
      if ( v24 )
        ZwClose(v24);
      if ( v25 )
        ZwClose(v25);
      LOCK_HIVE_LOAD();
      LOBYTE(v26) = 1;
      CmShutdownCmRM(a1[675].Count, v26);
      LOBYTE(v27) = 1;
      CmpLockRegistryFreezeAware(v27);
      v5 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v32, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
  }
  if ( !v3 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
    *a3 = 0;
  }
  return 1;
}
