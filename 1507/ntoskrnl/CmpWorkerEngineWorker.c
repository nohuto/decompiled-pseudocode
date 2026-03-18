/*
 * XREFs of CmpWorkerEngineWorker @ 0x1404EDFFC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpWorkerEngineWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rax
  unsigned __int8 v11; // bl
  signed __int32 v12; // eax
  int v13; // ebx
  unsigned __int8 v14; // bl
  signed __int32 v15; // eax
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  while ( 1 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&CmpWorkerEngineLock, 0LL, 0LL, a4);
    v5 = v4;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpWorkerEngineLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpWorkerEngineLock, v4);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    qword_14034DC08 = (__int64)KeGetCurrentThread();
    v8 = CurrentIrql;
    v9 = CmpWorkerEngineListHead;
    dword_14034DC30 = v8;
    if ( CmpWorkerEngineListHead == &CmpWorkerEngineListHead )
      break;
    v10 = *(_QWORD *)CmpWorkerEngineListHead;
    if ( *((PVOID **)CmpWorkerEngineListHead + 1) != &CmpWorkerEngineListHead
      || *(PVOID *)(v10 + 8) != CmpWorkerEngineListHead )
    {
      __fastfail(3u);
    }
    CmpWorkerEngineListHead = *(PVOID *)CmpWorkerEngineListHead;
    *(_QWORD *)(v10 + 8) = &CmpWorkerEngineListHead;
    v9[1] = v9;
    *v9 = v9;
    qword_14034DC08 = 0LL;
    v11 = dword_14034DC30;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpWorkerEngineLock, 1, 0);
    if ( v12 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpWorkerEngineLock, v12);
    __writecr8(v11);
    KeAbPostRelease((ULONG_PTR)&CmpWorkerEngineLock);
    v13 = *((_DWORD *)v9 + 4);
    ((void (__fastcall *)(_QWORD))v9[3])(v9[4]);
    if ( !v13 )
      ExFreePoolWithTag(v9, 0);
  }
  qword_14034DC08 = 0LL;
  v14 = dword_14034DC30;
  CmpWorkerEngineWorkItemActive = 0;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpWorkerEngineLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpWorkerEngineLock, v15);
  __writecr8(v14);
  KeAbPostRelease((ULONG_PTR)&CmpWorkerEngineLock);
  _InterlockedOr(v16, 0);
  if ( CmpWorkerEngineFinishedEvent )
    ExfUnblockPushLock(&CmpWorkerEngineFinishedEvent, 0LL);
}
