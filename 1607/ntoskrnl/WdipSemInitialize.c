/*
 * XREFs of WdipSemInitialize @ 0x140564C14
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     WdipSemCleanStart @ 0x140564CD0 (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x14056654C (WdipSemInitializeGlobalState.c)
 */

__int64 WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  signed __int64 v4; // rbx
  ULONG_PTR v5; // rtt
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v1, (ULONG_PTR)&WdipSemPushLock);
  v4 = 0LL;
  if ( v3 )
    v3[26] |= 1u;
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
}
