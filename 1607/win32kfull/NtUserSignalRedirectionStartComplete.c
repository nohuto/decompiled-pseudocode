/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x1C0134500
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C0134560 (GreGetRedirectionEvent.c)
 */

__int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rcx
  __int64 CurrentProcess; // rax
  __int64 v2; // rdi
  void *RedirectionEvent; // rax
  NTSTATUS v4; // ebx

  GreLockDwmState();
  CurrentProcess = PsGetCurrentProcess(v0);
  v2 = 0LL;
  if ( (unsigned int)IsProcessDwm(CurrentProcess) && (RedirectionEvent = (void *)GreGetRedirectionEvent()) != 0LL )
    v4 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v4 = -1073741790;
  GreUnlockDwmState();
  LOBYTE(v2) = v4 >= 0;
  return v2;
}
