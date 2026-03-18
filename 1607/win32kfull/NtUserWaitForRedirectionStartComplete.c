/*
 * XREFs of NtUserWaitForRedirectionStartComplete @ 0x1C021C080
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C0134560 (GreGetRedirectionEvent.c)
 */

__int64 NtUserWaitForRedirectionStartComplete()
{
  NTSTATUS v0; // ebx
  PVOID v1; // rsi
  struct DwmState *RedirectionEvent; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0LL;
  GreLockDwmState();
  RedirectionEvent = GreGetRedirectionEvent();
  if ( RedirectionEvent )
  {
    v3 = ObReferenceObjectByHandle(RedirectionEvent, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v1 = Object;
    v0 = v3;
  }
  GreUnlockDwmState(RedirectionEvent);
  if ( v0 < 0 )
    return 0LL;
  v4 = 1LL;
  if ( v1 )
  {
    v0 = KeWaitForSingleObject(v1, Executive, 0, 1u, 0LL);
    ObfDereferenceObject(v1);
  }
  if ( v0 < 0 )
    return 0LL;
  return v4;
}
