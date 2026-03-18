/*
 * XREFs of KeSetTimer @ 0x1400669A0
 * Callers:
 *     VerifierKeSetTimer @ 0x140748DB4 (VerifierKeSetTimer.c)
 * Callees:
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140066AA0 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x140066B50 (KiCancelTimer.c)
 *     KiInsertTimerTable @ 0x1400A2120 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1400A40F0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x1402099B0 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimer(PKTIMER Timer, LARGE_INTEGER DueTime, PKDPC Dpc)
{
  _KDPC *v5; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  BOOLEAN v8; // al
  LARGE_INTEGER v9; // rdx
  BOOLEAN v10; // r15
  int v11; // eax
  __int64 v12; // r10
  PKTIMER v13; // rdx
  struct _KPRCB *v14; // rcx
  int v15; // r9d
  int v17; // [rsp+60h] [rbp+8h] BYREF
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
  v14 = CurrentPrcb;
  if ( !v11 )
    goto LABEL_7;
  v15 = v17;
  Timer->Header.SignalState = v12;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v15, v12) )
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
  return v10;
}
