/*
 * XREFs of KeSetTimerEx @ 0x140066890
 * Callers:
 *     VerifierKeSetTimerEx @ 0x140748DC4 (VerifierKeSetTimerEx.c)
 * Callees:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140066AA0 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x140066B50 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v7; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v10; // al
  BOOLEAN v11; // r12
  int v12; // eax
  PKTIMER v13; // rdx
  struct _KPRCB *v14; // rcx
  int v15; // r9d
  int v18; // [rsp+70h] [rbp+18h] BYREF

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
  v14 = CurrentPrcb;
  if ( !v12 )
    goto LABEL_7;
  v15 = v18;
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v15, 0LL) )
  {
    v13 = Timer;
    v14 = CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v14, v13, 0LL);
    goto LABEL_8;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_8:
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  return v11;
}
