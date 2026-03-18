/*
 * XREFs of PspNotifyServerSiloTermination @ 0x1406406EC
 * Callers:
 *     PspCompleteServerSiloShutdownDeferred @ 0x14063FEE0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x140640348 (PspDeleteSilo.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     PsDeleteMonitorContextServerSilo @ 0x1401F57A8 (PsDeleteMonitorContextServerSilo.c)
 *     PspGetNextMonitor @ 0x1406404F4 (PspGetNextMonitor.c)
 */

__int64 __fastcall PspNotifyServerSiloTermination(_QWORD *a1, int a2)
{
  __int64 v4; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  struct _EX_RUNDOWN_REF *NextMonitor; // rbx
  __int64 Count_low; // rdi
  __int64 v9; // rsi
  int MonitorContextServerSilo; // r14d
  void (__fastcall *Count)(_QWORD *, __int64); // rax
  __int64 v12; // rdi
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1[156] + 136LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PspSiloMonitorLock, v6, (ULONG_PTR)&PspSiloMonitorLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  NextMonitor = PspGetNextMonitor(0LL, 0);
  if ( NextMonitor )
  {
    while ( 1 )
    {
      if ( (HIDWORD(NextMonitor[2].Ptr) & 1) != 0 )
      {
        Count_low = LODWORD(NextMonitor[13].Count);
        v9 = *(_QWORD *)(v4 + 64);
        MonitorContextServerSilo = PsGetMonitorContextServerSilo((__int64)NextMonitor, a1, &v14);
        if ( a2 )
          goto LABEL_11;
        _m_prefetchw((const void *)(v9 + 8 * Count_low));
        if ( (_InterlockedOr((volatile signed __int32 *)(v9 + 8 * Count_low), 2u) & 2) == 0 )
          break;
      }
LABEL_16:
      NextMonitor = PspGetNextMonitor((__int64)NextMonitor, 0);
      if ( !NextMonitor )
        goto LABEL_17;
    }
    Count = (void (__fastcall *)(_QWORD *, __int64))NextMonitor[6].Count;
    if ( Count )
    {
      v12 = v14;
      Count(a1, v14);
    }
    else
    {
LABEL_11:
      v12 = v14;
    }
    if ( MonitorContextServerSilo >= 0 )
    {
      if ( a2 == 1 )
        PsDeleteMonitorContextServerSilo(a1, v12);
      PsDereferenceMonitorContextServerSilo(v12);
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
