/*
 * XREFs of GreUnlockVisRgnPublish @ 0x1C00111A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreUnlockVisRgnPublish(__int64 a1, __int64 a2, __int64 a3)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemVisRgnPublish", (__int64)ghsemVisRgnPublish, a3);
  return GreReleaseSemaphoreInternal(ghsemVisRgnPublish);
}
