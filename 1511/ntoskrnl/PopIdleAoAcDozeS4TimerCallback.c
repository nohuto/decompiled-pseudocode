/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x1401F39BC
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_1402DEB04 = 0;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v0);
  _m_prefetchw(&dword_1402DEB0C);
  v1 = dword_1402DEB0C;
  do
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange(&dword_1402DEB0C, v1 | 1, v1);
  }
  while ( v2 != v1 );
  if ( !v1 )
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
}
