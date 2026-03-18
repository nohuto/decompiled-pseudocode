/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x1404E17A0
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(PVOID *a1)
{
  char v2; // di
  PVOID **v3; // rax

  v2 = 0;
  ExAcquireFastMutex(&CmpWorkerEngineLock);
  v3 = (PVOID **)qword_1402FD7C8;
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v3;
  if ( *v3 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *v3 = a1;
  qword_1402FD7C8 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v2 = 1;
  }
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  if ( v2 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}
