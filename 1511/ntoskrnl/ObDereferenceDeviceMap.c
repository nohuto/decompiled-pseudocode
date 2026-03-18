/*
 * XREFs of ObDereferenceDeviceMap @ 0x1403E3C30
 * Callers:
 *     PspProcessDelete @ 0x1403E3968 (PspProcessDelete.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 */

void __fastcall ObDereferenceDeviceMap(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  void *v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  PsGetMonitorContextServerSilo(ObSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v10);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = (unsigned __int64 *)(v10 + 120);
  v4 = KeAbPreAcquire(v10 + 120, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = *(void **)(a1 + 1072);
  *(_QWORD *)(a1 + 1072) = 0LL;
  _m_prefetchw(v3);
  v7 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v7 - 16;
  else
    v8 = 0LL;
  if ( (v7 & 2) != 0 || (v9 = *v3, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8, v7)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  PsDereferenceMonitorContextServerSilo(v10);
  if ( v6 )
    ObfDereferenceDeviceMap(v6);
}
