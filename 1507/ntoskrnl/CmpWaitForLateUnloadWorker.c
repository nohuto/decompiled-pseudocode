/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x1400D2A20
 * Callers:
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CmpWaitForLateUnloadWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v6; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    v4 = KeAbPreAcquire((ULONG_PTR)&CmpWorkerEngineLock, 0LL, 0LL, a4);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpWorkerEngineLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CmpWorkerEngineLock);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    dword_14034DC30 = CurrentIrql;
    qword_14034DC08 = 0LL;
    v7 = CmpWorkerEngineWorkItemActive;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpWorkerEngineLock, 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended(&CmpWorkerEngineLock, v6);
    __writecr8(CurrentIrql);
    KeAbPostRelease((ULONG_PTR)&CmpWorkerEngineLock);
    if ( !v7 )
      break;
    ExBlockOnAddressPushLock(
      (unsigned int)&CmpWorkerEngineFinishedEvent,
      (unsigned int)&CmpWorkerEngineWorkItemActive,
      (unsigned int)&v7,
      1,
      0LL);
  }
}
