/*
 * XREFs of ZwQueryTimerResolution @ 0x1401818F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryTimerResolution(PULONG MinimumResolution, PULONG MaximumResolution, PULONG ActualResolution)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MinimumResolution);
}
