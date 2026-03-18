/*
 * XREFs of KeInitializeGuardedMutex @ 0x14007D100
 * Callers:
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     ExInitializePoolDescriptor @ 0x140536204 (ExInitializePoolDescriptor.c)
 *     CmpInitSIDToHiveMapping @ 0x14055B694 (CmpInitSIDToHiveMapping.c)
 *     CmpInitializeDelayedCloseTable @ 0x14055B6A0 (CmpInitializeDelayedCloseTable.c)
 *     CmpInitDelayDerefKCBEngine @ 0x14055B6E8 (CmpInitDelayDerefKCBEngine.c)
 *     PfTInitialize @ 0x140571904 (PfTInitialize.c)
 *     PiDqObjectManagerInit @ 0x14057C724 (PiDqObjectManagerInit.c)
 *     EtwpInitializeProviderTraits @ 0x1405814DC (EtwpInitializeProviderTraits.c)
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
