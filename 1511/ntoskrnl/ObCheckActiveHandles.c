/*
 * XREFs of ObCheckActiveHandles @ 0x1404B5A18
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rtt

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (unsigned __int64 *)(a1 - 32);
  v4 = KeAbPreAcquire(a1 - 32, 0LL, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = *(_QWORD *)(a1 - 40);
  _m_prefetchw(v3);
  v7 = *v3;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v8 = v7 - 16;
  else
    v8 = 0LL;
  if ( (v7 & 2) != 0 || (v9 = *v3, v9 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8, v7)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v6 != 0;
}
