/*
 * XREFs of ZwSetLowWaitHighEventPair @ 0x140182110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetLowWaitHighEventPair(HANDLE EventPair)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPair);
}
