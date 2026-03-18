/*
 * XREFs of ExFreeAutoExpandPushLock @ 0x14012FB28
 * Callers:
 *     <none>
 * Callees:
 *     ExpCleanupAutoExpandPushLock @ 0x1400E1ABC (ExpCleanupAutoExpandPushLock.c)
 */

void __fastcall ExFreeAutoExpandPushLock(void *a1)
{
  ExpCleanupAutoExpandPushLock((__int64)a1);
  ExFreePoolWithTag(a1, 0);
}
