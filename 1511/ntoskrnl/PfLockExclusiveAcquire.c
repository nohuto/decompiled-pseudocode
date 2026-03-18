/*
 * XREFs of PfLockExclusiveAcquire @ 0x1400FEFB4
 * Callers:
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     PfTSetTraceWorkerPriority @ 0x14011A384 (PfTSetTraceWorkerPriority.c)
 *     PfTAccessTracingCleanup @ 0x1403A57AC (PfTAccessTracingCleanup.c)
 *     PfTAccessTracingStart @ 0x1403A5E98 (PfTAccessTracingStart.c)
 *     PfTSetTracingPriority @ 0x1403B20F0 (PfTSetTracingPriority.c)
 *     PfpRpFileKeyUpdate @ 0x1403FACF0 (PfpRpFileKeyUpdate.c)
 *     PfpRpCHashDeleteEntries @ 0x1404AC980 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashGrow @ 0x1404BA288 (PfpRpCHashGrow.c)
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 *     PfpRpCHashAddEntries @ 0x1404D6068 (PfpRpCHashAddEntries.c)
 *     PfpPrefetchSharedCleanup @ 0x1404DCEB8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1404DCF90 (PfpPrefetchSharedStart.c)
 *     PfGenerateTrace @ 0x1404F7C3C (PfGenerateTrace.c)
 *     PfpRpCHashEmpty @ 0x14054D2A8 (PfpRpCHashEmpty.c)
 *     PfpRpShutdown @ 0x140631828 (PfpRpShutdown.c)
 *     PfpParametersPropagate @ 0x140631C58 (PfpParametersPropagate.c)
 *     PfpParametersWatcher @ 0x140631D64 (PfpParametersWatcher.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PfLockExclusiveAcquire(unsigned __int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(a1, result, (ULONG_PTR)a1);
  if ( v4 )
  {
    result = *(_QWORD *)(v4 + 32);
    *(_BYTE *)(v4 + 26) |= 1u;
  }
  return result;
}
