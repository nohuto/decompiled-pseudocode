/*
 * XREFs of PiDqObjectManagerInit @ 0x140548260
 * Callers:
 *     PiDqInit @ 0x14076EEB0 (PiDqInit.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x140093730 (KeInitializeGuardedMutex.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 (__fastcall *__fastcall PiDqObjectManagerInit(PERESOURCE Resource, int a2))(PERESOURCE Resource)
{
  __int64 (__fastcall *result)(PERESOURCE); // rax

  memset(Resource, 0, 0xF0uLL);
  *(_DWORD *)&Resource[2].ActiveCount = a2;
  ExInitializeResourceLite(Resource);
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  Resource[1].SpinLock = (KSPIN_LOCK)&Resource[1].CreatorBackTraceIndex;
  Resource[1].CreatorBackTraceIndex = (ULONG_PTR)&Resource[1].CreatorBackTraceIndex;
  Resource[2].SystemResourcesList.Blink = &Resource[2].SystemResourcesList;
  Resource[2].SystemResourcesList.Flink = &Resource[2].SystemResourcesList;
  result = PiDqObjectManagerServiceActionQueue;
  *(_QWORD *)&Resource[1].OwnerEntry.0 = 0LL;
  *(_QWORD *)&Resource[1].NumberOfSharedWaiters = PiDqObjectManagerServiceActionQueue;
  Resource[1].Reserved2 = Resource;
  return result;
}
