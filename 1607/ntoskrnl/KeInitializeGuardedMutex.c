/*
 * XREFs of KeInitializeGuardedMutex @ 0x14007D180
 * Callers:
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048D918 (PiUEventInitClientRegistrationContext.c)
 *     ExInitializePoolDescriptor @ 0x140536744 (ExInitializePoolDescriptor.c)
 *     CmpInitSIDToHiveMapping @ 0x14055BBD4 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14055BBE0 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14055BC28 (CmpInitDelayDerefKCBEngine.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x14057CBD0 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x140581988 (EtwpInitializeProviderTraits.c)
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
