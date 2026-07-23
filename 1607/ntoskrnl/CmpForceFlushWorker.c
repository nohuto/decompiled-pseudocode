/*
 * XREFs of CmpForceFlushWorker @ 0x1406037AC
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     CmpDoFlushAll @ 0x1401264A8 (CmpDoFlushAll.c)
 */

__int64 CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    ExReleaseRundownProtection(&CmpShutdownRundown);
  }
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return result;
}
