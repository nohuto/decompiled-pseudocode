/*
 * XREFs of ZwPulseEvent @ 0x140152B60
 * Callers:
 *     VfZwPulseEvent @ 0x1406D3200 (VfZwPulseEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
