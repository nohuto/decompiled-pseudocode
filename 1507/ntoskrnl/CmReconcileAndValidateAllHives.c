/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x14065A418
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CmpDoFlushAll @ 0x14014C088 (CmpDoFlushAll.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rtt
  struct _KTHREAD *v2; // rcx
  __int16 v3; // ax
  unsigned __int64 v5; // rtt
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v1 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    _m_prefetchw(&CmpShutdownRundown);
    v5 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v5 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&CmpShutdownRundown,
                 (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                 CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v6 = KeGetCurrentThread();
    v7 = v6->KernelApcDisable + 1;
    v6->KernelApcDisable = v7;
    if ( !v7
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
      && !v6->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
  else
  {
    v2 = KeGetCurrentThread();
    v3 = v2->KernelApcDisable + 1;
    v2->KernelApcDisable = v3;
    if ( !v3
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v2->ApcState.ApcListHead[0].Flink != &v2->152
      && !v2->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225865LL;
  }
}
