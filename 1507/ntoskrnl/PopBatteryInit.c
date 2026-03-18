/*
 * XREFs of PopBatteryInit @ 0x1407E5890
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14002F848 (KeInitializeTimer2.c)
 */

__int64 PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  __int64 result; // rax

  dword_14032EB08 = -1;
  qword_14032E988 = 0LL;
  qword_14032E9A8 = (__int64)&qword_14032E9A0;
  qword_14032E9A0 = (__int64)&qword_14032E9A0;
  v0 = 4LL;
  PopCB = 0LL;
  qword_14032E9B8 = (__int64)&qword_14032E9B0;
  qword_14032E9B0 = (__int64)&qword_14032E9B0;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_14032EAA8;
  qword_14032EB18 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_14032EA08.Header.Lock = 8LL;
  stru_14032EA88.Header.WaitListHead.Blink = &stru_14032EA88.Header.WaitListHead;
  stru_14032EA88.Header.WaitListHead.Flink = &stru_14032EA88.Header.WaitListHead;
  LOWORD(stru_14032EA88.Header.Lock) = 1;
  qword_14032EA60 = (__int64)PopBatteryWakeDpc;
  stru_14032EA88.Header.Size = 6;
  stru_14032EA08.Header.WaitListHead.Blink = &stru_14032EA08.Header.WaitListHead;
  stru_14032EA08.Header.WaitListHead.Flink = &stru_14032EA08.Header.WaitListHead;
  stru_14032EA88.Header.SignalState = 0;
  qword_14032EB20 = 0LL;
  dword_14032EA48 = 275;
  qword_14032EA68 = 0LL;
  qword_14032EA80 = 0LL;
  qword_14032EA58 = 0LL;
  stru_14032EA08.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_14032EA08.Processor = 0LL;
  byte_14032E998 = 0;
  KeInitializeTimer2((__int64)&PopBatteryWakeTimer, (__int64)PopPoCoalescinCallback, 0LL, 2);
  result = MEMORY[0xFFFFF78000000008] + 300000000LL;
  PopBatteryLowLastState = 0;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  return result;
}
