/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x140135BB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x14009C604 (ExpCleanupAutoExpandPushLock.c)
 */

void __fastcall ExFreeAutoExpandPushLock(void *a1)
{
  ExpCleanupAutoExpandPushLock((__int64)a1);
  ExFreePoolWithTag(a1, 0);
}
