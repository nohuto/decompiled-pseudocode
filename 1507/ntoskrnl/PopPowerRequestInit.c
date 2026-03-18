/*
 * XREFs of PopPowerRequestInit @ 0x1407E52C4
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400194B8 (RtlInitializeGenericTableAvl.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 */

__int64 PopPowerRequestInit()
{
  int v0; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+40h] [rbp-29h] BYREF

  PopPowerRequestLock = 0LL;
  qword_14032F7D8 = 0LL;
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
    qword_14032F918 = (__int64)&PopPowerRequestObjectList;
    PopPowerRequestObjectList = (__int64)&PopPowerRequestObjectList;
    qword_14032F948 = (__int64)&PopSpecialPowerRequestObjectList;
    PopSpecialPowerRequestObjectList = (__int64)&PopSpecialPowerRequestObjectList;
    qword_14032F938 = (__int64)&PopPowerRequestCallbacks;
    PopPowerRequestCallbacks = (__int64)&PopPowerRequestCallbacks;
    RtlInitializeGenericTableAvl(
      &PopPowerRequestTable,
      (PRTL_AVL_COMPARE_ROUTINE)PopPowerRequestCompare,
      (PRTL_AVL_ALLOCATE_ROUTINE)PopPowerRequestAllocate,
      (PRTL_AVL_FREE_ROUTINE)PopPowerRequestFree,
      0LL);
    PopExecutionRequiredTimer = 8LL;
    qword_14032F7F0 = (__int64)&qword_14032F7E8;
    qword_14032F7E8 = (__int64)&qword_14032F7E8;
    qword_14032F8D8 = (__int64)PopExecutionRequiredTimeoutCallback;
    PopCheckExecutionRequiredWorker.WorkerRoutine = (void (__fastcall *)(void *))PopCheckExecutionRequiredPowerRequests;
    qword_14032F7F8 = 0LL;
    qword_14032F818 = 0LL;
    PopExecutionRequiredTimeoutDpc = 275;
    qword_14032F8E0 = 0LL;
    qword_14032F8F8 = 0LL;
    qword_14032F8D0 = 0LL;
    PopCheckExecutionRequiredWorker.Parameter = 0LL;
    PopCheckExecutionRequiredWorker.List.Flink = 0LL;
  }
  return (unsigned int)v0;
}
