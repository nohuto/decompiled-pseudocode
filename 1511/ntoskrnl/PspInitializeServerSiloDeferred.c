/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x140640594
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PspDereferenceMonitorServerSilo @ 0x140526688 (PspDereferenceMonitorServerSilo.c)
 *     PspGetNextMonitor @ 0x1406404F4 (PspGetNextMonitor.c)
 */

__int64 __fastcall PspInitializeServerSiloDeferred(__int64 a1)
{
  __int64 v2; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  __int64 i; // rcx
  __int64 (__fastcall *Count)(__int64); // rdx
  int v7; // edi
  struct _EX_RUNDOWN_REF *NextMonitor; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  struct _KTHREAD *v10; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 136LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PspSiloMonitorLock, v4, (ULONG_PTR)&PspSiloMonitorLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  for ( i = 0LL; ; i = (__int64)v9 )
  {
    NextMonitor = PspGetNextMonitor(i, 1);
    v9 = NextMonitor;
    if ( !NextMonitor )
    {
      v10 = KeGetCurrentThread();
      --v10->SpecialApcDisable;
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 1248), 1u);
      *(_DWORD *)(v2 + 112) = 1;
      ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      v7 = 0;
      goto LABEL_13;
    }
    Count = (__int64 (__fastcall *)(__int64))NextMonitor[5].Count;
    if ( (HIDWORD(NextMonitor[2].Ptr) & 1) != 0 && (HIDWORD(NextMonitor[2].Ptr) & 2) == 0 )
    {
      if ( Count )
      {
        _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v2 + 64) + 8LL * LODWORD(NextMonitor[13].Count)), 1u);
        v7 = Count(a1);
        if ( v7 < 0 )
          break;
      }
    }
  }
  PspDereferenceMonitorServerSilo(v9);
LABEL_13:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v7;
}
