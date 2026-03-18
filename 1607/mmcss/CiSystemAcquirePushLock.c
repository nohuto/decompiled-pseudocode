/*
 * XREFs of CiSystemAcquirePushLock @ 0x1C000B5F0
 * Callers:
 *     CiAcquireProcessLock @ 0x1C000A000 (CiAcquireProcessLock.c)
 *     CiProcessCreate @ 0x1C000A170 (CiProcessCreate.c)
 *     CiThreadSetRelativePriority @ 0x1C000A530 (CiThreadSetRelativePriority.c)
 *     CiThreadCreate @ 0x1C000A890 (CiThreadCreate.c)
 *     CiProcessLocate @ 0x1C000AB10 (CiProcessLocate.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ABD0 (CiThreadIncrementScheduledCount.c)
 *     CiTaskIndexCreate @ 0x1C000ACD0 (CiTaskIndexCreate.c)
 *     CiTaskIndexLocate @ 0x1C000AE20 (CiTaskIndexLocate.c)
 *     CiDispatchClose @ 0x1C000B190 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000B2C0 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000B420 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x1C000B4D0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B540 (CiThreadDecrementScheduledCount.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000B5E0 (CiAcquireTaskIndexListLock.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000B620 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall CiSystemAcquirePushLock(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
