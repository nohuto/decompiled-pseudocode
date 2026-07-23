/*
 * XREFs of WdipSemDisableScenario @ 0x1404C6A5C
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
 *     WdipSemMarkInstanceForDeletion @ 0x1404C6C14 (WdipSemMarkInstanceForDeletion.c)
 *     WdipSemGetLoggerIds @ 0x1404C6D48 (WdipSemGetLoggerIds.c)
 *     WdipSemDeleteTransitionalInstance @ 0x1404C6E44 (WdipSemDeleteTransitionalInstance.c)
 *     WdipSemWriteSemActionsEvent @ 0x1404C6F2C (WdipSemWriteSemActionsEvent.c)
 *     WdipSemDisableContextProviders @ 0x1404C79F0 (WdipSemDisableContextProviders.c)
 *     WdipSemValidateEndEvent @ 0x1404C7C80 (WdipSemValidateEndEvent.c)
 *     WdipSemActivateInstance @ 0x140541F30 (WdipSemActivateInstance.c)
 *     WdipSemShutdown @ 0x14069BA74 (WdipSemShutdown.c)
 *     WdipSemWriteSemFailureEvent @ 0x14069C448 (WdipSemWriteSemFailureEvent.c)
 */

__int64 __fastcall WdipSemDisableScenario(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v4; // rbx
  __int64 v8; // rsi
  char v9; // r12
  __int64 v10; // rdi
  int LoggerIds; // edi
  __int64 v12; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v19; // rax
  _BYTE *v20; // rax
  signed __int8 v21; // cf
  _BYTE *v22; // rsi
  ULONG_PTR v23; // rtt
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9

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
  if ( LoggerIds < 0 )
  {
    v9 = 1;
    goto LABEL_12;
  }
  v12 = WdipSemMarkInstanceForDeletion(a3);
  v8 = v12;
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
      WdipSemWriteSemActionsEvent(&WDI_SEM_EVENT_SCENARIO_END, v8);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  if ( v9 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0);
    v21 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
    v22 = v20;
    if ( v21 )
      ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v20, (ULONG_PTR)&WdipSemPushLock);
    if ( v22 )
      v22[26] |= 1u;
    if ( WdipSemEnabled )
      WdipSemShutdown();
    _m_prefetchw(&WdipSemPushLock);
    if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v4 = WdipSemPushLock - 16;
    if ( (WdipSemPushLock & 2) != 0
      || (v23 = WdipSemPushLock,
          v23 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v4, WdipSemPushLock)) )
    {
      ExfReleasePushLock(&WdipSemPushLock);
    }
    KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v24, v25, v26);
  }
  return (unsigned int)LoggerIds;
}
