/*
 * XREFs of KeAreApcsDisabled @ 0x140009B90
 * Callers:
 *     PopEventCalloutDispatch @ 0x140131C64 (PopEventCalloutDispatch.c)
 *     IoRaiseHardError @ 0x1401C8CDC (IoRaiseHardError.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x140224F60 (EtwpGetStackExtendedHeaderItem.c)
 *     PopPolicyWorkerNotify @ 0x1403F3500 (PopPolicyWorkerNotify.c)
 *     PopCallPowerSettingCallback @ 0x1403F36FC (PopCallPowerSettingCallback.c)
 *     PopPolicySystemIdle @ 0x1403F5874 (PopPolicySystemIdle.c)
 *     PopDispatchNotificationsToList @ 0x14052AA70 (PopDispatchNotificationsToList.c)
 *     PopPolicyWorkerAction @ 0x140530608 (PopPolicyWorkerAction.c)
 *     PopDispatchFullWake @ 0x140534800 (PopDispatchFullWake.c)
 *     PopPolicyWorkerActionPromote @ 0x140534858 (PopPolicyWorkerActionPromote.c)
 *     PopDispatchCallback @ 0x14057DCF0 (PopDispatchCallback.c)
 *     PopCoalescingNotify @ 0x14066E074 (PopCoalescingNotify.c)
 *     PopDispatchAcDcCallback @ 0x140672D74 (PopDispatchAcDcCallback.c)
 *     PopDispatchShutdownEvent @ 0x140672DAC (PopDispatchShutdownEvent.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
