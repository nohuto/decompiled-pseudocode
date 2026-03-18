/*
 * XREFs of LogSchedEvent @ 0x1C001F290
 * Callers:
 *     SyncEvalObject @ 0x1C0001840 (SyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     AMLIPauseInterpreter @ 0x1C004271C (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0042804 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C0046E38 (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C001F2E8 (LogEvent.c)
 */

__int64 __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11

  v5 = a3;
  LODWORD(a3) = 0;
  if ( a2 )
    a3 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (unsigned int)KeGetCurrentThread(), a3, a2, (unsigned int)gReadyQueue, v5, a4, a5);
}
