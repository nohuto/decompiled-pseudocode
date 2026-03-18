/*
 * XREFs of KeInitializeGuardedMutex @ 0x14002B748
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     ExInitializePoolDescriptor @ 0x140579E5C (ExInitializePoolDescriptor.c)
 *     CmpInitSIDToHiveMapping @ 0x1405A27A4 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x1405A27B0 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x1405A27F8 (CmpInitDelayDerefKCBEngine.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x1405BF790 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x1405C2B50 (EtwpInitializeProviderTraits.c)
 *     VerifierKeInitializeGuardedMutex @ 0x140742184 (VerifierKeInitializeGuardedMutex.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  Mutex->Count = 1;
  Mutex->Owner = 0LL;
  Mutex->Contention = 0;
  Mutex->Event.Header.SignalState = 0;
  LOWORD(Mutex->Event.Header.Lock) = 1;
  Mutex->Event.Header.Size = 6;
  Mutex->Event.Header.WaitListHead.Blink = &Mutex->Event.Header.WaitListHead;
  Mutex->Event.Header.WaitListHead.Flink = &Mutex->Event.Header.WaitListHead;
}
