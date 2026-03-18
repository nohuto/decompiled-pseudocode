/*
 * XREFs of WdipSemEnableScenario @ 0x140505934
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
 *     WdipSemReserveInstanceTableEntry @ 0x1405046F8 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1405048A0 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x140504988 (WdipSemWriteSemActionsEvent.c)
 *     WdipSemQueryScenarioTable @ 0x140505AE8 (WdipSemQueryScenarioTable.c)
 *     WdipSemGetLoggerIds @ 0x140505B4C (WdipSemGetLoggerIds.c)
 *     WdipSemActivateInstance @ 0x140505C38 (WdipSemActivateInstance.c)
 *     WdipSemEnableContextProviders @ 0x140505ECC (WdipSemEnableContextProviders.c)
 *     WdipSemShutdown @ 0x14065C898 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14065CB80 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rbx
  __int64 *v8; // rsi
  char v9; // r12
  __int64 v10; // rdi
  int LoggerIds; // edi
  __int64 ScenarioTable; // rax
  __int64 *v13; // rax
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  signed __int8 v19; // cf
  __int64 v20; // rsi
  ULONG_PTR v21; // rtt

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
  if ( LoggerIds >= 0 )
  {
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v13 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3);
      v8 = v13;
      if ( v13 )
      {
        WdipSemEnableContextProviders(v13);
        goto LABEL_12;
      }
    }
LABEL_22:
    LoggerIds = -1073741823;
    goto LABEL_23;
  }
  v9 = 1;
LABEL_12:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START, (__int64)v8);
    WdipSemActivateInstance(v8);
    goto LABEL_16;
  }
LABEL_23:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, a3, LoggerIds);
  if ( v8 )
    WdipSemDeleteTransitionalInstance(v8);
LABEL_16:
  _m_prefetchw(&WdipSemPushLock);
  v14 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v14 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v15 = WdipSemPushLock,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v14, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v9 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL);
    v19 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v20 = v18;
    if ( v19 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v18, (ULONG_PTR)&WdipSemPushLock);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 2) != 0
      || (v21 = WdipSemPushLock,
          v21 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v4, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)LoggerIds;
}
