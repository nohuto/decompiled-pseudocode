/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C00779F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 GreUnlockVisRgnPublish()
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnPublish");
  return GreReleaseSemaphoreInternal(ghsemVisRgnPublish);
}
