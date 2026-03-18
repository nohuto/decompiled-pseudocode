/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x14076E2E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x1400931DC (KeInitializeQueue.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x140545F50 (IopQueryPassiveInterruptRegistryOptions.c)
 */

NTSTATUS IopInitializePassiveInterruptServices()
{
  void *v0; // rdx
  void *v1; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_1402FAD28 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v1, v0);
}
