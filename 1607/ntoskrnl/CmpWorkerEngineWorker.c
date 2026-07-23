/*
 * XREFs of CmpWorkerEngineWorker @ 0x1405179C8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void CmpWorkerEngineWorker()
{
  _QWORD *v0; // rdi
  __int64 v1; // rax
  int v2; // ebx
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    v0 = CmpWorkerEngineListHead;
    if ( CmpWorkerEngineListHead == &CmpWorkerEngineListHead )
      break;
    v1 = *(_QWORD *)CmpWorkerEngineListHead;
    if ( *((PVOID **)CmpWorkerEngineListHead + 1) != &CmpWorkerEngineListHead
      || *(PVOID *)(v1 + 8) != CmpWorkerEngineListHead )
    {
      __fastfail(3u);
    }
    CmpWorkerEngineListHead = *(PVOID *)CmpWorkerEngineListHead;
    *(_QWORD *)(v1 + 8) = &CmpWorkerEngineListHead;
    v0[1] = v0;
    *v0 = v0;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    v2 = *((_DWORD *)v0 + 4);
    ((void (__fastcall *)(_QWORD))v0[3])(v0[4]);
    if ( !v2 )
      ExFreePoolWithTag(v0, 0);
  }
  CmpWorkerEngineWorkItemActive = 0;
  KeReleaseGuardedMutex(&CmpWorkerEngineLock);
  _InterlockedOr(v3, 0);
  if ( CmpWorkerEngineFinishedEvent )
    ExfUnblockPushLock(&CmpWorkerEngineFinishedEvent, 0LL);
}
