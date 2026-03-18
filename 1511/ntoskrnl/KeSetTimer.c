/*
 * XREFs of KeSetTimer @ 0x140091530
 * Callers:
 *     CcScheduleLazyWriteScan @ 0x1400AF9F0 (CcScheduleLazyWriteScan.c)
 *     PfSnStartTraceTimer @ 0x1400FAD0C (PfSnStartTraceTimer.c)
 *     PfSnTraceTimerRoutine @ 0x1401022D0 (PfSnTraceTimerRoutine.c)
 *     PfpServiceMainThreadBoost @ 0x1401175A4 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x140122194 (PopEnableIrpWatchdog.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140126A14 (PoClearPowerRequestInternalDeferred.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401CA1C8 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetTimer @ 0x1401EC8DC (PopCoalescingSetTimer.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403A5618 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 *     PiDrvDbUnloadNode @ 0x140444BF0 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x14049B2B0 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1404C178C (PfSnPowerBoost.c)
 *     PopUserPresentSetWorker @ 0x1404C552C (PopUserPresentSetWorker.c)
 *     PoUserShutdownInitiated @ 0x1404F5250 (PoUserShutdownInitiated.c)
 *     CmSetLazyFlushState @ 0x1404F5D54 (CmSetLazyFlushState.c)
 *     PopQueueBatteryStatusTimeout @ 0x1404F8DF0 (PopQueueBatteryStatusTimeout.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x14053B5FC (ExpRefreshTimeZoneInformation.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14054B6B0 (PfSnQueueEnablePrefetcherTimer.c)
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x1405E3B98 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1405F1F64 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x14060263C (IopDeviceRemovalForResetComplete.c)
 *     PopCsStateChanged @ 0x140632510 (PopCsStateChanged.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 *     PopDiagNextSleepStudySession @ 0x14063861C (PopDiagNextSleepStudySession.c)
 *     WheapSqmWaitWorkerRoutine @ 0x14067972C (WheapSqmWaitWorkerRoutine.c)
 *     KdpTimeSlipWork @ 0x1406AC880 (KdpTimeSlipWork.c)
 *     ViShutdownScheduleWatchdog @ 0x1406C5940 (ViShutdownScheduleWatchdog.c)
 *     VerifierKeSetTimer @ 0x1406C6664 (VerifierKeSetTimer.c)
 *     InitializePagedPool @ 0x140749B74 (InitializePagedPool.c)
 *     PfSnInitializePrefetcher @ 0x14076A66C (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140091630 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x1400916F0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  _KDPC *v5; // rdi
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  BOOLEAN v8; // al
  LARGE_INTEGER v9; // rdx
  BOOLEAN v10; // r15
  int v11; // eax
  char *v12; // r10
  PKTIMER v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER v18; // [rsp+68h] [rbp+10h]

  v18 = DueTime;
  v5 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = KiCancelTimer(Timer, 0LL);
  v9 = v18;
  Timer->Dpc = v5;
  Timer->Period = 0;
  v10 = v8;
  v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
          Timer,
          (LARGE_INTEGER)v9.QuadPart,
          0LL,
          &v17);
  v13 = Timer;
  v14 = (__int64)CurrentPrcb;
  if ( !v11 )
    goto LABEL_7;
  v15 = v17;
  Timer->Header.SignalState = (int)v12;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (unsigned __int64)Dpc, v15, v12) )
  {
    v13 = Timer;
    v14 = (__int64)CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v14, (__int64)v13, 0LL);
    goto LABEL_5;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_5:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v10;
}
