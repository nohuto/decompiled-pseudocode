/*
 * XREFs of WmipAcquireSmbiosLockShared @ 0x1404AA68C
 * Callers:
 *     WmipGetSMBiosTableData @ 0x1404AA510 (WmipGetSMBiosTableData.c)
 *     WmipFindSMBiosStructure @ 0x14069D378 (WmipFindSMBiosStructure.c)
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
