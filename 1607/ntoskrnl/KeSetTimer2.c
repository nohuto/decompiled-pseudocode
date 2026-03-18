/*
 * XREFs of KeSetTimer2 @ 0x1400EB320
 * Callers:
 *     KiTriggerForegroundBoostDpc @ 0x1400AB764 (KiTriggerForegroundBoostDpc.c)
 *     KiProcessPendingForegroundBoosts @ 0x1400CABB4 (KiProcessPendingForegroundBoosts.c)
 *     ExpSetTimer2 @ 0x1400EE640 (ExpSetTimer2.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     ExSetTimer @ 0x1400F9D24 (ExSetTimer.c)
 *     MiStoreEvictThread @ 0x14014341C (MiStoreEvictThread.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140144FE0 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402074D4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D4E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     EtwpEnableKernelTrace @ 0x140495E58 (EtwpEnableKernelTrace.c)
 *     CmpArmDelayDerefKCBWorker @ 0x1404DC994 (CmpArmDelayDerefKCBWorker.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PopNetArmDsEvaluationTimer @ 0x140673618 (PopNetArmDsEvaluationTimer.c)
 *     PopSetDripsWatchdog @ 0x1406756C4 (PopSetDripsWatchdog.c)
 *     ExInitializeTimeRefresh @ 0x1407AE678 (ExInitializeTimeRefresh.c)
 *     ExpWorkerInitialization @ 0x1407B4A64 (ExpWorkerInitialization.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KiSendClockInterruptToClockOwner @ 0x14009DE7C (KiSendClockInterruptToClockOwner.c)
 *     KiShouldActivateHRTimerClock @ 0x1400A53B0 (KiShouldActivateHRTimerClock.c)
 *     KiRequestTimer2Expiration @ 0x1400C9954 (KiRequestTimer2Expiration.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     KiUpdateTimer2Flags @ 0x1400EC7B0 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400EC828 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400EC864 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400EC8A0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     RtlGetSystemTimePrecise @ 0x1400F2118 (RtlGetSystemTimePrecise.c)
 *     KiRemoveTimer2 @ 0x1400F9890 (KiRemoveTimer2.c)
 *     KiTraceSetTimer2 @ 0x1401DADC8 (KiTraceSetTimer2.c)
 */

_BOOL8 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rsi
  bool v8; // di
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rax
  char v13; // bp
  bool v14; // r13
  unsigned int v15; // r14d
  char v16; // al
  __int64 SystemTimePrecise; // rax
  char v19; // [rsp+70h] [rbp+8h]
  char v20; // [rsp+78h] [rbp+10h] BYREF
  __int64 CurrentIrql; // [rsp+80h] [rbp+18h]
  LARGE_INTEGER v22; // [rsp+88h] [rbp+20h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = (*(_BYTE *)(a1 + 129) & 4) != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v19 = 0;
  if ( a2 > 0 )
  {
    v19 = 1;
    if ( v8 )
      SystemTimePrecise = RtlGetSystemTimePrecise();
    else
      SystemTimePrecise = MEMORY[0xFFFFF78000000014];
    if ( v6 > SystemTimePrecise )
      v6 = SystemTimePrecise - v6;
    else
      v6 = 0LL;
  }
  if ( v8 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v22);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v10 = InterruptTimePrecise - v6;
  if ( v10 < InterruptTimePrecise || v10 == -1LL )
    v10 = -2LL;
  v11 = v10;
  if ( a4 && *(_BYTE *)(a1 + 130) != 20 )
  {
    v12 = *(_QWORD *)(a4 + 8);
    if ( v12 == -1 )
    {
      v11 = -1LL;
    }
    else
    {
      v11 = v12 + v10;
      if ( v12 + v10 < v10 || v11 == -1 )
        v11 = -2LL;
    }
  }
  v13 = 0;
  v20 = 0;
  v14 = 0;
  v15 = 1;
  if ( !(unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
      v14 = 1;
    }
    else
    {
      v16 = *(_BYTE *)(a1 + 1);
      if ( (v16 & 0xF) != 0 )
      {
        v15 = 8;
        v14 = (v16 & 4) == 0;
      }
    }
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 72) = v10;
    *(_QWORD *)(a1 + 80) = v11;
    *(_QWORD *)(a1 + 88) = v5;
    *(_BYTE *)(a1 + 128) = v19;
    if ( v15 == 1 )
    {
      KxAcquireSpinLock(&KiTimer2CollectionLock);
      KiInsertTimer2WithCollectionLockHeld(a1, 1LL, &v20);
      v13 = v20;
    }
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      KiTraceSetTimer2(a1, v14, v15);
    }
    else
    {
      KiUpdateTimer2Flags(a1, v15, 0LL);
      if ( v15 == 1 )
        KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    if ( v13 )
    {
      KiRequestTimer2Expiration();
    }
    else if ( v8 && KiShouldActivateHRTimerClock(MEMORY[0xFFFFF78000000008], v10) )
    {
      KiSendClockInterruptToClockOwner();
    }
  }
  __writecr8((unsigned __int8)CurrentIrql);
  return v14;
}
