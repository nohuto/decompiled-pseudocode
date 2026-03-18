/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x140007E58
 * Callers:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1401C4FA8 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x1403F0BD4 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x14004F260 (KeAreAllApcsDisabled.c)
 *     KeIsAttachedProcess @ 0x1400E7E80 (KeIsAttachedProcess.c)
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
