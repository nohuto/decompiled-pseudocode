/*
 * XREFs of ZwPulseEvent @ 0x1401814D0
 * Callers:
 *     VfZwPulseEvent @ 0x140756DC8 (VfZwPulseEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPulseEvent(HANDLE EventHandle, PLONG PulseCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
