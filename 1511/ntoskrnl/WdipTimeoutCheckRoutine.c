/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1404B691C
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1404B6A44 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1404B6B3C (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1405048A0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x140505CF0 (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x14065D350 (WdipSemLogTimeoutInformation.c)
 */

BOOLEAN WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdi
  signed __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 TimedOutInstanceForDeletion; // rsi
  __int64 v5; // rdi
  ULONG_PTR v6; // rtt
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&WdipSemPushLock, v1, (ULONG_PTR)&WdipSemPushLock);
  v2 = 0LL;
  if ( v1 )
    *(_BYTE *)(v1 + 26) |= 1u;
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v3) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v3);
      v8 = TimedOutInstanceForDeletion;
      v9 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v10 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v11 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v9;
      WdipSemLogTimeoutInformation(v10, *(unsigned __int16 *)(v10 + 16), v11);
      WdipSemDeleteTransitionalInstance(v8);
    }
  }
  v5 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  _m_prefetchw(&WdipSemPushLock);
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 2) != 0
    || (v6 = WdipSemPushLock,
        v6 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v2, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return KeSetCoalescableTimer(&WdipTimeoutTimer, (LARGE_INTEGER)v5, 0, 0x3E8u, &WdipTimeoutDpc);
}
