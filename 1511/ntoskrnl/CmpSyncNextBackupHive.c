/*
 * XREFs of CmpSyncNextBackupHive @ 0x1405E57D8
 * Callers:
 *     NtInitializeRegistry @ 0x14050C454 (NtInitializeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     UnlockShutdown @ 0x1403BABE4 (UnlockShutdown.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     TryLockShutdownShared @ 0x1405E6734 (TryLockShutdownShared.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  BOOLEAN v1; // di
  struct _KTHREAD *CurrentThread; // rax
  size_t v4; // [rsp+20h] [rbp-28h]
  unsigned int v5; // [rsp+50h] [rbp+8h]
  int v6; // [rsp+58h] [rbp+10h]

  v0 = 0;
  v1 = 0;
  if ( (unsigned __int8)TryLockShutdownShared() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v1 = ExAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v1 )
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpDoIdleProcessing && v1 )
    {
      do
      {
        v6 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 5 )
          v5 = 0;
        else
          v5 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v5, CmpPeriodicBackupFlushHiveCount) != v6 );
      if ( ((__int64)CmpMachineHiveList[19 * v5 + 4] & 1) == 0 && CmpMachineHiveList[19 * v5 + 6] )
        CmpFlushBackupHive(v5);
      if ( v5 == 5 )
      {
        v0 = -2147483622;
        if ( *(_QWORD *)&CmpConfigurationManagerKeyObject )
        {
          _InterlockedIncrement(&CmpBackupCount);
          ExReleaseRundownProtection_0(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          v1 = 0;
          LODWORD(v4) = 4;
          CmSetValueKey(
            *(__int64 *)&CmpConfigurationManagerKeyObject,
            (const UNICODE_STRING *)&CmpBackupCountValueName,
            4u,
            &CmpBackupCount,
            v4,
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
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v0;
}
