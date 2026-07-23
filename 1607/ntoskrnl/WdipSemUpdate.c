/*
 * XREFs of WdipSemUpdate @ 0x14069B934
 * Callers:
 *     WdiUpdateSem @ 0x1402244F4 (WdiUpdateSem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     WdipSemCleanStart @ 0x140564CD0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14056654C (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x14069BA74 (WdipSemShutdown.c)
 */

__int64 WdipSemUpdate()
{
  signed __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v2; // rax
  signed __int8 v3; // cf
  _BYTE *v4; // rdi
  unsigned int v5; // edi
  ULONG_PTR v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v0 = 0LL;
  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v4 = v2;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v2, (ULONG_PTR)&WdipSemPushLock);
  if ( v4 )
    v4[26] |= 1u;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return v5;
}
