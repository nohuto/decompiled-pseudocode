/*
 * XREFs of WheapInitializeWorkQueue @ 0x14014C680
 * Callers:
 *     WheaInitialize @ 0x1407A0948 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.Reserved, 0, 0x88uLL);
  *((_QWORD *)&WheapDispatchPtr.Reserved + 1) = &WheapDispatchPtr.Reserved;
  WheapDispatchPtr.Reserved = &WheapDispatchPtr.Reserved;
  qword_1402FAB78 = (__int64)WheapWorkQueueDpcRoutine;
  qword_1402FABB0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_1402FABC0 = (__int64)WheapProcessWorkQueueItem;
  qword_1402FAB50 = 0LL;
  dword_1402FAB60 = 275;
  qword_1402FAB80 = (__int64)&WheapDispatchPtr.Reserved;
  qword_1402FAB98 = 0LL;
  qword_1402FAB70 = 0LL;
  qword_1402FABB8 = (__int64)&WheapDispatchPtr.Reserved;
  qword_1402FABA0 = 0LL;
  return result;
}
