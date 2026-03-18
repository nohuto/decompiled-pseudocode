/*
 * XREFs of WdipSemUpdate @ 0x1406DEBD4
 * Callers:
 *     WdiUpdateSem @ 0x14025BE1C (WdiUpdateSem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemCleanStart @ 0x1405ADD3C (WdipSemCleanStart.c)
 *     WdipSemInitializeGlobalState @ 0x1405AF3A0 (WdipSemInitializeGlobalState.c)
 *     WdipSemShutdown @ 0x1406DF140 (WdipSemShutdown.c)
 */

__int64 __fastcall WdipSemUpdate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  if ( !WdipSemInitialized )
    WdipSemInitializeGlobalState();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&WdipSemPushLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&WdipSemPushLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&WdipSemPushLock, v5, (ULONG_PTR)&WdipSemPushLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  if ( WdipSemEnabled )
    WdipSemShutdown();
  v10 = WdipSemCleanStart();
  _m_prefetchw(&WdipSemPushLock);
  v11 = WdipSemPushLock - 16;
  if ( (WdipSemPushLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (WdipSemPushLock & 2) != 0
    || (v12 = WdipSemPushLock,
        v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&WdipSemPushLock, v11, WdipSemPushLock)) )
  {
    ExfReleasePushLock(&WdipSemPushLock, v9);
  }
  KeAbPostRelease((ULONG_PTR)&WdipSemPushLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}
