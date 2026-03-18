/*
 * XREFs of WdipSemUpdate @ 0x14065C388
 * Callers:
 *     WdiUpdateSem @ 0x14020CB58 (WdiUpdateSem.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1405340C4 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14065C898 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  signed __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rax
  signed __int8 v3; // cf
  __int64 v4; // rdi
  unsigned int v5; // edi
  ULONG_PTR v6; // rtt

  v0 = 0LL;
  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v2, (ULONG_PTR)&WdipSemPushLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v5 = WdipSemCleanStart();
  _m_prefetchw(&WdipSemPushLock);
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v0 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 2) != 0
    || (v6 = WdipSemPushLock,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v0, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v5;
}
