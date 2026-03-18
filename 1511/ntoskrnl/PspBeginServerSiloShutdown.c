/*
 * XREFs of PspBeginServerSiloShutdown @ 0x14063FDC0
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x1404BD074 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetServerSiloGlobals @ 0x140102754 (PsGetServerSiloGlobals.c)
 */

char __fastcall PspBeginServerSiloShutdown(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  char v6; // di
  struct _KTHREAD *v7; // rax
  _DWORD *ServerSiloGlobals; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PspSiloMonitorLock, v5, (ULONG_PTR)&PspSiloMonitorLock);
  v6 = 1;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = KeGetCurrentThread();
  --v7->SpecialApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 1248), 1u);
  if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 1248) + 136LL) + 112LL) < 3 )
  {
    ServerSiloGlobals = PsGetServerSiloGlobals((_QWORD *)a1);
    ServerSiloGlobals[28] = 3;
    ServerSiloGlobals[29] = a2;
  }
  else
  {
    v6 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 1248));
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspSiloMonitorLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspSiloMonitorLock);
  KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6;
}
