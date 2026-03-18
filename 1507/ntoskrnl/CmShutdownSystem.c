/*
 * XREFs of CmShutdownSystem @ 0x140653CD0
 * Callers:
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     CmpGetNextFailedUnloadHive @ 0x1400D26EC (CmpGetNextFailedUnloadHive.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     UnlockShutdown @ 0x1404EA6C8 (UnlockShutdown.c)
 *     CmCloseRmHandle @ 0x1404EDFBC (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404EDFDC (CmCloseTmHandle.c)
 *     CmpCmdHiveClose @ 0x1404EE6E8 (CmpCmdHiveClose.c)
 *     CmShutdownCmRM @ 0x1404EEDC4 (CmShutdownCmRM.c)
 *     HvViewMapCleanup @ 0x14055B2E4 (HvViewMapCleanup.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 *     CmpTraceShutdownRundownComplete @ 0x1406538E4 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x14065394C (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 *     CmpRemoveHiveFromMapping @ 0x140658DD0 (CmpRemoveHiveFromMapping.c)
 *     CmpParseCacheClose @ 0x14065B5A4 (CmpParseCacheClose.c)
 *     CmpSendBootDeviceUsageNotification @ 0x14065BC88 (CmpSendBootDeviceUsageNotification.c)
 *     LockShutdownExclusive @ 0x14065DB10 (LockShutdownExclusive.c)
 */

char __fastcall CmShutdownSystem(int a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v17; // rsi
  char v18; // dl
  void *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 *NextActiveHive; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _EX_RUNDOWN_REF *v30; // rbx
  struct _KTIMER *v31; // rsi
  __int64 v32; // r14
  __int64 *j; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // rax
  struct _EX_RUNDOWN_REF *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  REGHANDLE v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v51; // rax
  struct _EX_RUNDOWN_REF *v52; // rbx
  REGHANDLE v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  struct _EX_RUNDOWN_REF *v66; // rbx
  __int64 *n; // rbx
  __int64 v68; // r9
  __int64 *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // r9
  signed __int8 v73; // cf
  __int64 v74; // r14
  __int64 v75; // rcx
  __int64 **v76; // rax
  signed __int64 v77; // rcx
  ULONG_PTR v78; // rtt
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  unsigned __int64 v82; // r8
  __int64 ii; // rcx
  __int64 NextFailedUnloadHive; // rax
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rcx
  REGHANDLE v91; // rbx
  __int64 v93; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v95; // [rsp+48h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v96; // [rsp+58h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h] BYREF

  v1 = &retaddr;
  if ( a1 )
  {
    CmpTraceShutdownStart();
    if ( CmpRegistryRootObject )
      ObfDereferenceObject(CmpRegistryRootObject);
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownRundown, 1LL, 0LL);
    if ( v2 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&CmpShutdownRundown, v2);
    _InterlockedExchange64((volatile __int64 *)&CmpShutdownRundown, 1LL);
    CmpTraceShutdownRundownComplete();
    LockShutdownExclusive();
    LOCK_HIVE_LOAD(v4, v3, v5, v6);
    CmpLockRegistryExclusive();
    LODWORD(v93) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v11, v10);
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v93, 4uLL, 0LL);
        LODWORD(v93) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD(v13, v12, v14, v15);
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v30 )
    {
      NextActiveHive = CmpGetNextActiveHive(i, v7, v8, v9);
      v30 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v17 = (void *)CmCloseRmHandle(NextActiveHive[675], 1);
      v19 = (void *)CmCloseTmHandle(v30[675].Count, v18);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v21, v20);
      if ( v17 )
      {
        ZwClose(v17);
        ZwClose(v19);
      }
      LOCK_HIVE_LOAD(v23, v22, v24, v25);
      CmpLockRegistryExclusive();
    }
    if ( !CmFirstTime )
    {
      v31 = &CmpLazyWriterData;
      v32 = 2LL;
      do
      {
        KeCancelTimer(v31);
        v31 += 3;
        --v32;
      }
      while ( v32 );
    }
    for ( j = CmpGetNextActiveHive(0LL, v27, v28, v29); ; j = CmpGetNextActiveHive(v39, v34, v35, v36) )
    {
      v39 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v37 = j[675];
      if ( v37 )
      {
        v38 = j[8];
        if ( *(_QWORD *)(v37 + 16) == v37 + 16 )
          *(_DWORD *)(v38 + 144) &= ~1u;
        else
          *(_DWORD *)(v38 + 144) |= 1u;
        HvMarkBaseBlockDirty((__int64)v39);
      }
    }
    v40 = qword_1403168C0;
    if ( CmRmSystem )
    {
      v41 = *(_QWORD *)(qword_1403168C0 + 64);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        *(_DWORD *)(v41 + 144) &= ~1u;
      else
        *(_DWORD *)(v41 + 144) |= 1u;
      HvMarkBaseBlockDirty(v40);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v43, v42);
    UnlockShutdown(v45, v44);
    v46 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v46, &EventDescriptor, 0LL, 0, 0LL);
    for ( k = 0LL; ; k = v52 )
    {
      v51 = CmpGetNextActiveHive(k, v47, v48, v49);
      v52 = (struct _EX_RUNDOWN_REF *)v51;
      if ( !v51 )
        break;
      if ( !CmpNoWrite && (v51[18] & 2) == 0 )
        *((_BYTE *)v51 + 6048) = (int)CmpFlushHive((ULONG_PTR)v51, 0xCu) >= 0;
    }
    v53 = EtwpRegTraceHandle;
    v95 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v95) )
      EtwWrite(v53, &v95, 0LL, 0, 0LL);
    LockShutdownExclusive();
    LOCK_HIVE_LOAD(v55, v54, v56, v57);
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v66 )
    {
      v62 = CmpGetNextActiveHive(m, v58, v59, v60);
      v66 = (struct _EX_RUNDOWN_REF *)v62;
      if ( !v62 )
        break;
      CmShutdownCmRM(v62[675], 0LL);
    }
    for ( n = CmpGetNextActiveHive(0LL, v63, v64, v65);
          n;
          n = CmpGetNextActiveHive((struct _EX_RUNDOWN_REF *)n, v79, v80, v81) )
    {
      v69 = n + 671;
      if ( (__int64 *)*v69 != v69 )
      {
        v70 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v68);
        v73 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v74 = v70;
        if ( v73 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v70, (ULONG_PTR)&CmpHiveListHeadLock, v72);
        if ( v74 )
          *(_BYTE *)(v74 + 26) |= 1u;
        v75 = *v69;
        v76 = (__int64 **)n[672];
        if ( *(__int64 **)(*v69 + 8) != v69 || *v76 != v69 )
          __fastfail(3u);
        *v76 = (__int64 *)v75;
        *(_QWORD *)(v75 + 8) = v76;
        _m_prefetchw(&CmpHiveListHeadLock);
        v77 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v77 = 0LL;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v78 = CmpHiveListHeadLock,
              v78 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v77,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v71);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
      }
      if ( (n[670] & 2) != 0 )
        CmpRemoveHiveFromMapping(n);
      HvViewMapCleanup((__int64)(n + 25), (__int64)n, 0);
      *((_BYTE *)n + 124) &= ~4u;
      if ( *((_BYTE *)n + 6048) && (n[18] & 0x8000) == 0 )
      {
        v82 = (unsigned int)(*((_DWORD *)n + 350) + 4096);
        if ( (__int64)(n[371] - v82) > 0x100000 )
          CmpDoFileSetSizeEx((__int64)n, 0, v82, 0);
        CmpCmdHiveClose((__int64)n);
      }
    }
    for ( ii = 0LL; ; ii = v86 )
    {
      NextFailedUnloadHive = CmpGetNextFailedUnloadHive(ii);
      v86 = NextFailedUnloadHive;
      if ( !NextFailedUnloadHive )
        break;
      HvViewMapCleanup(NextFailedUnloadHive + 200, NextFailedUnloadHive, 0);
    }
    if ( CmpBootDeviceUsageNotificationSent )
    {
      LOBYTE(v85) = 1;
      CmpSendBootDeviceUsageNotification(v85);
      CmpBootDeviceUsageNotificationSent = 0;
    }
    HvShutdownComplete = 1;
    CmpParseCacheClose();
    if ( (PopShutdownCleanly & 8) != 0 && !CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v88, v87);
    UnlockShutdown(v90, v89);
    v91 = EtwpRegTraceHandle;
    v96 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    LOBYTE(v1) = EtwEventEnabled(EtwpRegTraceHandle, &v96);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = EtwWrite(v91, &v96, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
  return (char)v1;
}
