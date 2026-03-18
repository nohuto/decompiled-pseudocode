/*
 * XREFs of GreLockDynamicModeChange @ 0x1C00826D0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 */

__int64 GreLockDynamicModeChange()
{
  EngAcquireSemaphore(ghsemDynamicModeChange);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
}
