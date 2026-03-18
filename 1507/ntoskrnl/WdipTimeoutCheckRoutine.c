/*
 * XREFs of WdipTimeoutCheckRoutine @ 0x14054CD10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14054CE58 (WdipSemMarkNextTimedOutInstanceForDeletion.c)
 *     WdipSemSqmLogInflightLimitExceededDataPoints @ 0x14054CF68 (WdipSemSqmLogInflightLimitExceededDataPoints.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140552314 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemDisableContextProviders @ 0x140552FBC (WdipSemDisableContextProviders.c)
 *     WdipSemLogTimeoutInformation @ 0x1406DFBF8 (WdipSemLogTimeoutInformation.c)
 */

BOOLEAN __fastcall WdipTimeoutCheckRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 TimedOutInstanceForDeletion; // rdi
  __int64 v9; // rbx
  signed __int64 v10; // rcx
  ULONG_PTR v11; // rtt
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&WdipSemPushLock, v5, (ULONG_PTR)&WdipSemPushLock, v6);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  WdipSemSqmLogInflightLimitExceededDataPoints();
  if ( WdipSemTimeoutEnabled )
  {
    TimedOutInstanceForDeletion = WdipSemMarkNextTimedOutInstanceForDeletion(&WdipSemEnabledInstanceTable);
    while ( TimedOutInstanceForDeletion )
    {
      LOBYTE(v7) = 1;
      WdipSemDisableContextProviders(TimedOutInstanceForDeletion, v7);
      v15 = TimedOutInstanceForDeletion;
      v16 = WdipSemMarkNextTimedOutInstanceForDeletion(TimedOutInstanceForDeletion);
      v17 = *(_QWORD *)(TimedOutInstanceForDeletion + 32);
      v18 = TimedOutInstanceForDeletion + 16;
      TimedOutInstanceForDeletion = v16;
      WdipSemLogTimeoutInformation(v17, *(unsigned __int16 *)(v17 + 16), v18);
      WdipSemDeleteTransitionalInstance(v15);
    }
  }
  v9 = WdipSemOneSecond * (WdipSemTimeoutValue / 0xAu);
  _m_prefetchw(&WdipSemPushLock);
  v10 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v10 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v11 = WdipSemPushLock,
        v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v10, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock, WdipSemTimeoutValue / 0xAu);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return KeSetCoalescableTimer(&WdipTimeoutTimer, (LARGE_INTEGER)v9, 0, 0x3E8u, &WdipTimeoutDpc);
}
