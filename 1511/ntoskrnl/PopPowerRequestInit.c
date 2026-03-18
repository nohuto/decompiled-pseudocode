/*
 * XREFs of PopPowerRequestInit @ 0x14075B800
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlInitializeGenericTableAvl @ 0x1400909E4 (RtlInitializeGenericTableAvl.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  PopPowerRequestLock = 0LL;
  qword_1402DF538 = 0LL;
  PopPowerRequestSpinLock = 0LL;
  PopPowerRequestObjectCount = 0LL;
  PopSpecialPowerRequestObjectCount = 0LL;
  memset(v3, 0, 0x78uLL);
  RtlInitUnicodeString(&DestinationString, L"PowerRequest");
  BYTE2(v3[0]) |= 0x14u;
  v3[8] = PopClosePowerRequestObject;
  LOWORD(v3[0]) = 120;
  v3[9] = PopDeletePowerRequestObject;
  HIDWORD(v3[4]) = 512;
  HIDWORD(v3[5]) = 112;
  LODWORD(v3[1]) = 402;
  *(_OWORD *)((char *)&v3[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v3[3]) = 2031616;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&PopPowerRequestObjectType);
  if ( v0 >= 0 )
  {
    PopCallbackWorkItem.Parameter = 0LL;
    PopCallbackWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopPowerRequestCallbackWorker;
    PopCallbackWorkItem.List.Flink = 0LL;
    qword_1402DF678 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_1402DF6A8 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_1402DF698 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    *(_QWORD *)&PopExecutionRequiredTimer.Header.Lock = 8LL;
    PopExecutionRequiredTimer.Header.WaitListHead.Blink = &PopExecutionRequiredTimer.Header.WaitListHead;
    PopExecutionRequiredTimer.Header.WaitListHead.Flink = &PopExecutionRequiredTimer.Header.WaitListHead;
    PopExecutionRequiredTimeoutDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecutionRequiredTimeoutCallback;
    PopCheckExecutionRequiredWorker.WorkerRoutine = (void (__fastcall *)(void *))PopCheckExecutionRequiredPowerRequests;
    PopExecutionRequiredTimer.DueTime.QuadPart = 0LL;
    *(_QWORD *)&PopExecutionRequiredTimer.Processor = 0LL;
    PopExecutionRequiredTimeoutDpc.TargetInfoAsUlong = 275;
    PopExecutionRequiredTimeoutDpc.DeferredContext = 0LL;
    PopExecutionRequiredTimeoutDpc.DpcData = 0LL;
    PopExecutionRequiredTimeoutDpc.ProcessorHistory = 0LL;
    PopCheckExecutionRequiredWorker.Parameter = 0LL;
    PopCheckExecutionRequiredWorker.List.Flink = 0LL;
  }
  return (unsigned int)v0;
}
