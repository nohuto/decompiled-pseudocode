/*
 * XREFs of WdipSemInitialize @ 0x1405ADC60
 * Callers:
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemCleanStart @ 0x1405ADD3C (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1405AF3A0 (WdipSemInitializeGlobalState.c)
 */

void WdipSemInitialize()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // r9
  __int64 v2; // rax
  __int64 v3; // r9
  signed __int8 v4; // cf
  __int64 v5; // rbx
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  ULONG_PTR v8; // rtt
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax

  WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL, v1);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v5 = v2;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v2, (ULONG_PTR)&WdipSemPushLock, v3);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  WdipSemCleanStart();
  _m_prefetchw(&WdipSemPushLock);
  v7 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v7 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v8 = WdipSemPushLock,
        v8 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v7, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock, v6);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v9->ApcState.ApcListHead[0].Flink != &v9->152
    && !v9->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
