/*
 * XREFs of KeAreApcsDisabled @ 0x140099410
 * Callers:
 *     PopEventCalloutDispatch @ 0x14011B894 (PopEventCalloutDispatch.c)
 *     IoRaiseHardError @ 0x1401BAE90 (IoRaiseHardError.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14020D474 (EtwpGetStackExtendedHeaderItem.c)
 *     PopPolicySystemIdle @ 0x140456A94 (PopPolicySystemIdle.c)
 *     PopPolicyWorkerNotify @ 0x140456CA4 (PopPolicyWorkerNotify.c)
 *     PopCallPowerSettingCallback @ 0x140456E2C (PopCallPowerSettingCallback.c)
 *     PopDispatchNotificationsToList @ 0x1404B4D24 (PopDispatchNotificationsToList.c)
 *     PopDispatchFullWake @ 0x1404F5684 (PopDispatchFullWake.c)
 *     PopPolicyWorkerActionPromote @ 0x1404F56DC (PopPolicyWorkerActionPromote.c)
 *     PopPolicyWorkerAction @ 0x1404F7554 (PopPolicyWorkerAction.c)
 *     PopDispatchCallback @ 0x140549748 (PopDispatchCallback.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 *     PopDispatchAcDcCallback @ 0x14063B9E8 (PopDispatchAcDcCallback.c)
 *     PopDispatchShutdownEvent @ 0x14063BA20 (PopDispatchShutdownEvent.c)
 *     VerifierKeAreApcsDisabled @ 0x1406C0964 (VerifierKeAreApcsDisabled.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
