/*
 * XREFs of PpmIdleUsingStateSelection @ 0x1400ED2D0
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1400ED21C (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

bool __fastcall PpmIdleUsingStateSelection(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  _PPM_IDLE_STATES *IdleStates; // rcx
  bool v7; // bl
  signed __int64 v8; // rcx
  ULONG_PTR v9; // rtt
  struct _KTHREAD *v10; // rdx
  __int16 v11; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&PpmIdlePolicyLock, v5, &PpmIdlePolicyLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  IdleStates = KeGetCurrentPrcb()->PowerState.IdleStates;
  if ( IdleStates )
    v7 = IdleStates->InterfaceVersion == 1;
  else
    v7 = 0;
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v8 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v9 = PpmIdlePolicyLock,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v8, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11 )
  {
    v12 = &v10->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != v12 && !v10->SpecialApcDisable )
      KiCheckForKernelApcDelivery(v12);
  }
  return v7;
}
