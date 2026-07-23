/*
 * XREFs of IopInitializePassiveInterruptServices @ 0x1407B80E0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeInitializeQueue @ 0x14007DEC4 (KeInitializeQueue.c)
 *     IopQueryPassiveInterruptRegistryOptions @ 0x14057AD5C (IopQueryPassiveInterruptRegistryOptions.c)
 */

NTSTATUS IopInitializePassiveInterruptServices()
{
  void *v0; // rdx
  void *v1; // rcx

  IopQueryPassiveInterruptRegistryOptions();
  PassiveInterruptListLock = 0LL;
  qword_140320268 = (__int64)&PassiveInterruptList;
  PassiveInterruptList = (__int64)&PassiveInterruptList;
  KeInitializeQueue(&PassiveInterruptRealtimeWorkQueue, (unsigned __int8)PassiveInterruptRealtimeWorkerCount);
  return IopCreatePassiveInterruptRealtimeThreads(v1, v0);
}
