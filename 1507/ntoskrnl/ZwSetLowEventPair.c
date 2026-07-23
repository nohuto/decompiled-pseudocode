/*
 * XREFs of ZwSetLowEventPair @ 0x1401820F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetLowEventPair(HANDLE EventPair)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPair);
}
