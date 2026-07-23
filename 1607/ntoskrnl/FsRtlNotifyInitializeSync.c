/*
 * XREFs of FsRtlNotifyInitializeSync @ 0x1404AAF64
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404AAB74 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 * Callees:
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __stdcall FsRtlNotifyInitializeSync(PNOTIFY_SYNC *NotifySync)
{
  struct _KEVENT *PoolWithTag; // rbx

  *NotifySync = 0LL;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)528, 0x48uLL, 0x4E725346u);
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  PoolWithTag->Header.LockNV = 1;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  PoolWithTag[2].Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag[2].Header.WaitListHead.Blink) = 0;
  *NotifySync = (PNOTIFY_SYNC)PoolWithTag;
}
