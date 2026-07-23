/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x14007B208
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x14007AFF0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B0F0 (FsRtlInsertPerFileObjectContext.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfTSetTraceWorkerPriority @ 0x140114A84 (PfTSetTraceWorkerPriority.c)
 *     FsRtlInsertPerFileContext @ 0x1401B9F28 (FsRtlInsertPerFileContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1401B9FFC (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerFileContext @ 0x1401BA318 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1401BA4B4 (FsRtlRemovePerStreamContext.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1403DEDC4 (PfTSetTracingPriority.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E6240 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x1403E6B30 (PfpRpCHashAddEntries.c)
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EFB18 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404B31FC (FsRtlTeardownPerFileContexts.c)
 *     PfpPrefetchSharedStart @ 0x1404D7884 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1404D79B4 (PfpPrefetchSharedCleanup.c)
 *     PfpRpCHashGrow @ 0x14052BB4C (PfpRpCHashGrow.c)
 *     PfGenerateTrace @ 0x140530264 (PfGenerateTrace.c)
 *     PfpRpCHashEmpty @ 0x140577FD8 (PfpRpCHashEmpty.c)
 *     PfpRpShutdown @ 0x140669A8C (PfpRpShutdown.c)
 *     PfpParametersPropagate @ 0x140669EB0 (PfpParametersPropagate.c)
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall FsRtlAcquirePushLockExclusive(volatile signed __int32 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  v4 = result;
  if ( _interlockedbittestandset64(a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, a1);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
