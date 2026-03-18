/*
 * XREFs of PopRunNormalIrpWorkers @ 0x140147E08
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x1403EC318 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall PopRunNormalIrpWorkers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int32 v7; // eax

  v4 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  qword_14032D5E8 = 0LL;
  dword_14032D610 = CurrentIrql;
  PopCreateIrpWorkerAllowed = 1;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
  if ( v7 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v7);
  __writecr8(CurrentIrql);
  KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
}
