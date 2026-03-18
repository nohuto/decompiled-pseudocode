/*
 * XREFs of WheapInitializeWorkQueue @ 0x140170114
 * Callers:
 *     WheaInitialize @ 0x1407C0D60 (WheaInitialize.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 (__fastcall *WheapInitializeWorkQueue())()
{
  __int64 (__fastcall *result)(); // rax

  memset(&WheapDispatchPtr.DeviceLock.Header.WaitListHead, 0, 0x88uLL);
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Blink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  WheapDispatchPtr.DeviceLock.Header.WaitListHead.Flink = &WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_140324878 = (__int64)WheapWorkQueueDpcRoutine;
  qword_1403248B0 = (__int64)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  qword_1403248C0 = (__int64)WheapProcessWorkQueueItem;
  *(_QWORD *)&WheapDispatchPtr.SectorSize = 0LL;
  LODWORD(WheapDispatchPtr.Reserved) = 275;
  qword_140324880 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_140324898 = 0LL;
  qword_140324870 = 0LL;
  qword_1403248B8 = (__int64)&WheapDispatchPtr.DeviceLock.Header.WaitListHead;
  qword_1403248A0 = 0LL;
  return result;
}
