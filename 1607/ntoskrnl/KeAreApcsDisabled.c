/*
 * XREFs of KeAreApcsDisabled @ 0x140009710
 * Callers:
 *     PopEventCalloutDispatch @ 0x1401321D4 (PopEventCalloutDispatch.c)
 *     IoRaiseHardError @ 0x1401C8B7C (IoRaiseHardError.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224D8C (EtwpGetStackExtendedHeaderItem.c)
 *     PopPolicyWorkerNotify @ 0x1403F23C4 (PopPolicyWorkerNotify.c)
 *     PopCallPowerSettingCallback @ 0x1403F25C0 (PopCallPowerSettingCallback.c)
 *     PopPolicySystemIdle @ 0x1403F4738 (PopPolicySystemIdle.c)
 *     PopDispatchNotificationsToList @ 0x14052B6C0 (PopDispatchNotificationsToList.c)
 *     PopPolicyWorkerAction @ 0x140530B48 (PopPolicyWorkerAction.c)
 *     PopDispatchFullWake @ 0x140534D40 (PopDispatchFullWake.c)
 *     PopPolicyWorkerActionPromote @ 0x140534D98 (PopPolicyWorkerActionPromote.c)
 *     PopDispatchCallback @ 0x14057E19C (PopDispatchCallback.c)
 *     PopCoalescingNotify @ 0x14066E158 (PopCoalescingNotify.c)
 *     PopDispatchAcDcCallback @ 0x140672E58 (PopDispatchAcDcCallback.c)
 *     PopDispatchShutdownEvent @ 0x140672E90 (PopDispatchShutdownEvent.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
