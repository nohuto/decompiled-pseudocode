/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C0112FC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C011301C (GreGetRedirectionEvent.c)
 */

__int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  unsigned int v5; // edi
  void *RedirectionEvent; // rax
  NTSTATUS v7; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v5 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v7 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v7 = -1073741790;
  GreUnlockDwmState();
  LOBYTE(v5) = v7 >= 0;
  return v5;
}
