/*
 * XREFs of IoWriteErrorLogEntry @ 0x1401595B8
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1401F2104 (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x14066C660 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x14067211C (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x14067E508 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x1406A0D4C (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x1406A8608 (MiBadMemoryLogger.c)
 *     VerifierIoWriteErrorLogEntry @ 0x140739D80 (VerifierIoWriteErrorLogEntry.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 **v3; // rax
  __int64 *v4; // rbx
  bool v5; // zf
  void *v6; // rcx
  void *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v6 = (void *)*((_QWORD *)v1 + 3);
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    v7 = (void *)*((_QWORD *)v1 + 4);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x746C6644u);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&IopErrorLogLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&IopErrorLogLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&IopErrorLogLock);
    }
    v3 = (__int64 **)qword_14034B8B8;
    v4 = (__int64 *)(v1 + 8);
    v4[1] = qword_14034B8B8;
    *v4 = (__int64)&IopErrorLogListHead;
    if ( *v3 != &IopErrorLogListHead )
      __fastfail(3u);
    v5 = IopErrorLogSessionPending == 0;
    *v3 = v4;
    qword_14034B8B8 = (__int64)v4;
    if ( v5 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&IopErrorLogLock, retaddr);
    else
      _InterlockedAnd64(&IopErrorLogLock, 0LL);
    __writecr8(CurrentIrql);
  }
}
