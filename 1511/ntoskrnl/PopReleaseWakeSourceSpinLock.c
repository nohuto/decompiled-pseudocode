/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x14011A5C4
 * Callers:
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PopNewWakeInfo @ 0x1403A5AF0 (PopNewWakeInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PopReleaseWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  PopWakeSourceLockOwner = 0LL;
  KeReleaseInStackQueuedSpinLock(LockHandle);
}
