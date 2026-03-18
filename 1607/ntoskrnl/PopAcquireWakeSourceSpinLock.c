/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x14011491C
 * Callers:
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PopAcquireWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, a1);
}
