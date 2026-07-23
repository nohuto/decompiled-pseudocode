/*
 * XREFs of ZwSetTimerResolution @ 0x14015D590
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400A31D0 (ExCleanTimerResolutionRequest.c)
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
