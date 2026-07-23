/*
 * XREFs of PspSetCpuRateControlJobPostCallback @ 0x140456F04
 * Callers:
 *     <none>
 * Callees:
 *     PspSetProcessSchedulingGroup @ 0x140456EB4 (PspSetProcessSchedulingGroup.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 */

__int64 __fastcall PspSetCpuRateControlJobPostCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // r9
  __int64 NextJobProcess; // rax
  __int64 v7; // rdi
  char v9[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  if ( a2 )
    v3 = a2 + 128;
  else
    v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    PspSetProcessSchedulingGroup(NextJobProcess, v3);
    v5 = v7;
    a1 = v2;
  }
  return 0LL;
}
