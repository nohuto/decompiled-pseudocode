/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x1404BE95C
 * Callers:
 *     WmipGetSMBiosTableData @ 0x1404BE7E0 (WmipGetSMBiosTableData.c)
 *     WmipFindSMBiosStructure @ 0x14069D294 (WmipFindSMBiosStructure.c)
 * Callees:
 *     <none>
 */

BOOLEAN WmipAcquireSmbiosLockShared()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
}
