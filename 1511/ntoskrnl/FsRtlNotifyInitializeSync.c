/*
 * XREFs of FsRtlNotifyInitializeSync @ 0x14048D7FC
 * Callers:
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x14048E028 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
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
