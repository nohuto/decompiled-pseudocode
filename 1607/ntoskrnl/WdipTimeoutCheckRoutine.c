/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x1404FF634
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1404C6E44 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x1404C79F0 (WdipSemDisableContextProviders.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1404FF750 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x1404FF848 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemLogTimeoutInformation @ 0x14069C16C (WdipSemLogTimeoutInformation.c)
 */

_BOOL8 WdipTimeoutCheckRoutine()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdi
  signed __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 TimedOutInstanceForDeletion; // rsi
  __int64 v5; // rdi
  ULONG_PTR v6; // rtt
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0);
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
      v11 = (_QWORD *)TimedOutInstanceForDeletion;
      v12 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v13 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v14 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v12;
      WdipSemLogTimeoutInformation(v13, *(unsigned __int16 *)(v13 + 16), v14);
      WdipSemDeleteTransitionalInstance(v11);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return ExSetTimer(WdipTimeoutTimer, v5, 0LL, (__int64)&WdipTimeoutTimerParameters);
}
