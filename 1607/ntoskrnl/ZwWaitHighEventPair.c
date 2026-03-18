/*
 * XREFs of ZwWaitHighEventPair @ 0x14015D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitHighEventPair(HANDLE EventPairHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle, v1, v2);
}
