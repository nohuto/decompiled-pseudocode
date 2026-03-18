/*
 * XREFs of GreLockVisRgnPublish @ 0x1C0010DF0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore(ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemVisRgnPublish", (int)ghsemVisRgnPublish, 9);
}
