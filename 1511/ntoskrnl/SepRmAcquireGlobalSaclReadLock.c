/*
 * XREFs of SepRmAcquireGlobalSaclReadLock @ 0x140200B98
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140200A24 (SepExamineGlobalSaclEx.c)
 *     SeExamineGlobalSacl @ 0x140655D28 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140655E28 (SeMaximumAuditMaskFromGlobalSacl.c)
 *     SepRmGlobalSaclFind @ 0x140655EC0 (SepRmGlobalSaclFind.c)
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
