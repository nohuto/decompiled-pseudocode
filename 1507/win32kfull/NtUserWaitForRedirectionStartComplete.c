/*
 * XREFs of NtUserWaitForRedirectionStartComplete @ 0x1C0221D20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRedirectionEvent @ 0x1C0156C8C (GreGetRedirectionEvent.c)
 */

__int64 NtUserWaitForRedirectionStartComplete()
{
  NTSTATUS v0; // ebx
  PVOID v1; // rsi
  struct DwmState *RedirectionEvent; // rcx
  NTSTATUS v3; // eax
  unsigned int v4; // edi
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
    return 0;
  v4 = 1;
  if ( v1 )
  {
    v0 = KeWaitForSingleObject(v1, Executive, 0, 1u, 0LL);
    ObfDereferenceObject(v1);
  }
  if ( v0 < 0 )
    return 0;
  return v4;
}
