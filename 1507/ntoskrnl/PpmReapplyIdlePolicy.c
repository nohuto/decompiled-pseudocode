/*
 * XREFs of PpmReapplyIdlePolicy @ 0x14058EB9C
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404FF554 (PpmSetProfilePolicySetting.c)
 *     PpmCompareAndApplyPolicySettings @ 0x1406BA7C8 (PpmCompareAndApplyPolicySettings.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void PpmReapplyIdlePolicy()
{
  __int64 v0; // rdx
  signed __int64 v1; // rcx
  ULONG_PTR v2; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v4; // ax

  PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmApplyIdlePolicyChanges, 0LL, 0LL);
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v1 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v1 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v2 = PpmIdlePolicyLock,
        v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v1, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v0);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
