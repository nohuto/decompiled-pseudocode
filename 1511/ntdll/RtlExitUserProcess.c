/*
 * XREFs of RtlExitUserProcess @ 0x18005B0A0
 * Callers:
 *     RtlExitUserThread @ 0x18005C5F0 (RtlExitUserThread.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     RtlUnlockHeap @ 0x180023960 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x18002E860 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpDrainWorkQueue @ 0x18002F794 (LdrpDrainWorkQueue.c)
 *     LdrShutdownProcess @ 0x18005B1A0 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18005B560 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005B6FC (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     EtwpStopUmLogger @ 0x18005C7A8 (EtwpStopUmLogger.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1800A5640 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A5B20 (NtTerminateThread.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  __int64 v2; // rcx
  void *UniqueThread; // r8
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD v11[22]; // [rsp+20h] [rbp-C8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v11, 0, sizeof(v11));
    LODWORD(v11[0]) = 176;
    v4 = 0;
    v5 = 0LL;
    HIDWORD(v11[5]) = 0x20000;
    do
    {
      v6 = v4 & 0xFFFF7FFF;
      if ( (v4 & 0xFFFF7FFF) < 0x40 && EtwpLoggerArray )
      {
        _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
        v7 = *(_QWORD *)(EtwpLoggerArray + 16LL * v6);
        if ( (v7 & 1) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v6 + 8));
        }
        else
        {
          v8 = *(unsigned int *)(v7 + 332);
          v9 = 2LL * *(unsigned int *)(v7 + 20);
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v7 + 20) + 8));
          if ( (v8 & 0x400) == 0 )
          {
            v11[1] = v5;
            EtwpStopUmLogger(v9, v8, v7, v11);
          }
        }
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 0x40 );
  }
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0LL, ExitStatus) >= 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate(v2);
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
  LdrpReleaseLoaderLock(v10, 18, 0);
  NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ExitStatus);
}
