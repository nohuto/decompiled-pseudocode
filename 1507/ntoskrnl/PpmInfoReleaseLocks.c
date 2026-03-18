/*
 * XREFs of PpmInfoReleaseLocks @ 0x1404FE334
 * Callers:
 *     PpmSetProfilePolicySetting @ 0x1404FF554 (PpmSetProfilePolicySetting.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall PpmInfoReleaseLocks(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
  {
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    if ( qword_14032E288 )
      qword_14032E288 = 0LL;
    _m_prefetchw(&PpmIdlePolicyLock);
    v2 = PpmIdlePolicyLock - 16;
    if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v2 = 0LL;
    if ( (PpmIdlePolicyLock & 2) != 0
      || (v3 = PpmIdlePolicyLock,
          v3 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v2, PpmIdlePolicyLock)) )
    {
      ExfReleasePushLock(&PpmIdlePolicyLock, a2);
    }
    KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
    CurrentThread = KeGetCurrentThread();
    v5 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v5;
    if ( !v5
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
