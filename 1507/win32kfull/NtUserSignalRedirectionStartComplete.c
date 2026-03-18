/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C0156C30
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C0156C8C (GreGetRedirectionEvent.c)
 */

__int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v3; // edi
  void *RedirectionEvent; // rax
  NTSTATUS v5; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v3 = 0;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v5 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v5 = -1073741790;
  GreUnlockDwmState();
  LOBYTE(v3) = v5 >= 0;
  return v3;
}
