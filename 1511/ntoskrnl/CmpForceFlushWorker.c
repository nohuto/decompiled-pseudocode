/*
 * XREFs of CmpForceFlushWorker @ 0x1405E3DF4
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpDoFlushAll @ 0x1401170FC (CmpDoFlushAll.c)
 */

__int64 CmpForceFlushWorker()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  _InterlockedExchange(&CmpForceFlushPending, 0);
  return result;
}
