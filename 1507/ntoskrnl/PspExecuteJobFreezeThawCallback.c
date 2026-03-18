/*
 * XREFs of PspExecuteJobFreezeThawCallback @ 0x1400D62F0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x1404F60B8 (PspGetNextJobProcess.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspExecuteJobFreezeThawCallback(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  void *v5; // r9
  void *NextJobProcess; // rax
  void *v7; // rbx
  int v8; // eax
  char v10[40]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = (void *)PspGetNextJobProcess(a1, CurrentThread, v10, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    v8 = PspChangeProcessExecutionState(NextJobProcess);
    if ( v8 < 0 )
      *a2 = v8;
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
