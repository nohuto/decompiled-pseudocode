/*
 * XREFs of KeSetCoalescableTimer @ 0x140091250
 * Callers:
 *     CmpArmLazyWriter @ 0x140038EB0 (CmpArmLazyWriter.c)
 *     EtwpRequestFlushTimer @ 0x140090BA4 (EtwpRequestFlushTimer.c)
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     PopFxPluginWork @ 0x1400DAA70 (PopFxPluginWork.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400DC700 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x1400DC9D8 (PopFxArmResidentTimer.c)
 *     ExpTimerDpcRoutine @ 0x1400ED4E0 (ExpTimerDpcRoutine.c)
 *     ExpTimerResume @ 0x1400EEB44 (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x1400EFC68 (CmpCompleteLazyWrite.c)
 *     CcRescheduleLazyWriteScan @ 0x140101E20 (CcRescheduleLazyWriteScan.c)
 *     CcBcbProfiler @ 0x14014D260 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1401B7114 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x1401ECFA8 (PopPepArmIdleTimer.c)
 *     KiInitializeProcessor @ 0x1403A7538 (KiInitializeProcessor.c)
 *     sub_1403B4000 @ 0x1403B4000 (sub_1403B4000.c)
 *     PiDrvDbUnloadNode @ 0x140444BF0 (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140487BCC (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x1404B691C (WdipTimeoutCheckRoutine.c)
 *     ExpWorkerThreadBalanceManager @ 0x140536444 (ExpWorkerThreadBalanceManager.c)
 *     IopErrorLogQueueRequest @ 0x1405FE020 (IopErrorLogQueueRequest.c)
 *     AnFwProgressIndicatorTransition @ 0x1406D916C (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x1406DB564 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x1406DCA98 (AnFwDisplayBackgroundUpdate.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140091630 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x1400916F0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  unsigned __int8 v5; // si
  PKDPC v8; // r15
  _KDPC *v9; // rdi
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v12; // al
  BOOLEAN v13; // r13
  int v14; // eax
  PKTIMER v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r9d
  unsigned __int64 v19; // rsi
  unsigned int v20; // esi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r8
  ULONG v23; // eax
  LARGE_INTEGER v24; // [rsp+78h] [rbp+10h]
  unsigned int v25; // [rsp+80h] [rbp+18h] BYREF

  v24 = DueTime;
  v5 = 0;
  if ( TolerableDelay )
  {
    v19 = 10000LL * TolerableDelay;
    if ( v19 > 0xFC0000 )
    {
      v21 = v19 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v22 = v21 + DueTime.QuadPart;
        if ( (__int64)(v21 + DueTime.QuadPart) < DueTime.QuadPart )
          v22 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v22 = DueTime.QuadPart - v21;
        if ( (__int64)(DueTime.QuadPart - v21) > DueTime.QuadPart )
          v22 = 0x8000000000000000uLL;
      }
      if ( Period )
      {
        v23 = -1;
        if ( Period + (int)v21 / 10000 >= Period )
          v23 = Period + (int)v21 / 10000;
        Period = v23;
      }
      LODWORD(v19) = 16515072;
      v24.QuadPart = v22;
    }
    v20 = (unsigned int)v19 >> 18;
    if ( v20 > 0x3F )
      LOBYTE(v20) = 63;
    v5 = 4 * v20;
  }
  v8 = Dpc;
  v9 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(Timer, 0LL);
  Timer->Dpc = v9;
  Timer->Period = Period;
  v13 = v12;
  v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
          Timer,
          (LARGE_INTEGER)v24.QuadPart,
          v5,
          &v25);
  v15 = Timer;
  v16 = (__int64)CurrentPrcb;
  if ( !v14 )
    goto LABEL_17;
  v17 = v25;
  Timer->Header.SignalState = 0;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (unsigned __int64)v8, v17, 0LL) )
  {
    v15 = Timer;
    v16 = (__int64)CurrentPrcb;
LABEL_17:
    KiTimerWaitTest(v16, (__int64)v15, 0LL);
    goto LABEL_6;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, v8, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_6:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v13;
}
