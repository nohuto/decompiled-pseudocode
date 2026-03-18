/*
 * XREFs of PopIdleAoAcDozeS4TimerCallback @ 0x14020D480
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14000A20C (PopDeepSleepSetDisengageReason.c)
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 */

void PopIdleAoAcDozeS4TimerCallback()
{
  KIRQL v0; // al

  v0 = KeAcquireSpinLockRaiseToDpc(&PopIdleAoAcDozeS4Lock);
  byte_1403033C4 = 0;
  KeReleaseSpinLock(&PopIdleAoAcDozeS4Lock, v0);
  _m_prefetchw(&dword_1403033CC);
  if ( !_InterlockedOr(&dword_1403033CC, 1u) )
  {
    PopDeepSleepSetDisengageReason(4);
    ExQueueWorkItem(&PopIdleAoAcDozeS4WorkItem, DelayedWorkQueue);
  }
}
