/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C0039010
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnPublish()
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnPublish");
  return GreReleaseSemaphoreInternal(ghsemVisRgnPublish);
}
