/*
 * XREFs of CmShutdownSystem @ 0x1405FC64C
 * Callers:
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074D34 (ExWaitForRundownProtectionRelease.c)
 *     CmpGetNextFailedUnloadHive @ 0x140083CFC (CmpGetNextFailedUnloadHive.c)
 *     ExBlockOnAddressPushLock @ 0x1400872BC (ExBlockOnAddressPushLock.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     CmpUnJoinClassOfTrust @ 0x1401B47B0 (CmpUnJoinClassOfTrust.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1403FB6D0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x14047D4CC (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpDoFileSetSizeEx @ 0x14047E8FC (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x14049FCA0 (CmpCmdHiveClose.c)
 *     UnlockShutdown @ 0x1404A0FFC (UnlockShutdown.c)
 *     CmShutdownCmRM @ 0x1404D9898 (CmShutdownCmRM.c)
 *     HvViewMapCleanup @ 0x1404EEEA8 (HvViewMapCleanup.c)
 *     CmCloseRmHandle @ 0x1404EFED4 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EFEF4 (CmCloseTmHandle.c)
 *     HvMarkBaseBlockDirty @ 0x140564650 (HvMarkBaseBlockDirty.c)
 *     CmpTraceShutdownRundownComplete @ 0x1405FC260 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x1405FC2C8 (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x1405FCA7C (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x1405FCBD4 (CmpRecordShutdownStopTime.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601C64 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     LockShutdownExclusive @ 0x140603EA0 (LockShutdownExclusive.c)
 *     CmpSendBootDeviceUsageNotification @ 0x1406042CC (CmpSendBootDeviceUsageNotification.c)
 */

char __fastcall CmShutdownSystem(int a1)
{
  _UNKNOWN **v1; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v3; // rdi
  char v4; // dl
  void *v5; // rsi
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v7; // rbx
  struct _KTIMER *v8; // rdi
  __int64 v9; // rsi
  __int64 *j; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  REGHANDLE v16; // rbx
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rbx
  REGHANDLE v20; // rbx
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v22; // rax
  struct _EX_RUNDOWN_REF *v23; // rbx
  struct _EX_RUNDOWN_REF *n; // rcx
  unsigned __int64 v25; // r8
  __int64 *v26; // rax
  __int64 v27; // rbx
  __int64 ii; // rcx
  __int64 NextFailedUnloadHive; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  REGHANDLE v32; // rbx
  __int64 v34; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v36; // [rsp+48h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v37; // [rsp+58h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+8h] BYREF

  v1 = &retaddr;
  if ( a1 )
  {
    CmpTraceShutdownStart();
    if ( CmpRegistryRootObject )
      ObfDereferenceObject(CmpRegistryRootObject);
    CmpRecordShutdownStopTime();
    ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
    _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
    CmpTraceShutdownRundownComplete();
    CmpFlushUnsupportedOperationTelemetry();
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v34) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v34, 4uLL, 0LL);
        LODWORD(v34) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v7 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v7 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v3 = (void *)CmCloseRmHandle(NextActiveHive[675], 1);
      v5 = (void *)CmCloseTmHandle(v7[675].Count, v4);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v3 )
      {
        ZwClose(v3);
        ZwClose(v5);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !CmFirstTime )
    {
      v8 = &CmpLazyWriterData;
      v9 = 2LL;
      do
      {
        KeCancelTimer(v8);
        v8 += 3;
        --v9;
      }
      while ( v9 );
    }
    for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v13) )
    {
      v13 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v11 = j[675];
      if ( v11 )
      {
        v12 = j[8];
        if ( *(_QWORD *)(v11 + 16) == v11 + 16 )
          *(_DWORD *)(v12 + 144) &= ~1u;
        else
          *(_DWORD *)(v12 + 144) |= 1u;
        HvMarkBaseBlockDirty((__int64)v13);
      }
    }
    v14 = qword_1402F2E60;
    if ( CmRmSystem )
    {
      v15 = *(_QWORD *)(qword_1402F2E60 + 64);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        *(_DWORD *)(v15 + 144) &= ~1u;
      else
        *(_DWORD *)(v15 + 144) |= 1u;
      HvMarkBaseBlockDirty(v14);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v16 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v16, &EventDescriptor, 0LL, 0, 0LL);
    for ( k = 0LL; ; k = v19 )
    {
      v18 = CmpGetNextActiveHive(k);
      v19 = (struct _EX_RUNDOWN_REF *)v18;
      if ( !v18 )
        break;
      if ( !CmpNoWrite && (v18[18] & 2) == 0 )
        *((_BYTE *)v18 + 6048) = (int)CmpFlushHive((ULONG_PTR)v18, 0xCu) >= 0;
    }
    v20 = EtwpRegTraceHandle;
    v36 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v36) )
      EtwWrite(v20, &v36, 0LL, 0, 0LL);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v23 )
    {
      v22 = CmpGetNextActiveHive(m);
      v23 = (struct _EX_RUNDOWN_REF *)v22;
      if ( !v22 )
        break;
      CmShutdownCmRM(v22[675], 0LL);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v27 )
    {
      v26 = CmpGetNextActiveHive(n);
      v27 = (__int64)v26;
      if ( !v26 )
        break;
      CmpUnJoinClassOfTrust((__int64)v26);
      CmpVERemoveHiveFromSIDMappingTable(v27);
      HvViewMapCleanup(v27 + 200, v27, 0);
      *(_BYTE *)(v27 + 124) &= ~4u;
      if ( *(_BYTE *)(v27 + 6048) && (*(_DWORD *)(v27 + 144) & 0x8000) == 0 )
      {
        v25 = (unsigned int)(*(_DWORD *)(v27 + 1400) + 4096);
        if ( (__int64)(*(_QWORD *)(v27 + 2968) - v25) > 0x100000 )
          CmpDoFileSetSizeEx(v27, 0, v25, 0);
        CmpCmdHiveClose(v27);
      }
    }
    for ( ii = 0LL; ; ii = v30 )
    {
      NextFailedUnloadHive = CmpGetNextFailedUnloadHive(ii);
      v30 = NextFailedUnloadHive;
      if ( !NextFailedUnloadHive )
        break;
      HvViewMapCleanup(NextFailedUnloadHive + 200, NextFailedUnloadHive, 0);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    if ( CmpBootDeviceUsageNotificationSent )
    {
      LOBYTE(v31) = 1;
      CmpSendBootDeviceUsageNotification(v31);
      CmpBootDeviceUsageNotificationSent = 0;
    }
    v32 = EtwpRegTraceHandle;
    v37 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    LOBYTE(v1) = EtwEventEnabled(EtwpRegTraceHandle, &v37);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = EtwWrite(v32, &v37, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
  return (char)v1;
}
