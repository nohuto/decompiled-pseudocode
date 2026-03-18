/*
 * XREFs of PopInitShutdownList @ 0x1407E85F4
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitShutdownList()
{
  __int64 result; // rax

  PopShutdownEvent.Header.Size = 6;
  LOWORD(PopShutdownEvent.Header.Lock) = 0;
  PopShutdownEvent.Header.WaitListHead.Blink = &PopShutdownEvent.Header.WaitListHead;
  PopShutdownEvent.Header.WaitListHead.Flink = &PopShutdownEvent.Header.WaitListHead;
  qword_14032F1A8 = (__int64)&PopShutdownQueue;
  PopShutdownQueue = (__int64)&PopShutdownQueue;
  qword_14032F168 = (__int64)&qword_14032F160;
  qword_14032F160 = (__int64)&qword_14032F160;
  result = 0LL;
  PopShutdownEvent.Header.SignalState = 0;
  PopShutdownThreadList = 0LL;
  LODWORD(PopShutdownListMutex) = 1;
  qword_14032F148 = 0LL;
  dword_14032F150 = 0;
  word_14032F158 = 1;
  byte_14032F15A = 6;
  dword_14032F15C = 0;
  PopShutdownListAvailable = 1;
  return result;
}
