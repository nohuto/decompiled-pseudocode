/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x140148FA8
 * Callers:
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1403EF2D0 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PopReleaseWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  PopWakeSourceLockOwner = 0LL;
  KeReleaseInStackQueuedSpinLock(LockHandle);
}
