/*
 * XREFs of PspPointerDereferenceMonitorServerSilo @ 0x140640858
 * Callers:
 *     PsUnregisterMonitorServerSilo @ 0x14063FD40 (PsUnregisterMonitorServerSilo.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall PspPointerDereferenceMonitorServerSilo(PVOID P)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rsi
  _QWORD *v6; // rcx
  PVOID *v7; // rax

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 6, 0xFFFFFFFF) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v3 = KeAbPreAcquire((ULONG_PTR)&PspSiloMonitorLock, 0LL, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&PspSiloMonitorLock, 0LL);
    v5 = v3;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&PspSiloMonitorLock, v3, (ULONG_PTR)&PspSiloMonitorLock);
    if ( v5 )
      *(_BYTE *)(v5 + 26) |= 1u;
    v6 = *(_QWORD **)P;
    v7 = (PVOID *)*((_QWORD *)P + 1);
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || *v7 != P )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    _bittestandreset((signed __int32 *)MonitorContextIndexBitmap.Buffer, *((_DWORD *)P + 26));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspSiloMonitorLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspSiloMonitorLock);
    KeAbPostRelease((ULONG_PTR)&PspSiloMonitorLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    *((_DWORD *)P + 4) = 0;
    ExFreePoolWithTag(P, 0x4D6C6953u);
  }
}
