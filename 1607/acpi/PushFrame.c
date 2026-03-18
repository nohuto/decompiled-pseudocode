/*
 * XREFs of PushFrame @ 0x1C00204F4
 * Callers:
 *     AsyncEvalObject @ 0x1C0001AD0 (AsyncEvalObject.c)
 *     LoadDDB @ 0x1C0007080 (LoadDDB.c)
 *     AccessBaseField @ 0x1C001CA40 (AccessBaseField.c)
 *     ReadObject @ 0x1C001ECD0 (ReadObject.c)
 *     PushPost @ 0x1C00204A0 (PushPost.c)
 *     Acquire @ 0x1C0020960 (Acquire.c)
 *     Release @ 0x1C0028520 (Release.c)
 *     SleepQueueRequest @ 0x1C005D1FC (SleepQueueRequest.c)
 *     PushPreserveWriteObj @ 0x1C005DA1C (PushPreserveWriteObj.c)
 *     NestAsyncEvalObject @ 0x1C005DFF8 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0018760 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0025680 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0025778 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C00258B8 (LogError.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 440, 1297237576, a3);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v9;
    *(_DWORD *)v9 = a2;
    *(_QWORD *)(v9 + 24) = a4;
    if ( a5 )
      *a5 = v9;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
