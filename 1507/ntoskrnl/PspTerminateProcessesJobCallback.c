/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x1404F6020
 * Callers:
 *     <none>
 * Callees:
 *     PspGetNextJobProcess @ 0x1404F60B8 (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140505F18 (PspRemoveProcessFromJobChain.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *i; // r9
  _DWORD *NextJobProcess; // rax
  _DWORD *v7; // rdi
  char v9[40]; // [rsp+20h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; i = v7 )
  {
    NextJobProcess = (_DWORD *)PspGetNextJobProcess(a1, CurrentThread, v9, i);
    v7 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (NextJobProcess[192] & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain(NextJobProcess);
  }
  return 0LL;
}
