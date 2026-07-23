/*
 * XREFs of PspTerminateProcessesJobCallback @ 0x140456F78
 * Callers:
 *     <none>
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspBeginServerSiloShutdown @ 0x14067E34C (PspBeginServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdown @ 0x14067E440 (PspCompleteServerSiloShutdown.c)
 */

__int64 __fastcall PspTerminateProcessesJobCallback(__int64 a1, __int64 a2)
{
  char v4; // r14
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR i; // r9
  ULONG_PTR NextJobProcess; // rax
  ULONG_PTR v8; // rbp
  unsigned int *v10; // rdx
  __int64 v11; // rcx
  char v12; // al
  char v13[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(a1 + 1304) & 0x40000000) != 0 && PspIsServerSilo(a1) )
  {
    v12 = PspBeginServerSiloShutdown(v11, *v10);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0x1Du);
    v4 = v12;
  }
  else
  {
    v4 = 0;
  }
  PsGetEffectiveServerSilo(a1);
  CurrentThread = KeGetCurrentThread();
  for ( i = 0LL; ; i = v8 )
  {
    NextJobProcess = PspGetNextJobProcess(a1, CurrentThread, v13, i);
    v8 = NextJobProcess;
    if ( !NextJobProcess )
      break;
    if ( (*(_DWORD *)(NextJobProcess + 768) & 0x800) == 0 )
      *(_BYTE *)(a2 + 4) |= 2u;
    PspRemoveProcessFromJobChain(NextJobProcess);
  }
  if ( v4 )
    PspCompleteServerSiloShutdown(a1);
  return 0LL;
}
