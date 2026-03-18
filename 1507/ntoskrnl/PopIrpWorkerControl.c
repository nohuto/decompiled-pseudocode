/*
 * XREFs of PopIrpWorkerControl @ 0x14016ECA8
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopCreateDynamicIrpWorker @ 0x140159898 (PopCreateDynamicIrpWorker.c)
 */

void __noreturn PopIrpWorkerControl()
{
  char v0; // di
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v5; // bl
  signed __int32 v6; // eax

  while ( 1 )
  {
    v0 = 0;
    KeWaitForSingleObject(&PopIrpWorkerControlEvent, Executive, 0, 0, 0LL);
    v2 = KeAbPreAcquire((ULONG_PTR)&PopIrpWorkerMutex, 0LL, 0LL, v1);
    v3 = v2;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopIrpWorkerMutex, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopIrpWorkerMutex, v2);
    if ( v3 )
      *(_BYTE *)(v3 + 26) |= 1u;
    dword_14032D610 = CurrentIrql;
    PopIrpWorkerRequested = 0;
    if ( PopCreateIrpWorkerAllowed )
    {
      ++PopIrpWorkerPendingCount;
      v0 = 1;
    }
    qword_14032D5E8 = 0LL;
    v5 = dword_14032D610;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)&PopIrpWorkerMutex, 1, 0);
    if ( v6 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopIrpWorkerMutex, v6);
    __writecr8(v5);
    KeAbPostRelease((ULONG_PTR)&PopIrpWorkerMutex);
    if ( v0 )
      PopCreateDynamicIrpWorker(0LL);
  }
}
