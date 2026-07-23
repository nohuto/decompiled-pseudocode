/*
 * XREFs of ZwQueryPerformanceCounter @ 0x14015A810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryPerformanceCounter(PLARGE_INTEGER Counter, PLARGE_INTEGER Frequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Counter);
}
