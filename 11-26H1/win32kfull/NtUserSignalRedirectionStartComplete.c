/*
 * XREFs of NtUserSignalRedirectionStartComplete @ 0x140294DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1401A20C0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     GreGetRedirectionEvent @ 0x14025C4E8 (GreGetRedirectionEvent.c)
 */

unsigned __int64 NtUserSignalRedirectionStartComplete()
{
  __int64 v0; // rcx
  Gre::Base *v1; // rcx
  void *RedirectionEvent; // rax
  NTSTATUS v3; // ebx

  GreLockDwmState();
  if ( (unsigned int)IsCurrentProcessDwm(v0) && (RedirectionEvent = (void *)GreGetRedirectionEvent(v1)) != 0LL )
    v3 = ZwSetEvent(RedirectionEvent, 0LL);
  else
    v3 = -1073741790;
  GreUnlockDwmState();
  return (unsigned __int64)(unsigned int)~v3 >> 31;
}
