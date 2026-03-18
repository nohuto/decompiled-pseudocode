/*
 * XREFs of WdipSemDisableScenario @ 0x140505648
 * Callers:
 *     WdipStartEndScenario @ 0x1405055E0 (WdipStartEndScenario.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1405048A0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140504988 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemMarkInstanceForDeletion @ 0x140505800 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x140505B4C (WdipSemGetLoggerIds.c)
 *     WdipSemActivateInstance @ 0x140505C38 (WdipSemActivateInstance.c)
 *     WdipSemDisableContextProviders @ 0x140505CF0 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x140506284 (WdipSemValidateEndEvent.c)
 *     WdipSemShutdown @ 0x14065C898 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14065CB80 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rbx
  _QWORD *v8; // rsi
  char v9; // r12
  __int64 v10; // rdi
  int LoggerIds; // edi
  __int64 v12; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  signed __int8 v18; // cf
  __int64 v19; // rsi
  ULONG_PTR v20; // rtt

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v8 = 0LL;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&WdipSemPushLock, v10, (ULONG_PTR)&WdipSemPushLock);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_23;
  }
  if ( !WdipSemEnabled )
    goto LABEL_22;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds < 0 )
  {
    v9 = 1;
    goto LABEL_12;
  }
  v12 = WdipSemMarkInstanceForDeletion(a3);
  v8 = (_QWORD *)v12;
  if ( !v12 )
  {
LABEL_22:
    LoggerIds = -1073741823;
    goto LABEL_23;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v12 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_23;
  WdipSemDisableContextProviders(v8, 0LL);
LABEL_12:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_END, (__int64)v8);
    WdipSemDeleteTransitionalInstance(v8);
    goto LABEL_16;
  }
LABEL_23:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
  if ( v8 )
    WdipSemActivateInstance(v8);
LABEL_16:
  _m_prefetchw(&WdipSemPushLock);
  v13 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v14 = WdipSemPushLock,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v13, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL);
    v18 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v19 = v17;
    if ( v18 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v17, (ULONG_PTR)&WdipSemPushLock);
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 2) != 0
      || (v20 = WdipSemPushLock,
          v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v4, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
