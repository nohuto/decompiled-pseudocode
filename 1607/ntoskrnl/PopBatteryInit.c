/*
 * XREFs of PopBatteryInit @ 0x1407B99E0
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14007DDC8 (KeInitializeTimer2.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_1403035A8 = 0LL;
  qword_140303750 = 0LL;
  PopCB[0] = 0LL;
  qword_1403035C8 = (__int64)&qword_1403035C0;
  qword_1403035C0 = (__int64)&qword_1403035C0;
  qword_140303748 = 0LL;
  qword_1403035D8 = (__int64)&qword_1403035D0;
  qword_1403035D0 = (__int64)&qword_1403035D0;
  memset(&xmmword_140303758, 0, 0x20uLL);
  LOBYTE(xmmword_140303758) = 1;
  dword_14030372C = -1;
  v0 = 4LL;
  dword_140303728 = -1;
  qword_140303738 = 0LL;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_1403036C8;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140303628.Header.Lock = 8LL;
  stru_1403036A8.Header.WaitListHead.Blink = &stru_1403036A8.Header.WaitListHead;
  stru_1403036A8.Header.WaitListHead.Flink = &stru_1403036A8.Header.WaitListHead;
  LOWORD(stru_1403036A8.Header.Lock) = 1;
  qword_140303680 = (__int64)PopBatteryWakeDpc;
  stru_1403036A8.Header.Size = 6;
  stru_140303628.Header.WaitListHead.Blink = &stru_140303628.Header.WaitListHead;
  stru_140303628.Header.WaitListHead.Flink = &stru_140303628.Header.WaitListHead;
  stru_1403036A8.Header.SignalState = 0;
  qword_140303740 = 0LL;
  dword_140303668 = 275;
  qword_140303688 = 0LL;
  qword_1403036A0 = 0LL;
  qword_140303678 = 0LL;
  stru_140303628.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140303628.Processor = 0LL;
  byte_1403035B8 = 0;
  KeInitializeTimer2((__int64)&PopBatteryWakeTimer, (__int64)xHalFreeMessageTarget, 0LL, 2);
  dword_14030361C = 0;
  *(_QWORD *)&stru_140303180.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140303158 = (__int64)PopBatteryRefreshStatus;
  result = &stru_140303180.Header.WaitListHead;
  stru_140303180.Header.WaitListHead.Blink = &stru_140303180.Header.WaitListHead;
  stru_140303180.Header.WaitListHead.Flink = &stru_140303180.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140303160 = 0LL;
  qword_140303178 = 0LL;
  qword_140303150 = 0LL;
  stru_140303180.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140303180.Processor = 0LL;
  return result;
}
