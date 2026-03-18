/*
 * XREFs of CmpSyncNextBackupHive @ 0x14065C7C4
 * Callers:
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     UnlockShutdown @ 0x1404EA6C8 (UnlockShutdown.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     TryLockShutdownShared @ 0x14065DB70 (TryLockShutdownShared.c)
 */

__int64 CmpSyncNextBackupHive()
{
  unsigned int v0; // ebx
  BOOLEAN v1; // di
  wchar_t **v2; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rcx
  unsigned __int64 v5; // rtt
  __int16 v6; // ax
  unsigned __int64 v7; // rtt
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  unsigned __int64 v10; // rtt
  struct _KTHREAD *v11; // rdx
  __int16 v12; // ax
  size_t v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+50h] [rbp+8h]
  int v16; // [rsp+58h] [rbp+10h]

  v0 = 0;
  v1 = 0;
  if ( (unsigned __int8)TryLockShutdownShared() )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _m_prefetchw(&CmpShutdownRundown);
    v4 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
    v5 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpShutdownRundown,
                 v4,
                 CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    {
      v1 = 1;
    }
    else
    {
      v1 = ExfAcquireRundownProtection(&CmpShutdownRundown);
      if ( !v1 )
      {
        v4 = (signed __int64)KeGetCurrentThread();
        v6 = *(_WORD *)(v4 + 484) + 1;
        *(_WORD *)(v4 + 484) = v6;
        if ( !v6 && *(_QWORD *)(v4 + 152) != v4 + 152 && !*(_WORD *)(v4 + 486) )
          KiCheckForKernelApcDelivery();
      }
    }
    if ( CmpDoIdleProcessing && v1 )
    {
      do
      {
        v16 = CmpPeriodicBackupFlushHiveCount;
        if ( (unsigned int)CmpPeriodicBackupFlushHiveCount >= 5 )
          v15 = 0;
        else
          v15 = CmpPeriodicBackupFlushHiveCount + 1;
      }
      while ( _InterlockedCompareExchange(&CmpPeriodicBackupFlushHiveCount, v15, CmpPeriodicBackupFlushHiveCount) != v16 );
      v2 = CmpMachineHiveList;
      v4 = 152LL * v15;
      if ( (*(_DWORD *)((_BYTE *)&CmpMachineHiveList[4] + v4) & 1) == 0 )
      {
        v4 = 152LL * v15;
        if ( *(wchar_t **)((char *)&CmpMachineHiveList[6] + v4) )
          CmpFlushBackupHive(v15);
      }
      if ( v15 == 5 )
      {
        v0 = -2147483622;
        if ( CmpConfigurationManagerKeyObject )
        {
          _InterlockedIncrement(&CmpBackupCount);
          _m_prefetchw(&CmpShutdownRundown);
          v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v7 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpShutdownRundown,
                       (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                       CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v8 = KeGetCurrentThread();
          v9 = v8->KernelApcDisable + 1;
          v8->KernelApcDisable = v9;
          if ( !v9
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
            && !v8->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          LODWORD(v14) = 4;
          v1 = 0;
          CmSetValueKey(
            CmpConfigurationManagerKeyObject,
            (const UNICODE_STRING *)&CmpBackupCountValueName,
            4u,
            &CmpBackupCount,
            v14,
            0LL,
            0);
        }
      }
    }
    else
    {
      v0 = -1073741431;
    }
    UnlockShutdown(v4, (__int64)v2);
  }
  else
  {
    v0 = -2147483622;
  }
  if ( v1 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v11 = KeGetCurrentThread();
    v12 = v11->KernelApcDisable + 1;
    v11->KernelApcDisable = v12;
    if ( !v12
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
      && !v11->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v0;
}
