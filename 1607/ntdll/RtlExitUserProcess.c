/*
 * XREFs of RtlExitUserProcess @ 0x180006E60
 * Callers:
 *     RtlExitUserThread @ 0x180052930 (RtlExitUserThread.c)
 * Callees:
 *     LdrShutdownProcess @ 0x180006F30 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180007310 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18000749C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     LdrpDrainWorkQueue @ 0x18000D61C (LdrpDrainWorkQueue.c)
 *     RtlLockHeap @ 0x180019AC0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x180019E50 (RtlUnlockHeap.c)
 *     LdrpAcquireLoaderLock @ 0x18002D51C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     EtwpShutdownPrivateLoggers @ 0x180086044 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x1800A69A0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A6E80 (NtTerminateThread.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  void *UniqueThread; // rdx
  __int64 v4; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection(&FastPebLock);
    LdrpReleaseLoaderLock(v4, 18LL);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180151EF8 = 0LL;
    qword_180151EF0 = (__int64)UniqueThread;
    dword_180151EE8 = -2;
    dword_180151EEC = 1;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
