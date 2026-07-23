/*
 * XREFs of WdipSemEnableScenario @ 0x140541D18
 * Callers:
 *     WdipStartEndScenario @ 0x1404C69F4 (WdipStartEndScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     WdipSemGetLoggerIds @ 0x1404C6D48 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1404C6E44 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1404C6F2C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemQueryScenarioTable @ 0x140541ECC (WdipSemQueryScenarioTable.c)
 *     WdipSemActivateInstance @ 0x140541F30 (WdipSemActivateInstance.c)
 *     WdipSemEnableContextProviders @ 0x140541FE8 (WdipSemEnableContextProviders.c)
 *     WdipSemReserveInstanceTableEntry @ 0x1405421B4 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemShutdown @ 0x14069BA74 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14069C448 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rbx
  _QWORD *v8; // rsi
  char v9; // r12
  __int64 v10; // rdi
  int LoggerIds; // edi
  __int64 ScenarioTable; // rax
  __int64 v13; // rax
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v20; // rax
  _BYTE *v21; // rax
  signed __int8 v22; // cf
  _BYTE *v23; // rsi
  ULONG_PTR v24; // rtt
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v8 = 0LL;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0);
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
      v8 = (_QWORD *)v13;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  if ( v9 )
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0);
    v22 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v23 = v21;
    if ( v22 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v21, (ULONG_PTR)&WdipSemPushLock);
    if ( v23 )
      v23[26] |= 1u;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 2) != 0
      || (v24 = WdipSemPushLock,
          v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v4, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v25, v26, v27);
  }
  return (unsigned int)LoggerIds;
}
