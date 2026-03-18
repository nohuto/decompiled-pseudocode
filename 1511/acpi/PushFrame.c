/*
 * XREFs of PushFrame @ 0x1C0014DD4
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     Release @ 0x1C0005520 (Release.c)
 *     Acquire @ 0x1C00055F0 (Acquire.c)
 *     LoadDDB @ 0x1C00065EC (LoadDDB.c)
 *     PushPost @ 0x1C0009F80 (PushPost.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 *     WriteObject @ 0x1C000EC20 (WriteObject.c)
 *     AccessBaseField @ 0x1C0016130 (AccessBaseField.c)
 *     SleepQueueRequest @ 0x1C0045ADC (SleepQueueRequest.c)
 *     PushPreserveWriteObj @ 0x1C00462FC (PushPreserveWriteObj.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0011E70 (HeapAlloc.c)
 *     LogError @ 0x1C0043CD8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00453F0 (PrintDebugMessage.c)
 */

__int64 __fastcall PushFrame(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rax

  v8 = 0;
  v9 = HeapAlloc(a1 + 432, 1297237576, a3);
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
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v8;
}
