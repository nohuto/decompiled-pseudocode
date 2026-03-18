/*
 * XREFs of WdipSemDisableScenario @ 0x140551F04
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
 *     WdipSemMarkInstanceForDeletion @ 0x1405520E0 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x140552228 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x140552314 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x14055241C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemDisableContextProviders @ 0x140552FBC (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x140553248 (WdipSemValidateEndEvent.c)
 *     WdipSemActivateInstance @ 0x14056BDC8 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x1406DF140 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x1406DF428 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  char v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r9
  int LoggerIds; // ebx
  __int64 v13; // rax
  __int64 v14; // rdx
  signed __int64 v15; // rcx
  ULONG_PTR v16; // rtt
  __int64 v17; // r9
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  struct _KTHREAD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r9
  signed __int8 v25; // cf
  __int64 v26; // rdi
  signed __int64 v27; // rcx
  ULONG_PTR v28; // rtt
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax

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
  if ( LoggerIds < 0 )
  {
    v9 = 1;
    goto LABEL_12;
  }
  v13 = WdipSemMarkInstanceForDeletion(a3);
  v8 = v13;
  if ( !v13 )
  {
LABEL_24:
    LoggerIds = -1073741823;
    goto LABEL_25;
  }
  LoggerIds = WdipSemValidateEndEvent(a1, a2, *(_QWORD *)(v13 + 32));
  if ( LoggerIds < 0 )
    goto LABEL_25;
  WdipSemDisableContextProviders(v8, 0LL);
LABEL_12:
  if ( LoggerIds >= 0 )
  {
    if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END) )
      WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v8);
    WdipSemDeleteTransitionalInstance(v8);
    goto LABEL_16;
  }
LABEL_25:
  if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_SCENARIO_END_FAILED) )
    WdipSemWriteSemFailureEvent((unsigned int)&WDI_SEM_EVENT_SCENARIO_END_FAILED, a1, a2, a3, LoggerIds);
  if ( v8 )
    WdipSemActivateInstance(v8);
LABEL_16:
  _m_prefetchw(&WdipSemPushLock);
  v15 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v15 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v16 = WdipSemPushLock,
        v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v15, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock, v14);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v9 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL, v17);
    v25 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v26 = v22;
    if ( v25 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v22, (ULONG_PTR)&WdipSemPushLock, v24);
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    v27 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v27 = 0LL;
    if ( (WdipSemPushLock & 2) != 0
      || (v28 = WdipSemPushLock,
          v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v27, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock, v23);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)LoggerIds;
}
