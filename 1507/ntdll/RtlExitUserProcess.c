/*
 * XREFs of RtlExitUserProcess @ 0x180044550
 * Callers:
 *     RtlExitUserThread @ 0x180009FA0 (RtlExitUserThread.c)
 * Callees:
 *     RtlLockHeap @ 0x180027440 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x180033370 (RtlUnlockHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x180035978 (LdrpDrainWorkQueue.c)
 *     LdrpAcquireLoaderLock @ 0x180038358 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x180038398 (LdrpReleaseLoaderLock.c)
 *     LdrShutdownProcess @ 0x180044620 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x180044890 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180044A2C (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     EtwpShutdownPrivateLoggers @ 0x180075C24 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x180093BC0 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x180093E30 (NtTerminateThread.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  void *UniqueThread; // rdx
  __int64 v4; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockHeap((__int64)NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap((__int64)NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    LdrpReleaseLoaderLock(v4, 18, 0);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180145E58 = 0LL;
    qword_180145E50 = (__int64)UniqueThread;
    dword_180145E48 = -2;
    dword_180145E4C = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
