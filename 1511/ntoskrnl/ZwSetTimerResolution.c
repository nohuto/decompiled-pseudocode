/*
 * XREFs of ZwSetTimerResolution @ 0x140153900
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400F33B4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetTimerResolution(ULONG RequestedResolution, BOOLEAN SetOrUnset, PULONG ActualResolution)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&RequestedResolution);
}
