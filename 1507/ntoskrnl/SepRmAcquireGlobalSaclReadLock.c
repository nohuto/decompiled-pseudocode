/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x14015B234
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14015B154 (SepExamineGlobalSaclEx.c)
 *     SepRmGlobalSaclFind @ 0x140587774 (SepRmGlobalSaclFind.c)
 *     SeExamineGlobalSacl @ 0x1406D7C34 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406D7D6C (SeMaximumAuditMaskFromGlobalSacl.c)
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
