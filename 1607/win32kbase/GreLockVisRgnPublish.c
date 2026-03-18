/*
 * XREFs of GreLockVisRgnPublish @ 0x1C00778D0
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemVisRgnPublish", (int)ghsemVisRgnPublish, 9);
}
