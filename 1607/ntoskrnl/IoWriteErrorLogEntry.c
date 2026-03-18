/*
 * XREFs of IoWriteErrorLogEntry @ 0x1401310F8
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1401C4AD8 (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x14061DB78 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x14062200C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14062DA98 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406593A0 (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x140661520 (MiBadMemoryLogger.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  _QWORD *v5; // rbx
  bool v6; // zf
  void *v7; // rcx
  void *v8; // rcx

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v7 = (void *)*((_QWORD *)v1 + 3);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    v8 = (void *)*((_QWORD *)v1 + 4);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (_QWORD *)qword_140320988;
    v4 = v2;
    v5 = v1 + 8;
    if ( *(__int64 **)qword_140320988 != &IopErrorLogListHead )
      __fastfail(3u);
    v6 = IopErrorLogSessionPending == 0;
    *v5 = &IopErrorLogListHead;
    v5[1] = v3;
    *v3 = v5;
    qword_140320988 = (__int64)v5;
    if ( v6 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v4);
  }
}
