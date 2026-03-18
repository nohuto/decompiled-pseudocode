/*
 * XREFs of CmShutdownSystem @ 0x1405DE7A4
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14002D988 (ExWaitForRundownProtectionRelease.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
 *     CmpGetNextFailedUnloadHive @ 0x1400F24E8 (CmpGetNextFailedUnloadHive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     UnlockShutdown @ 0x1403BABE4 (UnlockShutdown.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmpCmdHiveClose @ 0x140499208 (CmpCmdHiveClose.c)
 *     CmShutdownCmRM @ 0x14049B0F8 (CmShutdownCmRM.c)
 *     CmCloseTmHandle @ 0x14049B370 (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14049B390 (CmCloseRmHandle.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 *     HvViewMapCleanup @ 0x1404C3A78 (HvViewMapCleanup.c)
 *     CmpTraceShutdownRundownComplete @ 0x1405DE3B8 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x1405DE420 (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x1405DEC98 (CmpFreeAllMemory.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 *     CmpParseCacheClose @ 0x1405E465C (CmpParseCacheClose.c)
 *     CmpSendBootDeviceUsageNotification @ 0x1405E4D74 (CmpSendBootDeviceUsageNotification.c)
 *     LockShutdownExclusive @ 0x1405E66D4 (LockShutdownExclusive.c)
 */

void __fastcall CmShutdownSystem(int a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v2; // rdi
  char v3; // dl
  void *v4; // rsi
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  struct _KTIMER *v7; // rdi
  __int64 v8; // rsi
  __int64 *j; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _EX_RUNDOWN_REF *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  REGHANDLE v15; // rbx
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v17; // rax
  struct _EX_RUNDOWN_REF *v18; // rbx
  REGHANDLE v19; // rbx
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rbx
  __int64 *n; // rbx
  __int64 *v24; // rdi
  __int64 v25; // rax
  signed __int8 v26; // cf
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 **v29; // rax
  signed __int64 v30; // rcx
  ULONG_PTR v31; // rtt
  unsigned __int64 v32; // r8
  __int64 ii; // rcx
  __int64 NextFailedUnloadHive; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  REGHANDLE v37; // rbx
  __int64 v38; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v40; // [rsp+48h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v41; // [rsp+58h] [rbp-18h] BYREF

  if ( a1 )
  {
    CmpTraceShutdownStart();
    if ( CmpRegistryRootObject )
      ObfDereferenceObject(CmpRegistryRootObject);
    ExWaitForRundownProtectionRelease(&CmpShutdownRundown);
    _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
    CmpTraceShutdownRundownComplete();
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v38) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v38, 4uLL, 0LL);
        LODWORD(v38) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v6 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v2 = (void *)CmCloseRmHandle(NextActiveHive[675], 1);
      v4 = (void *)CmCloseTmHandle(v6[675].Count, v3);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v2 )
      {
        ZwClose(v2);
        ZwClose(v4);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !CmFirstTime )
    {
      v7 = &CmpLazyWriterData;
      v8 = 2LL;
      do
      {
        KeCancelTimer(v7);
        v7 += 3;
        --v8;
      }
      while ( v8 );
    }
    for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v12) )
    {
      v12 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v10 = j[675];
      if ( v10 )
      {
        v11 = j[8];
        if ( *(_QWORD *)(v10 + 16) == v10 + 16 )
          *(_DWORD *)(v11 + 144) &= ~1u;
        else
          *(_DWORD *)(v11 + 144) |= 1u;
        HvMarkBaseBlockDirty((__int64)v12);
      }
    }
    v13 = qword_1402C77F0;
    if ( CmRmSystem )
    {
      v14 = *(_QWORD *)(qword_1402C77F0 + 64);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        *(_DWORD *)(v14 + 144) &= ~1u;
      else
        *(_DWORD *)(v14 + 144) |= 1u;
      HvMarkBaseBlockDirty(v13);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v15 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v15, &EventDescriptor, 0LL, 0, 0LL);
    for ( k = 0LL; ; k = v18 )
    {
      v17 = CmpGetNextActiveHive(k);
      v18 = (struct _EX_RUNDOWN_REF *)v17;
      if ( !v17 )
        break;
      if ( !CmpNoWrite && (v17[18] & 2) == 0 )
        *((_BYTE *)v17 + 6048) = (int)CmpFlushHive((ULONG_PTR)v17, 0xCu) >= 0;
    }
    v19 = EtwpRegTraceHandle;
    v40 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v40) )
      EtwWrite(v19, &v40, 0LL, 0, 0LL);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v22 )
    {
      v21 = CmpGetNextActiveHive(m);
      v22 = (struct _EX_RUNDOWN_REF *)v21;
      if ( !v21 )
        break;
      CmShutdownCmRM(v21[675], 0LL);
    }
    for ( n = CmpGetNextActiveHive(0LL); n; n = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)n) )
    {
      v24 = n + 671;
      if ( (__int64 *)*v24 != v24 )
      {
        v25 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
        v26 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v27 = v25;
        if ( v26 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v25, (ULONG_PTR)&CmpHiveListHeadLock);
        if ( v27 )
          *(_BYTE *)(v27 + 26) |= 1u;
        v28 = *v24;
        v29 = (__int64 **)n[672];
        if ( *(__int64 **)(*v24 + 8) != v24 || *v29 != v24 )
          __fastfail(3u);
        *v29 = (__int64 *)v28;
        *(_QWORD *)(v28 + 8) = v29;
        _m_prefetchw(&CmpHiveListHeadLock);
        v30 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v30 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v31 = CmpHiveListHeadLock,
              v31 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v30,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      }
      if ( (n[670] & 2) != 0 )
        CmpRemoveHiveFromMapping(n);
      HvViewMapCleanup((__int64)(n + 25), (__int64)n, 0);
      *((_BYTE *)n + 124) &= ~4u;
      if ( *((_BYTE *)n + 6048) && (n[18] & 0x8000) == 0 )
      {
        v32 = (unsigned int)(*((_DWORD *)n + 350) + 4096);
        if ( (__int64)(n[371] - v32) > 0x100000 )
          CmpDoFileSetSizeEx((__int64)n, 0, v32, 0);
        CmpCmdHiveClose((__int64)n);
      }
    }
    for ( ii = 0LL; ; ii = v36 )
    {
      NextFailedUnloadHive = CmpGetNextFailedUnloadHive(ii);
      v36 = NextFailedUnloadHive;
      if ( !NextFailedUnloadHive )
        break;
      HvViewMapCleanup(NextFailedUnloadHive + 200, NextFailedUnloadHive, 0);
    }
    if ( CmpBootDeviceUsageNotificationSent )
    {
      LOBYTE(v35) = 1;
      CmpSendBootDeviceUsageNotification(v35);
      CmpBootDeviceUsageNotificationSent = 0;
    }
    HvShutdownComplete = 1;
    CmpParseCacheClose();
    if ( (PopShutdownCleanly & 8) != 0 && !CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    v37 = EtwpRegTraceHandle;
    v41 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v41) )
      EtwWrite(v37, &v41, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
}
