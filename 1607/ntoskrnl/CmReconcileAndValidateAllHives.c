/*
 * XREFs of CmReconcileAndValidateAllHives @ 0x140603084
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     CmpDoFlushAll @ 0x140125F38 (CmpDoFlushAll.c)
 */

__int64 CmReconcileAndValidateAllHives()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = 0;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    CmpDoFlushAll();
    ExReleaseRundownProtection(&CmpShutdownRundown);
  }
  else
  {
    v4 = -1073741431;
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v1, v2, v3);
  return v4;
}
