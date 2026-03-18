/*
 * XREFs of CmWorkerEngineQueueWorkItem @ 0x140556428
 * Callers:
 *     CmpDoQueueLateUnloadWorker @ 0x1404460B8 (CmpDoQueueLateUnloadWorker.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CmWorkerEngineQueueWorkItem(PVOID *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  PVOID **v9; // rax
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax

  v5 = 0;
  v6 = KeAbPreAcquire((ULONG_PTR)&CmpWorkerEngineLock, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpWorkerEngineLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpWorkerEngineLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14034DC08 = (__int64)KeGetCurrentThread();
  dword_14034DC30 = CurrentIrql;
  v9 = (PVOID **)qword_14034DC48;
  *a1 = &CmpWorkerEngineListHead;
  a1[1] = v9;
  if ( *v9 != &CmpWorkerEngineListHead )
    __fastfail(3u);
  *v9 = a1;
  qword_14034DC48 = (__int64)a1;
  if ( !CmpWorkerEngineWorkItemActive )
  {
    CmpWorkerEngineWorkItemActive = 1;
    v5 = 1;
  }
  qword_14034DC08 = 0LL;
  v10 = dword_14034DC30;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpWorkerEngineLock, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpWorkerEngineLock, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&CmpWorkerEngineLock);
  if ( v5 )
    ExQueueWorkItem(&CmpWorkerEngineWorkItem, DelayedWorkQueue);
}
