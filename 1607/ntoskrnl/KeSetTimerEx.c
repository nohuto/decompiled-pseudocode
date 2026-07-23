/*
 * XREFs of KeSetTimerEx @ 0x140055D50
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140057B20 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x140057BD0 (KiCancelTimer.c)
 *     KiTimerWaitTest @ 0x140058810 (KiTimerWaitTest.c)
 *     KiInsertTimerTable @ 0x1400599B0 (KiInsertTimerTable.c)
 *     KiTraceSetTimer @ 0x1401DAAEC (KiTraceSetTimer.c)
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
  struct _KPRCB *v14; // rcx
  int v15; // r9d
  __int64 v17; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+70h] [rbp+18h] BYREF

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
          &v19);
  v13 = Timer;
  v14 = CurrentPrcb;
  if ( !v12 )
    goto LABEL_7;
  v15 = v19;
  Timer->Header.SignalState = 0;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v15, 0LL) )
  {
    v13 = Timer;
    v14 = CurrentPrcb;
LABEL_7:
    KiTimerWaitTest(v14, v13, 0LL);
    goto LABEL_5;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, Dpc, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_5:
  LOBYTE(v17) = CurrentIrql;
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v17);
  return v11;
}
