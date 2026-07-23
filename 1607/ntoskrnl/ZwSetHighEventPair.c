/*
 * XREFs of ZwSetHighEventPair @ 0x14015D1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetHighEventPair(HANDLE EventPairHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
