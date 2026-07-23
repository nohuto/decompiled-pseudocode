/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x14021A2B8
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14021A144 (SepExamineGlobalSaclEx.c)
 *     SeExamineGlobalSacl @ 0x140695550 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140695650 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x1406956E8 (SepRmGlobalSaclFind.c)
 * Callees:
 *     <none>
 */

BOOLEAN SepRmAcquireGlobalSaclReadLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
}
