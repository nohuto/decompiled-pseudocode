/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180004850
 * Callers:
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180004620 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180051620 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x180004870 (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
}
