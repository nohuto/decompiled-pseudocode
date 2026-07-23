/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140086AA0
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1401C4E8C (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14004EDE0 (KeAreAllApcsDisabled.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  struct _KTHREAD *CurrentThread; // rdi
  char v1; // bl

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v1 = 1;
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE6(CurrentThread[1].Queue) > 1u )
    return 0;
  return v1;
}
