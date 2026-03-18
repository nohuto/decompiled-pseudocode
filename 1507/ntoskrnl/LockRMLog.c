/*
 * XREFs of LockRMLog @ 0x1404F2704
 * Callers:
 *     CmpStopRMLog @ 0x1404EF168 (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x1404F1D78 (CmpAccountForLogReservation.c)
 *     CmpTransWriteLog @ 0x1404F2470 (CmpTransWriteLog.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
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
