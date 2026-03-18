/*
 * XREFs of PnpIsSafeToExamineUserModeTeb @ 0x1400FF608
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     IopInitActivityIdIrp @ 0x1401B73A0 (IopInitActivityIdIrp.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400701C0 (KeIsAttachedProcess.c)
 *     KeAreAllApcsDisabled @ 0x140098520 (KeAreAllApcsDisabled.c)
 */

char PnpIsSafeToExamineUserModeTeb()
{
  struct _KTHREAD *CurrentThread; // rdi
  char v1; // bl

  if ( KeIsAttachedProcess() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v1 = 1;
  if ( CurrentThread->PreviousMode != 1 || KeAreAllApcsDisabled() || BYTE2(CurrentThread[1].Teb) > 1u )
    return 0;
  return v1;
}
