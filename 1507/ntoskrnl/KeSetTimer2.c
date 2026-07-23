/*
 * XREFs of KeSetTimer2 @ 0x1400F4EC0
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400D2D38 (KiProcessPendingForegroundBoosts.c)
 *     ExSetTimer @ 0x1400F4ACC (ExSetTimer.c)
 *     KiTriggerForegroundBoostDpc @ 0x1400F4B44 (KiTriggerForegroundBoostDpc.c)
 *     ExpSetTimer2 @ 0x1400F4D70 (ExpSetTimer2.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140170B24 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14023D080 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     CmpArmDelayDerefKCBWorker @ 0x14054B958 (CmpArmDelayDerefKCBWorker.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1406BCE88 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopSetDripsWatchdog @ 0x1406BD4C4 (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x1407D8EFC (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x1407E01DC (ExpWorkerInitialization.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140017E74 (RtlGetSystemTimePrecise.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400D5F78 (KiSendClockInterruptToClockOwner.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     KiUpdateTimer2Flags @ 0x1400F5C10 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400F6734 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400F67A0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiShouldSetClockIntervalForHighResolutionTimers @ 0x1400F731C (KiShouldSetClockIntervalForHighResolutionTimers.c)
 *     KiRequestTimer2Expiration @ 0x140129704 (KiRequestTimer2Expiration.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiTraceSetTimer2 @ 0x140209AB0 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  bool v5; // si
  LARGE_INTEGER v8; // rdi
  LONGLONG v10; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  bool v14; // r14
  unsigned int v15; // edi
  unsigned __int8 CurrentIrql; // r12
  __int64 v17; // rdx
  char v18; // al
  char v19; // bp
  LARGE_INTEGER SystemTimePrecise; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-48h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  char v24; // [rsp+70h] [rbp+8h]
  char v25; // [rsp+78h] [rbp+10h] BYREF
  __int64 v26; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v5 = (*(_BYTE *)(a1 + 129) & 4) != 0;
  v26 = 0LL;
  v8.QuadPart = a2;
  if ( a2 > 0 )
  {
    v24 = 1;
    if ( v5 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise.QuadPart = MEMORY[0xFFFFF78000000014];
    if ( v8.QuadPart < SystemTimePrecise.QuadPart )
      v8 = SystemTimePrecise;
    v8.QuadPart = SystemTimePrecise.QuadPart - v8.QuadPart;
  }
  else
  {
    v24 = 0;
  }
  v10 = -v8.QuadPart;
  if ( v5 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise.QuadPart + v10;
  if ( (unsigned __int64)(InterruptTimePrecise.QuadPart + v10) < InterruptTimePrecise.QuadPart || v12 == -1LL )
    v12 = -2LL;
  if ( (*(_BYTE *)(a1 + 129) & 8) != 0 )
  {
    if ( a4 )
    {
      v13 = *(_QWORD *)(a4 + 8);
      if ( v13 != -1 )
      {
        v4 = 1;
        v26 = v13 + v12;
        if ( v13 + v12 < v12 || v13 + v12 == -1LL )
          v26 = -2LL;
      }
    }
    else
    {
      v4 = 1;
      v26 = v12;
    }
  }
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    a3 = (unsigned int)KeMinimumIncrement;
  v14 = 0;
  v15 = 1;
  v25 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
      else
        _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
      v14 = 1;
    }
    else
    {
      v18 = *(_BYTE *)(a1 + 1);
      if ( (v18 & 0xF) != 0 )
      {
        v15 = 8;
        v14 = (v18 & 4) == 0;
      }
    }
    v19 = (*(_BYTE *)(a1 + 129) ^ (16 * v4)) & 0x10;
    *(_QWORD *)(a1 + 80) = v26;
    *(_BYTE *)(a1 + 129) ^= v19;
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 72) = v12;
    *(_QWORD *)(a1 + 88) = a3;
    *(_BYTE *)(a1 + 128) = v24;
    if ( v15 == 1 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
      }
      LOBYTE(v17) = 1;
      KiInsertTimer2WithCollectionLockHeld(a1, v17, &v25);
    }
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      KiTraceSetTimer2(a1, v14, v15);
    }
    else
    {
      KiUpdateTimer2Flags(a1, v15, 0LL);
      if ( v15 == 1 )
      {
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
        else
          _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
      }
    }
    if ( v25 )
    {
      KiRequestTimer2Expiration();
    }
    else if ( v5 && (unsigned __int8)KiShouldSetClockIntervalForHighResolutionTimers(MEMORY[0xFFFFF78000000008], v12) )
    {
      KiSendClockInterruptToClockOwner();
    }
  }
  __writecr8(CurrentIrql);
  return v14;
}
