/*
 * XREFs of GreLockDynamicModeChange @ 0x1C007EE90
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 */

__int64 GreLockDynamicModeChange()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
}
