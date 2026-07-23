/*
 * XREFs of PspExitProcess @ 0x14045F434
 * Callers:
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 * Callees:
 *     PfpLogApplicationEvent @ 0x140006674 (PfpLogApplicationEvent.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExCleanTimerResolutionRequest @ 0x1400A31D0 (ExCleanTimerResolutionRequest.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     DbgkpDereferenceErrorPort @ 0x1401B7488 (DbgkpDereferenceErrorPort.c)
 *     PfSnEndProcessTrace @ 0x1403EA4F4 (PfSnEndProcessTrace.c)
 *     PspCallProcessNotifyRoutines @ 0x140427CF4 (PspCallProcessNotifyRoutines.c)
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 *     DbgkpRemoveErrorPort @ 0x14061A2C4 (DbgkpRemoveErrorPort.c)
 */

void __fastcall PspExitProcess(char a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v5; // rcx
  struct _KTHREAD *v6; // rbp
  volatile signed __int32 *v7; // rdi
  __int64 v8; // rsi

  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 4u);
  CurrentThread = KeGetCurrentThread();
  if ( a1 )
  {
    PsSetProcessTelemetryAppState(a2);
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(a2, 770);
    if ( (*(_DWORD *)(a2 + 1740) & 1) == 0 || *(_QWORD *)(a2 + 1808) )
    {
      --CurrentThread->KernelApcDisable;
      PspCallProcessNotifyRoutines((_QWORD *)a2, 0LL, 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  v5 = *(void **)(a2 + 1120);
  if ( !v5 )
    goto LABEL_7;
  if ( v5 != (void *)1 )
  {
    ObfDereferenceObject(v5);
LABEL_7:
    *(_QWORD *)(a2 + 1120) = 1LL;
  }
  if ( a1 )
  {
    if ( *(int *)(a2 + 772) < 0 )
      ExCleanTimerResolutionRequest((__int64)v5);
    if ( (PVOID)a2 == DbgkpErrorProcess )
    {
      v6 = KeGetCurrentThread();
      v7 = 0LL;
      --v6->KernelApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(&DbgkpErrorPortLock, v8, (ULONG_PTR)&DbgkpErrorPortLock);
      if ( v8 )
        *(_BYTE *)(v8 + 26) |= 1u;
      if ( (PVOID)a2 == DbgkpErrorProcess )
      {
        v7 = (volatile signed __int32 *)DbgkpErrorPort;
        _InterlockedAdd((volatile signed __int32 *)DbgkpErrorPort, 1u);
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&DbgkpErrorPortLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&DbgkpErrorPortLock);
      KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
      KeLeaveCriticalRegionThread((__int64)v6);
      if ( v7 )
      {
        DbgkpRemoveErrorPort(v6, v7);
        DbgkpDereferenceErrorPort(v7);
      }
    }
    PfpLogApplicationEvent(a2, 0LL, 1);
    if ( PfSnNumActiveTraces )
      PfSnEndProcessTrace(a2, 2, 0LL);
  }
}
