/*
 * XREFs of WdipSemEnableScenario @ 0x140581A0C
 * Callers:
 *     WdipStartEndScenario @ 0x140551E9C (WdipStartEndScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemGetLoggerIds @ 0x140552228 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140552314 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14055241C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemEnableContextProviders @ 0x14056B0A0 (WdipSemEnableContextProviders.c)
 *     WdipSemReserveInstanceTableEntry @ 0x14056BBB0 (WdipSemReserveInstanceTableEntry.c)
 *     WdipSemActivateInstance @ 0x14056BDC8 (WdipSemActivateInstance.c)
 *     WdipSemQueryScenarioTable @ 0x140581BE4 (WdipSemQueryScenarioTable.c)
 *     WdipSemShutdown @ 0x1406DF140 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1406DF428 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemEnableScenario(__int64 a1, unsigned __int16 a2, _QWORD *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rdi
  char v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r9
  int LoggerIds; // ebx
  __int64 ScenarioTable; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  __int64 v23; // r9
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int64 v27; // r8
  __int64 v28; // r9
  struct _KTHREAD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  signed __int8 v33; // cf
  __int64 v34; // rdi
  signed __int64 v35; // rcx
  ULONG_PTR v36; // rtt
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v9 = 0;
  --CurrentThread->KernelApcDisable;
  v10 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&WdipSemPushLock, v10, (ULONG_PTR)&WdipSemPushLock, v11);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !a1 || !a3 )
  {
    LoggerIds = -1073741811;
    goto LABEL_25;
  }
  if ( !WdipSemEnabled )
    goto LABEL_24;
  LoggerIds = WdipSemGetLoggerIds();
  if ( LoggerIds >= 0 )
  {
    ScenarioTable = WdipSemQueryScenarioTable(a1, a2);
    if ( ScenarioTable )
    {
      v16 = WdipSemReserveInstanceTableEntry(ScenarioTable, a3, v14, v15);
      v8 = v16;
      if ( v16 )
      {
        WdipSemEnableContextProviders((__int64)v16);
        goto LABEL_12;
      }
    }
LABEL_24:
    LoggerIds = -1073741823;
    goto LABEL_25;
  }
  v9 = 1;
LABEL_12:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START) )
      WdipSemWriteSemActionsEvent((__int64)&WDI_SEM_EVENT_SCENARIO_START, (__int64)v8);
    WdipSemActivateInstance((__int64)v8, v17, v18, v19);
    goto LABEL_16;
  }
LABEL_25:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_START_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_START_FAILED, a1, a2, (_DWORD)a3, LoggerIds);
  if ( v8 )
    WdipSemDeleteTransitionalInstance(v8, v20, v27, v28);
LABEL_16:
  _m_prefetchw(&WdipSemPushLock);
  v21 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v22 = WdipSemPushLock,
        v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v21, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock, v20);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v9 )
  {
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL, v23);
    v33 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v34 = v30;
    if ( v33 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v30, (ULONG_PTR)&WdipSemPushLock, v32);
    if ( v34 )
      *(_BYTE *)(v34 + 26) |= 1u;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    v35 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v35 = 0LL;
    if ( (WdipSemPushLock & 2) != 0
      || (v36 = WdipSemPushLock,
          v36 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v35, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock, v31);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    v37 = KeGetCurrentThread();
    v38 = v37->KernelApcDisable + 1;
    v37->KernelApcDisable = v38;
    if ( !v38
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
      && !v37->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)LoggerIds;
}
