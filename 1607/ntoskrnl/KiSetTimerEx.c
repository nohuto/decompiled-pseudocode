/*
 * XREFs of KiSetTimerEx @ 0x140006F70
 * Callers:
 *     PfSnStartTraceTimer @ 0x140006D64 (PfSnStartTraceTimer.c)
 *     PfSnTraceTimerRoutine @ 0x140006E28 (PfSnTraceTimerRoutine.c)
 *     KeSetTimer @ 0x140006F50 (KeSetTimer.c)
 *     MiInsertUnusedSegment @ 0x140026B6C (MiInsertUnusedSegment.c)
 *     CcScheduleLazyWriteScan @ 0x14007049C (CcScheduleLazyWriteScan.c)
 *     PfpServiceMainThreadBoost @ 0x140126B24 (PfpServiceMainThreadBoost.c)
 *     PopEnableIrpWatchdog @ 0x14012B764 (PopEnableIrpWatchdog.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140131AE0 (PoClearPowerRequestInternalDeferred.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 *     PopCoalescingSetTimer @ 0x14020541C (PopCoalescingSetTimer.c)
 *     PopSetWatchdog @ 0x14020B2F8 (PopSetWatchdog.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403D03E4 (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E47D4 (SmProcessStoreMemoryPriorityRequest.c)
 *     CmpDelayFreeCmRm @ 0x1404BD054 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1404CCFEC (PfSnPowerBoost.c)
 *     PopUserPresentSetWorker @ 0x1404D2578 (PopUserPresentSetWorker.c)
 *     PiDrvDbUnloadNode @ 0x1404DD1EC (PiDrvDbUnloadNode.c)
 *     CmSetLazyFlushState @ 0x14052F358 (CmSetLazyFlushState.c)
 *     PopQueueBatteryStatusTimeout @ 0x140531E98 (PopQueueBatteryStatusTimeout.c)
 *     PoUserShutdownInitiated @ 0x140534720 (PoUserShutdownInitiated.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     ExpRefreshTimeZoneInformation @ 0x14055F04C (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x14056F72C (CmpCmdInit.c)
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 *     PpmWmiDispatch @ 0x140575CA8 (PpmWmiDispatch.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x140581838 (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x140602C74 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1406033D4 (CmpLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14061C270 (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x14062C74C (IopDeviceRemovalForResetComplete.c)
 *     PopCsStateChanged @ 0x14066AA48 (PopCsStateChanged.c)
 *     PopSetSystemAwayMode @ 0x14066EB8C (PopSetSystemAwayMode.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406708E8 (PopDiagNextCsSleepStudySession.c)
 *     TtmpResetEvaluationTimer @ 0x1406781A0 (TtmpResetEvaluationTimer.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1406BBF90 (WheapSqmWaitWorkerRoutine.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x14070D3E0 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140711980 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x140716CF8 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1407170EC (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x1407B3DC8 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140057B20 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x140057BD0 (KiCancelTimer.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiTraceSetTimer @ 0x1401DAAEC (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 v9; // rdi
  char CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r13
  int v14; // eax
  __int64 v15; // rdx
  struct _KPRCB *v16; // rcx
  int v17; // r9d
  int v20; // [rsp+80h] [rbp+18h] BYREF

  v7 = a5;
  v9 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(a1, 0LL);
  *(_QWORD *)(a1 + 48) = v9;
  *(_DWORD *)(a1 + 60) = a3;
  v13 = v12;
  v14 = KiComputeDueTime(a1, a2, a4, &v20);
  v15 = a1;
  v16 = CurrentPrcb;
  if ( !v14 )
    goto LABEL_7;
  v17 = v20;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v7, v17, 0LL) )
  {
    v15 = a1;
    v16 = CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v16, v15, 0LL);
    goto LABEL_5;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, v7, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_5:
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v13;
}
