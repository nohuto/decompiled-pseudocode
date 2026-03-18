/*
 * XREFs of CmpInitializeDelayedCloseTable @ 0x1405A27B0
 * Callers:
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14002B748 (KeInitializeGuardedMutex.c)
 */

__int64 *CmpInitializeDelayedCloseTable()
{
  __int64 *result; // rax

  CmpDelayCloseWorkItem.Parameter = 0LL;
  CmpDelayCloseWorkItem.List.Flink = 0LL;
  CmpDelayCloseWorkItem.WorkerRoutine = (void (__fastcall *)(void *))CmpDelayCloseWorker;
  KeInitializeGuardedMutex((PKGUARDED_MUTEX)&CmpDelayedCloseTableLock);
  result = &CmpDelayedLRUListHead;
  qword_14034D9A8 = (__int64)&CmpDelayedLRUListHead;
  CmpDelayedLRUListHead = (__int64)&CmpDelayedLRUListHead;
  return result;
}
