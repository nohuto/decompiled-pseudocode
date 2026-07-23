/*
 * XREFs of LockRMLog @ 0x14051A148
 * Callers:
 *     CmpStopRMLog @ 0x1404BD0D8 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1404BDBF4 (CmpAccountForLogReservation.c)
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 *     CmpTransWriteLog @ 0x140519ED8 (CmpTransWriteLog.c)
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
