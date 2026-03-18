/*
 * XREFs of KeInitializeGuardedMutex @ 0x140093730
 * Callers:
 *     PiUEventInitClientRegistrationContext @ 0x1403BFF58 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     ExInitializePoolDescriptor @ 0x1404FF558 (ExInitializePoolDescriptor.c)
 *     CmpInitSIDToHiveMapping @ 0x14051CA30 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14051CA3C (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14051CA84 (CmpInitDelayDerefKCBEngine.c)
 *     EtwpInitializeProviderTraits @ 0x1405244A8 (EtwpInitializeProviderTraits.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x140548260 (PiDqObjectManagerInit.c)
 *     VerifierKeInitializeGuardedMutex @ 0x1406C098C (VerifierKeInitializeGuardedMutex.c)
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
