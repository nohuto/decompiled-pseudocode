/*
 * XREFs of PushFrame @ 0x1C0013EA4
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     Release @ 0x1C00055C0 (Release.c)
 *     Acquire @ 0x1C0005690 (Acquire.c)
 *     LoadDDB @ 0x1C000623C (LoadDDB.c)
 *     WriteObject @ 0x1C0012B10 (WriteObject.c)
 *     AccessBaseField @ 0x1C0015020 (AccessBaseField.c)
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 *     PushPost @ 0x1C00188D0 (PushPost.c)
 *     SleepQueueRequest @ 0x1C00461B4 (SleepQueueRequest.c)
 *     PushPreserveWriteObj @ 0x1C00469DC (PushPreserveWriteObj.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 * Callees:
 *     HeapAlloc @ 0x1C0013430 (HeapAlloc.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
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
