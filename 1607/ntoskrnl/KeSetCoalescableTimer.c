/*
 * XREFs of KeSetCoalescableTimer @ 0x1400EDA80
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140001410 (ExpTimerDpcRoutine.c)
 *     CcRescheduleLazyWriteScan @ 0x14006E458 (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x1400873CC (EtwpRequestFlushTimer.c)
 *     ExpTimerResume @ 0x1400AC6F8 (ExpTimerResume.c)
 *     CmpCompleteLazyWrite @ 0x1400AE420 (CmpCompleteLazyWrite.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x1400C0CB0 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x1400C0E24 (PopFxArmResidentTimer.c)
 *     PopFxPluginWork @ 0x1400C11C0 (PopFxPluginWork.c)
 *     ExpSetTimer @ 0x1400ED6DC (ExpSetTimer.c)
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
 *     CcBcbProfiler @ 0x140156B50 (CcBcbProfiler.c)
 *     IopEnableTimer @ 0x1401C4B38 (IopEnableTimer.c)
 *     PopPepArmIdleTimer @ 0x140205C1C (PopPepArmIdleTimer.c)
 *     KiInitializeProcessor @ 0x1403D34A8 (KiInitializeProcessor.c)
 *     sub_1403E1000 @ 0x1403E1000 (sub_1403E1000.c)
 *     PiDrvDbUnloadNode @ 0x1404DD1EC (PiDrvDbUnloadNode.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x1404FF130 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     ExpWorkerThreadBalanceManager @ 0x140566648 (ExpWorkerThreadBalanceManager.c)
 *     IopErrorLogQueueRequest @ 0x140628100 (IopErrorLogQueueRequest.c)
 *     AnFwProgressIndicatorTransition @ 0x140725550 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     AnFwDisplayProgressIndicator @ 0x140727494 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140728B84 (AnFwDisplayBackgroundUpdate.c)
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiCancelTimer @ 0x140057BD0 (KiCancelTimer.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiTraceSetTimer @ 0x1401DAAEC (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  char v5; // bl
  unsigned __int64 v8; // rbx
  unsigned int v9; // ebx
  _KDPC *v10; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v13; // al
  LARGE_INTEGER v14; // rcx
  BOOLEAN v15; // r12
  __int64 v16; // r8
  LONGLONG v17; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r8
  ULONG v21; // eax
  LONG LockNV; // [rsp+30h] [rbp-48h]
  LARGE_INTEGER v23; // [rsp+88h] [rbp+10h]

  v23 = DueTime;
  v5 = 0;
  if ( TolerableDelay )
  {
    v8 = 10000LL * TolerableDelay;
    if ( v8 > 0xFC0000 )
    {
      v19 = v8 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v20 = v19 + DueTime.QuadPart;
        if ( (__int64)(v19 + DueTime.QuadPart) < DueTime.QuadPart )
          v20 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v20 = DueTime.QuadPart - v19;
        if ( (__int64)(DueTime.QuadPart - v19) > DueTime.QuadPart )
          v20 = 0x8000000000000000uLL;
      }
      if ( Period )
      {
        v21 = -1;
        if ( Period + (int)v19 / 10000 >= Period )
          v21 = Period + (int)v19 / 10000;
        Period = v21;
      }
      LODWORD(v8) = 16515072;
      v23.QuadPart = v20;
    }
    v9 = (unsigned int)v8 >> 18;
    if ( v9 > 0x3F )
      LOBYTE(v9) = 63;
    v5 = 4 * v9;
  }
  v10 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                  (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                  KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v13 = KiCancelTimer((__int64)Timer, 0);
  v14 = v23;
  v15 = v13;
  Timer->Dpc = v10;
  Timer->Period = Period;
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = v5;
  if ( v23.HighPart >= 0 )
  {
    v5 |= 1u;
    BYTE1(LockNV) = v5;
    v14.QuadPart = MEMORY[0xFFFFF78000000014] - v23.QuadPart;
    if ( (((unsigned __int64)(MEMORY[0xFFFFF78000000014] - v23.QuadPart) >> 32) & 0x80000000) == 0LL )
    {
      Timer->Header.LockNV = LockNV;
      Timer->DueTime.QuadPart = 0LL;
LABEL_20:
      KiTimerWaitTest((__int64)CurrentPrcb, (__int64)Timer, 0LL);
      goto LABEL_12;
    }
  }
  v16 = 0LL;
  if ( (v5 & 0xFC) != 0 )
    v16 = (unsigned __int8)(v5 & 0xFC) << 16;
  HIBYTE(LockNV) |= 0x40u;
  v17 = MEMORY[0xFFFFF78000000008] - v14.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - v14.QuadPart;
  BYTE2(LockNV) = (unsigned __int64)(v16 + v17) >> 18;
  Timer->Header.LockNV = LockNV;
  Timer->Header.SignalState = 0;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)Dpc, BYTE2(LockNV), 0LL) )
    goto LABEL_20;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_12:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v15;
}
