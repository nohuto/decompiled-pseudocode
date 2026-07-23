/*
 * XREFs of PspExecuteJobFreezeThawCallback @ 0x14006C228
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     PspChangeProcessExecutionState @ 0x140468830 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspExecuteJobFreezeThawCallback(__int64 a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rsi
  ULONG_PTR v5; // r9
  ULONG_PTR NextJobProcess; // rax
  ULONG_PTR v7; // rbx
  int v9; // eax
  char v10[40]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1;
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v10, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    v9 = PspChangeProcessExecutionState(NextJobProcess);
    if ( v9 < 0 )
      *a2 = v9;
    v5 = v7;
    a1 = v4;
  }
  return 0LL;
}
