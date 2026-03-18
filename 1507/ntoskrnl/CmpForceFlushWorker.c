/*
 * XREFs of CmpForceFlushWorker @ 0x14065AEE4
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     CmpDoFlushAll @ 0x14014C088 (CmpDoFlushAll.c)
 */

void CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v1; // rtt
  struct _KTHREAD *v2; // rcx
  __int16 v3; // ax
  unsigned __int64 v4; // rtt
  __int16 v5; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v1 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v1 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v2 = KeGetCurrentThread();
    v3 = v2->KernelApcDisable + 1;
    v2->KernelApcDisable = v3;
    if ( v3 )
      goto LABEL_11;
    goto LABEL_8;
  }
  CmpDoFlushAll();
  _m_prefetchw(&CmpShutdownRundown);
  v4 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v4 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v2 = KeGetCurrentThread();
  v5 = v2->KernelApcDisable + 1;
  v2->KernelApcDisable = v5;
  if ( !v5 )
  {
LABEL_8:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v2->ApcState.ApcListHead[0].Flink != &v2->152 && !v2->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
  }
LABEL_11:
  _InterlockedExchange(&CmpForceFlushPending, 0);
}
