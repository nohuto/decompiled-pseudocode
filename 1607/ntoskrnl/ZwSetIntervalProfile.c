/*
 * XREFs of ZwSetIntervalProfile @ 0x14015D390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE ClockSource)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&Interval);
}
