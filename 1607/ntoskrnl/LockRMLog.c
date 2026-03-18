/*
 * XREFs of LockRMLog @ 0x1404A1D3C
 * Callers:
 *     CmpTransWriteLog @ 0x1404A1ACC (CmpTransWriteLog.c)
 *     CmpStopRMLog @ 0x1404D9AD4 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1404DA5F0 (CmpAccountForLogReservation.c)
 *     CmpStartRMLog @ 0x1404DAAE0 (CmpStartRMLog.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall LockRMLog(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
}
