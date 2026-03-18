/*
 * XREFs of CiSystemAcquirePushLock @ 0x1C000B4F0
 * Callers:
 *     CiAcquireProcessLock @ 0x1C000A020 (CiAcquireProcessLock.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000A030 (CiDispatchCreateNotificationClient.c)
 *     CiTaskIndexCreate @ 0x1C000A410 (CiTaskIndexCreate.c)
 *     CiThreadSetRelativePriority @ 0x1C000A7C0 (CiThreadSetRelativePriority.c)
 *     CiThreadCreate @ 0x1C000A9A0 (CiThreadCreate.c)
 *     CiProcessLocate @ 0x1C000AC10 (CiProcessLocate.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000ADA0 (CiThreadIncrementScheduledCount.c)
 *     CiTaskIndexLocate @ 0x1C000AEA0 (CiTaskIndexLocate.c)
 *     CiProcessCreate @ 0x1C000AF60 (CiProcessCreate.c)
 *     CiDispatchClose @ 0x1C000B090 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000B1C0 (CiThreadCleanup.c)
 *     CiProcessDereference @ 0x1C000B320 (CiProcessDereference.c)
 *     CiProcessRemoveThread @ 0x1C000B3D0 (CiProcessRemoveThread.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000B440 (CiThreadDecrementScheduledCount.c)
 *     CiAcquireTaskIndexListLock @ 0x1C000B4E0 (CiAcquireTaskIndexListLock.c)
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
