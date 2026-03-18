/*
 * XREFs of GreLockVisRgnPublish @ 0x1C0039040
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 */

__int64 GreLockVisRgnPublish()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemVisRgnPublish);
  return EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemVisRgnPublish", ghsemVisRgnPublish, 9LL);
}
