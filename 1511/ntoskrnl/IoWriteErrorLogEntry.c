/*
 * XREFs of IoWriteErrorLogEntry @ 0x1401262CC
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1401B6F8C (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x1405F3820 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x1405F8184 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14060369C (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14062AA40 (MiBadMemoryLogger.c)
 *     VerifierIoWriteErrorLogEntry @ 0x1406B974C (VerifierIoWriteErrorLogEntry.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  KIRQL v2; // al
  __int64 **v3; // rcx
  __int64 *v4; // rbx
  KIRQL v5; // di
  bool v6; // zf
  void *v7; // rcx
  void *v8; // rcx

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v7 = (void *)*((_QWORD *)v1 + 3);
    if ( v7 )
      ObfDereferenceObject(v7);
    v8 = (void *)*((_QWORD *)v1 + 4);
    if ( v8 )
      ObfDereferenceObject(v8);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (__int64 **)qword_1402FB438;
    v4 = (__int64 *)(v1 + 8);
    v5 = v2;
    *v4 = (__int64)&IopErrorLogListHead;
    v4[1] = (__int64)v3;
    if ( *v3 != &IopErrorLogListHead )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v3 = v4;
    qword_1402FB438 = (__int64)v4;
    if ( v6 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v5);
  }
}
