/*
 * XREFs of CmpSyncNextBackupHive @ 0x140604DDC
 * Callers:
 *     NtInitializeRegistry @ 0x1405476A4 (NtInitializeRegistry.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     UnlockShutdown @ 0x140519408 (UnlockShutdown.c)
 *     TryLockShutdownShared @ 0x140603FB4 (TryLockShutdownShared.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  BOOLEAN v1; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  size_t v13; // [rsp+20h] [rbp-28h]
  unsigned int v14; // [rsp+50h] [rbp+8h]
  int v15; // [rsp+58h] [rbp+10h]

  v0 = 0;
  v1 = 0;
  if ( TryLockShutdownShared() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = ExAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v1 )
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v3, v4, v5);
    if ( CmpDoIdleProcessing && v1 )
    {
      do
      {
        v15 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 5 )
          v14 = 0;
        else
          v14 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v14, CmpPeriodicBackupFlushHiveCount) != v15 );
      if ( ((__int64)CmpMachineHiveList[19 * v14 + 4] & 1) == 0 && CmpMachineHiveList[19 * v14 + 6] )
        CmpFlushBackupHive(v14);
      if ( v14 == 5 )
      {
        v0 = -2147483622;
        if ( *(_QWORD *)&CmpConfigurationManagerKeyObject )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ExReleaseRundownProtection(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
          v1 = 0;
          LODWORD(v13) = 4;
          CmSetValueKey(
            *(__int64 *)&CmpConfigurationManagerKeyObject,
            (UNICODE_STRING *)&CmpBackupCountValueName,
            4,
            &CmpBackupCount,
            v13,
            0LL,
            0);
        }
      }
    }
    else
    {
      v0 = -1073741431;
    }
    UnlockShutdown();
  }
  else
  {
    v0 = -2147483622;
  }
  if ( v1 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  return v0;
}
