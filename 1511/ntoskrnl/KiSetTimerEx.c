/*
 * XREFs of KiSetTimerEx @ 0x1400E78B8
 * Callers:
 *     MiInsertUnusedSegment @ 0x1400A8590 (MiInsertUnusedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1401D1414 (MiProcessDeleteOnClose.c)
 *     SmWdStartMonitoring @ 0x1402096B8 (SmWdStartMonitoring.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1404AD068 (SmProcessStoreMemoryPriorityRequest.c)
 *     PpmWmiDispatch @ 0x1405403EC (PpmWmiDispatch.c)
 *     ViPendingDelayCompletion @ 0x1406C1348 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x1406C8350 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x1406C8744 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140091630 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x1400916F0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 */

char __fastcall KiSetTimerEx(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int64 a5)
{
  int v7; // edi
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r14
  char v11; // al
  char v12; // r13
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // r9d
  unsigned __int64 v18; // r8
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(a5 ^ KiWaitAlways), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = KiCancelTimer(a1, 0LL, a3);
  *(_QWORD *)(a1 + 48) = v8;
  *(_DWORD *)(a1 + 60) = v7;
  v12 = v11;
  v13 = KiComputeDueTime((int *)a1, a2, a4, &v20);
  v14 = a1;
  v15 = (__int64)CurrentPrcb;
  if ( !v13 )
    goto LABEL_2;
  v17 = v20;
  v18 = a5;
  *(_DWORD *)(a1 + 4) = 0;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, a1, v18, v17, 0LL) )
  {
    v14 = a1;
    v15 = (__int64)CurrentPrcb;
LABEL_2:
    KiTimerWaitTest(v15, v14, 0LL);
    goto LABEL_3;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, a5, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_3:
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v12;
}
