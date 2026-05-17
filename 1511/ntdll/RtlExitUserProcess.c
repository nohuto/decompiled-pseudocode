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

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  __int64 v2; // rcx
  void *UniqueThread; // r8
  __int64 v4; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v13[22]; // [rsp+20h] [rbp-C8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v13, 0, sizeof(v13));
    LODWORD(v13[0]) = 176;
    v6 = 0;
    v7 = 0LL;
    HIDWORD(v13[5]) = 0x20000;
    do
    {
      v8 = v6 & 0xFFFF7FFF;
      if ( (v6 & 0xFFFF7FFF) < 0x40 && EtwpLoggerArray )
      {
        _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v8 + 8));
        v9 = *(_QWORD *)(EtwpLoggerArray + 16LL * v8);
        if ( (v9 & 1) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * v8 + 8));
        }
        else
        {
          v10 = *(unsigned int *)(v9 + 332);
          v11 = 2LL * *(unsigned int *)(v9 + 20);
          _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 16LL * *(unsigned int *)(v9 + 20) + 8));
          if ( (v10 & 0x400) == 0 )
          {
            v13[1] = v7;
            EtwpStopUmLogger(v11, v10, v9, v13);
          }
        }
      }
      ++v6;
      ++v7;
    }
    while ( v6 < 0x40 );
  }
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags & 0x1000) != 0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockHeap((__int64)NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap((__int64)NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    LdrpReleaseLoaderLock(v12, 18, 0);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate(v2);
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_180144E98 = 0LL;
    qword_180144E90 = (__int64)UniqueThread;
    dword_180144E88 = -2;
    dword_180144E8C = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess(v4);
    return ZwTerminateProcess(-1LL, a1);
  }
}
