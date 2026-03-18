/*
 * XREFs of ObIsDosDeviceLocallyMapped @ 0x140542750
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 */

__int64 __fastcall ObIsDosDeviceLocallyMapped(int a1, bool *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rdi
  signed __int64 v7; // rcx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rtt
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)(a1 - 1) > 0x19 )
    return 3221225485LL;
  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v11);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(v11 + 120);
  v6 = KeAbPreAcquire(v11 + 120, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, v6, (ULONG_PTR)v5);
  v7 = 0LL;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *a2 = *(_DWORD *)(v11 + 4LL * (unsigned int)(a1 - 1) + 12) != 0;
  _m_prefetchw(v5);
  v8 = *v5;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v7 = v8 - 16;
  if ( (v8 & 2) != 0 || (v9 = *v5, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v5, v7, v8)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  PsDereferenceMonitorContextServerSilo(v11);
  return 0LL;
}
