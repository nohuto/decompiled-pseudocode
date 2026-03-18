/*
 * XREFs of LockRMLog @ 0x1403D6618
 * Callers:
 *     CmpTransWriteLog @ 0x1403D63A8 (CmpTransWriteLog.c)
 *     CmpStopRMLog @ 0x14049B328 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     CmpAccountForLogReservation @ 0x1404BA95C (CmpAccountForLogReservation.c)
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
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
