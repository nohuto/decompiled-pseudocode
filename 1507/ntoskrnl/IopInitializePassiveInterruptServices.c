/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x1407E3660
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x14002E384 (KeInitializeQueue.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x1405BCCA8 (IopQueryPassiveInterruptRegistryOptions.c)
 */

NTSTATUS IopInitializePassiveInterruptServices()
{
  void *v0; // rdx
  void *v1; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_14034B1A8 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v1, v0);
}
