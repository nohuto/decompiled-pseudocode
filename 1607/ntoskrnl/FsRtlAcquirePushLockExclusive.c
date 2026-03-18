/*
 * XREFs of FsRtlAcquirePushLockExclusive @ 0x14007B188
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x14007AF70 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B070 (FsRtlInsertPerFileObjectContext.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfTSetTraceWorkerPriority @ 0x140114514 (PfTSetTraceWorkerPriority.c)
 *     FsRtlInsertPerFileContext @ 0x1401BA044 (FsRtlInsertPerFileContext.c)
 *     FsRtlInsertPerStreamContext @ 0x1401BA118 (FsRtlInsertPerStreamContext.c)
 *     FsRtlRemovePerFileContext @ 0x1401BA434 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x1401BA5D0 (FsRtlRemovePerStreamContext.c)
 *     PfTAccessTracingCleanup @ 0x1403C82C0 (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403C83DC (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1403DEDC4 (PfTSetTracingPriority.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E4C14 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashAddEntries @ 0x1403E5504 (PfpRpCHashAddEntries.c)
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EE4E8 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404CDF9C (FsRtlTeardownPerFileContexts.c)
 *     PfpPrefetchSharedStart @ 0x1404F48F8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1404F4A28 (PfpPrefetchSharedCleanup.c)
 *     PfpRpCHashGrow @ 0x14052AEFC (PfpRpCHashGrow.c)
 *     PfGenerateTrace @ 0x14052FD24 (PfGenerateTrace.c)
 *     PfpRpCHashEmpty @ 0x140577A98 (PfpRpCHashEmpty.c)
 *     PfpRpShutdown @ 0x1406699A8 (PfpRpShutdown.c)
 *     PfpParametersPropagate @ 0x140669DCC (PfpParametersPropagate.c)
 *     PfpParametersWatcher @ 0x140669ED4 (PfpParametersWatcher.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
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
