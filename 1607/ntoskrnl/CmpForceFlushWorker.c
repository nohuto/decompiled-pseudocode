/*
 * XREFs of CmpForceFlushWorker @ 0x1406036F8
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpDoFlushAll @ 0x140125F38 (CmpDoFlushAll.c)
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
