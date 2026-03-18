/*
 * XREFs of PopBatteryInit @ 0x1407B99E0
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14007DD48 (KeInitializeTimer2.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140303668 = 0LL;
  qword_140303810 = 0LL;
  PopCB[0] = 0LL;
  qword_140303688 = (__int64)&qword_140303680;
  qword_140303680 = (__int64)&qword_140303680;
  qword_140303808 = 0LL;
  qword_140303698 = (__int64)&qword_140303690;
  qword_140303690 = (__int64)&qword_140303690;
  memset(&xmmword_140303818, 0, 0x20uLL);
  LOBYTE(xmmword_140303818) = 1;
  dword_1403037EC = -1;
  v0 = 4LL;
  dword_1403037E8 = -1;
  qword_1403037F8 = 0LL;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140303788;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_1403036E8.Header.Lock = 8LL;
  stru_140303768.Header.WaitListHead.Blink = &stru_140303768.Header.WaitListHead;
  stru_140303768.Header.WaitListHead.Flink = &stru_140303768.Header.WaitListHead;
  LOWORD(stru_140303768.Header.Lock) = 1;
  qword_140303740 = (__int64)PopBatteryWakeDpc;
  stru_140303768.Header.Size = 6;
  stru_1403036E8.Header.WaitListHead.Blink = &stru_1403036E8.Header.WaitListHead;
  stru_1403036E8.Header.WaitListHead.Flink = &stru_1403036E8.Header.WaitListHead;
  stru_140303768.Header.SignalState = 0;
  qword_140303800 = 0LL;
  dword_140303728 = 275;
  qword_140303748 = 0LL;
  qword_140303760 = 0LL;
  qword_140303738 = 0LL;
  stru_1403036E8.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_1403036E8.Processor = 0LL;
  byte_140303678 = 0;
  KeInitializeTimer2((__int64)&PopBatteryWakeTimer, (__int64)xHalFreeMessageTarget, 0LL, 2);
  dword_1403036DC = 0;
  *(_QWORD *)&stru_140303120.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_1403030F8 = (__int64)PopBatteryRefreshStatus;
  result = &stru_140303120.Header.WaitListHead;
  stru_140303120.Header.WaitListHead.Blink = &stru_140303120.Header.WaitListHead;
  stru_140303120.Header.WaitListHead.Flink = &stru_140303120.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140303100 = 0LL;
  qword_140303118 = 0LL;
  qword_1403030F0 = 0LL;
  stru_140303120.DueTime.QuadPart = 0LL;
  *(_QWORD *)&stru_140303120.Processor = 0LL;
  return result;
}
