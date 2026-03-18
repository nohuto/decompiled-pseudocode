/*
 * XREFs of KiSetTimerEx @ 0x140068414
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x14001A000 (PfSnTraceTimerRoutine.c)
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x140089B00 (MiInsertUnusedSegment.c)
 *     PfSnStartTraceTimer @ 0x140129BE4 (PfSnStartTraceTimer.c)
 *     PopEnableIrpWatchdog @ 0x1401374C4 (PopEnableIrpWatchdog.c)
 *     PfpServiceMainThreadBoost @ 0x14014C308 (PfpServiceMainThreadBoost.c)
 *     PoClearPowerRequestInternalDeferred @ 0x14015A1E4 (PoClearPowerRequestInternalDeferred.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x1402119C8 (MiProcessDeleteOnClose.c)
 *     PopCoalescingSetTimer @ 0x14023ABF8 (PopCoalescingSetTimer.c)
 *     SmWdStartMonitoring @ 0x140258848 (SmWdStartMonitoring.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403EEE9C (PfpStartLoggingHardFaultEvents.c)
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 *     PfSnPowerBoost @ 0x140458E08 (PfSnPowerBoost.c)
 *     PiDrvDbUnloadNode @ 0x1404DE470 (PiDrvDbUnloadNode.c)
 *     CmpDelayFreeCmRm @ 0x1404EF054 (CmpDelayFreeCmRm.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140547048 (SmProcessStoreMemoryPriorityRequest.c)
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 *     PopUserPresentSetWorker @ 0x14055BF78 (PopUserPresentSetWorker.c)
 *     CmSetLazyFlushState @ 0x140564EB0 (CmSetLazyFlushState.c)
 *     PopQueueBatteryStatusTimeout @ 0x140565DF8 (PopQueueBatteryStatusTimeout.c)
 *     PoUserShutdownInitiated @ 0x140569744 (PoUserShutdownInitiated.c)
 *     ExpRefreshTimeZoneInformation @ 0x1405A5DAC (ExpRefreshTimeZoneInformation.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     PpmWmiDispatch @ 0x1405B7578 (PpmWmiDispatch.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1405C2828 (PfSnQueueEnablePrefetcherTimer.c)
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x14065A808 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x14065AC08 (CmpQueueLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14066AC5C (DbgkpWerDeferredWriteRoutine.c)
 *     IopDeviceRemovalForResetComplete @ 0x14067D47C (IopDeviceRemovalForResetComplete.c)
 *     PopCsStateChanged @ 0x1406B0B3C (PopCsStateChanged.c)
 *     PopSetSystemAwayMode @ 0x1406B602C (PopSetSystemAwayMode.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 *     WheapSqmWaitWorkerRoutine @ 0x1406FDF48 (WheapSqmWaitWorkerRoutine.c)
 *     KdpTimeSlipWork @ 0x14072C8E0 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x1407475AC (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x14074AE14 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x14074B288 (ViWdIrpTimerDpcRoutine.c)
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 *     PfSnInitializePrefetcher @ 0x1407DF0C8 (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140066AA0 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x140066B50 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 */

char __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  char v11; // al
  char v12; // r13
  int v13; // eax
  __int64 v14; // rdx
  struct _KPRCB *v15; // rcx
  int v16; // r9d
  int v17; // r8d
  int v20; // [rsp+70h] [rbp+18h] BYREF

  v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = KiCancelTimer(a1, 0);
  *(_QWORD *)(a1 + 48) = v8;
  *(_DWORD *)(a1 + 60) = a3;
  v12 = v11;
  v13 = KiComputeDueTime((int *)a1, a2, a4, &v20);
  v14 = a1;
  v15 = CurrentPrcb;
  if ( !v13 )
    goto LABEL_7;
  v16 = v20;
  v17 = a5;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v17, v16, 0LL) )
  {
    v14 = a1;
    v15 = CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v15, v14, 0LL);
    goto LABEL_8;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_8:
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  return v12;
}
