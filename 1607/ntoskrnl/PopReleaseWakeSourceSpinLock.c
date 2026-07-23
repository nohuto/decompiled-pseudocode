/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x140114E84
 * Callers:
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall PopReleaseWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeReleaseInStackQueuedSpinLock(LockHandle);
}
