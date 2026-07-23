/*
 * XREFs of CmpTryToRundownHive @ 0x14010B8A0
 * Callers:
 *     CmUnloadKeyEx @ 0x140515DB8 (CmUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140517B00 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B2988 (CmpLogTransactionAbortedWithChildName.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExpUnblockPushLock @ 0x14010B740 (ExpUnblockPushLock.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     CmpSearchForOpenSubKeys @ 0x1403E3C04 (CmpSearchForOpenSubKeys.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FA6A4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x1403FA774 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmShutdownCmRM @ 0x1404BCE9C (CmShutdownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmCloseRmHandle @ 0x1404D1FC8 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404D1FE8 (CmCloseTmHandle.c)
 *     CmObliterateRMTxArray @ 0x1406032B4 (CmObliterateRMTxArray.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
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
  __int64 v23; // r9
  unsigned int v24; // ebx
  void *v25; // r14
  void *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  signed __int32 v33[8]; // [rsp+0h] [rbp-68h] BYREF
  int v34; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v35[6]; // [rsp+38h] [rbp-30h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+18h] BYREF
  __int64 v37; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v37 = va_arg(va1, _QWORD);
  v3 = *a3;
  v4 = 0;
  v5 = 0;
  v34 = 0;
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
          _InterlockedOr(v33, 0);
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
    if ( (int)CmSnapshotRMTxArray(Count, &v36, v35) < 0 )
      goto LABEL_17;
    v24 = v36;
    CmpLogTransactionAbortedWithChildName((__int64)a2, 0LL, 0xBu, v23, v36);
    CmpUnlockRegistry();
    if ( v24 )
    {
      UNLOCK_HIVE_LOAD();
      if ( (int)CmpRollbackTransactionArray(v24, v35[0], (__int64 *)va, &v34) < 0 )
      {
        LOCK_HIVE_LOAD();
        LOBYTE(v29) = 1;
        CmpLockRegistryFreezeAware(v29);
        goto LABEL_17;
      }
      if ( (_BYTE)v37 == 1 )
        CmObliterateRMTxArray(a1[675].Count);
      LOCK_HIVE_LOAD();
      LOBYTE(v19) = 1;
LABEL_15:
      CmpLockRegistryFreezeAware(v19);
    }
    else
    {
      v25 = (void *)CmCloseRmHandle(a1[675].Count, 0LL);
      v26 = (void *)CmCloseTmHandle(a1[675].Count);
      UNLOCK_HIVE_LOAD();
      if ( v25 )
        ZwClose(v25);
      if ( v26 )
        ZwClose(v26);
      LOCK_HIVE_LOAD();
      LOBYTE(v27) = 1;
      CmShutdownCmRM(a1[675].Count, v27);
      LOBYTE(v28) = 1;
      CmpLockRegistryFreezeAware(v28);
      v5 = 1;
    }
  }
  if ( !_InterlockedDecrement(&CmpActiveHiveRundownCount) )
  {
    _InterlockedOr(v33, 0);
    if ( CmpActiveHiveRundownEvent )
      ExpUnblockPushLock(&CmpActiveHiveRundownEvent, 0LL, 0);
  }
  if ( !v3 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
    *a3 = 0;
  }
  return 1;
}
