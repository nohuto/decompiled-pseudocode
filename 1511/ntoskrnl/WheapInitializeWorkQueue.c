/*
 * XREFs of WheapInitializeWorkQueue @ 0x140142498
 * Callers:
 *     WheaInitialize @ 0x140757730 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0, 0x88uLL);
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1402D5738 = (__int64)WheapWorkQueueDpcRoutine;
  qword_1402D5770 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_1402D5780 = (__int64)WheapProcessWorkQueueItem;
  *(_QWORD *)&WheapDispatchPtr.SectorSize = 0LL;
  LODWORD(WheapDispatchPtr.Reserved) = 275;
  qword_1402D5740 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1402D5758 = 0LL;
  qword_1402D5730 = 0LL;
  qword_1402D5778 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1402D5760 = 0LL;
  return result;
}
