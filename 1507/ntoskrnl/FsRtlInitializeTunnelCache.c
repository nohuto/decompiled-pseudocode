/*
 * XREFs of FsRtlInitializeTunnelCache @ 0x1405644A8
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 */

void __stdcall FsRtlInitializeTunnelCache(TUNNEL *Cache)
{
  Cache->Mutex.Count = 1;
  Cache->Mutex.Owner = 0LL;
  Cache->Mutex.Contention = 0;
  KeInitializeEvent(&Cache->Mutex.Event, SynchronizationEvent, 0);
  Cache->Cache = 0LL;
  Cache->TimerQueue.Blink = &Cache->TimerQueue;
  Cache->TimerQueue.Flink = &Cache->TimerQueue;
  Cache->NumEntries = 0;
}
