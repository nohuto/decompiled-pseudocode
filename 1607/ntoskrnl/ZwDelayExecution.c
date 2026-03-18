/*
 * XREFs of ZwDelayExecution @ 0x14015A300
 * Callers:
 *     IovUnloadDrivers @ 0x140701070 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwDelayExecution(BOOLEAN Alertable, LARGE_INTEGER *Interval)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Alertable, Interval, v2);
}
