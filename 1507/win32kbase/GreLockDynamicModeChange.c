/*
 * XREFs of GreLockDynamicModeChange @ 0x1C0019820
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 */

__int64 GreLockDynamicModeChange()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
}
