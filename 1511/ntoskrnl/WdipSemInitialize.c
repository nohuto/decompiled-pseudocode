/*
 * XREFs of WdipSemInitialize @ 0x14053279C
 * Callers:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemCleanStart @ 0x140532858 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1405340C4 (WdipSemInitializeGlobalState.c)
 */

__int64 WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  signed __int64 v4; // rbx
  ULONG_PTR v5; // rtt

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v1, (ULONG_PTR)&WdipSemPushLock);
  v4 = 0LL;
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  WdipSemCleanStart();
  _m_prefetchw(&WdipSemPushLock);
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v4 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 2) != 0
    || (v5 = WdipSemPushLock,
        v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v4, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
