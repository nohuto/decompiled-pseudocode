/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x14021A48C
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14021A318 (SepExamineGlobalSaclEx.c)
 *     SeExamineGlobalSacl @ 0x14069546C (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x14069556C (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140695604 (SepRmGlobalSaclFind.c)
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
