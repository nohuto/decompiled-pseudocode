/*
 * XREFs of PspSetCpuRateControlJobPostCallback @ 0x1404522F4
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14045075C (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspSetCpuRateControlJobPostCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  void *v5; // r9
  _QWORD *NextJobProcess; // rax
  _QWORD *v7; // rdi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  if ( a2 )
    v3 = a2 + 128;
  else
    v3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  while ( 1 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, (__int64)CurrentThread, v9, v5);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    PspSetProcessSchedulingGroup((__int64)NextJobProcess, v3);
    v5 = v7;
    a1 = v2;
  }
  return 0LL;
}
