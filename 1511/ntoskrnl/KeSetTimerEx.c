/*
 * XREFs of KeSetTimerEx @ 0x140091400
 * Callers:
 *     VerifierKeSetTimerEx @ 0x1406C6674 (VerifierKeSetTimerEx.c)
 * Callees:
 *     KiTimerWaitTest @ 0x140045200 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x140083990 (KiInsertTimerTable.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140091630 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x1400916F0 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x1401CADF8 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v7; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v10; // al
  BOOLEAN v11; // r12
  int v12; // eax
  PKTIMER v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v7 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = KiCancelTimer(Timer, 0LL);
  Timer->Dpc = v7;
  Timer->Period = Period;
  v11 = v10;
  v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
          Timer,
          (LARGE_INTEGER)DueTime.QuadPart,
          0LL,
          &v18);
  v13 = Timer;
  v14 = (__int64)CurrentPrcb;
  if ( !v12 )
    goto LABEL_7;
  v15 = v18;
  Timer->Header.SignalState = 0;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (unsigned __int64)Dpc, v15, 0LL) )
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
  return v11;
}
