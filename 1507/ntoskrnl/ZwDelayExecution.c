/*
 * XREFs of ZwDelayExecution @ 0x14017F670
 * Callers:
 *     IovUnloadDrivers @ 0x140735398 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Alertable);
}
