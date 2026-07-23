/*
 * XREFs of RtlExitUserProcess @ 0x180006E50
 * Callers:
 *     RtlExitUserThread @ 0x180052920 (RtlExitUserThread.c)
 * Callees:
 *     LdrShutdownProcess @ 0x180006F20 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180007300 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18000748C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     LdrpDrainWorkQueue @ 0x18000D60C (LdrpDrainWorkQueue.c)
 *     RtlLockHeap @ 0x180019AB0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180019E40 (RtlUnlockHeap.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     EtwpShutdownPrivateLoggers @ 0x180086034 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A6E80 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  void *UniqueThread; // rdx
  __int64 v3; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockSemaphore = 0LL;
    FastPebLock.OwningThread = UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&FastPebLock);
  LdrpReleaseLoaderLock(v3, 18LL);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
