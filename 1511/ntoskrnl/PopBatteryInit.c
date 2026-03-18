/*
 * XREFs of PopBatteryInit @ 0x14076FD1C
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x140093234 (KeInitializeTimer2.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_1402DE548 = -1;
  qword_1402DE3C8 = 0LL;
  qword_1402DE3E8 = (__int64)&qword_1402DE3E0;
  qword_1402DE3E0 = (__int64)&qword_1402DE3E0;
  v0 = 4LL;
  PopCB = 0LL;
  qword_1402DE3F8 = (__int64)&qword_1402DE3F0;
  qword_1402DE3F0 = (__int64)&qword_1402DE3F0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_1402DE4E8;
  qword_1402DE558 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_1402DE448.Header.Lock = 8LL;
  stru_1402DE4C8.Header.WaitListHead.Blink = &stru_1402DE4C8.Header.WaitListHead;
  stru_1402DE4C8.Header.WaitListHead.Flink = &stru_1402DE4C8.Header.WaitListHead;
  LOWORD(stru_1402DE4C8.Header.Lock) = 1;
  qword_1402DE4A0 = (__int64)PopBatteryWakeDpc;
  stru_1402DE4C8.Header.Size = 6;
  stru_1402DE448.Header.WaitListHead.Blink = &stru_1402DE448.Header.WaitListHead;
  stru_1402DE448.Header.WaitListHead.Flink = &stru_1402DE448.Header.WaitListHead;
  stru_1402DE4C8.Header.SignalState = 0;
  qword_1402DE560 = 0LL;
  dword_1402DE488 = 275;
  qword_1402DE4A8 = 0LL;
  qword_1402DE4C0 = 0LL;
  qword_1402DE498 = 0LL;
  stru_1402DE448.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1402DE448.Processor = 0LL;
  byte_1402DE3D8 = 0;
  KeInitializeTimer2((__int64)PopBatteryWakeTimer, (__int64)PopPoCoalescinCallback, 0LL, 2);
  *(_QWORD *)&stru_1402DDBC0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  PopPostSpoilingRefresh.DeferredRoutine = (PKDEFERRED_ROUTINE)PopBatteryRefreshStatus;
  result = &stru_1402DDBC0.Header.WaitListHead;
  stru_1402DDBC0.Header.WaitListHead.Blink = &stru_1402DDBC0.Header.WaitListHead;
  stru_1402DDBC0.Header.WaitListHead.Flink = &stru_1402DDBC0.Header.WaitListHead;
  PopBatteryLowLastState = 0;
  PopPostSpoilingRefresh.TargetInfoAsUlong = 275;
  PopPostSpoilingRefresh.DeferredContext = 0LL;
  PopPostSpoilingRefresh.DpcData = 0LL;
  PopPostSpoilingRefresh.ProcessorHistory = 0LL;
  stru_1402DDBC0.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1402DDBC0.Processor = 0LL;
  return result;
}
