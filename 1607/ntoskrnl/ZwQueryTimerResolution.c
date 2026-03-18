/*
 * XREFs of ZwQueryTimerResolution @ 0x14015C660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryTimerResolution(PULONG MinimumResolution, PULONG MaximumResolution, PULONG ActualResolution)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MinimumResolution, MaximumResolution, ActualResolution);
}
