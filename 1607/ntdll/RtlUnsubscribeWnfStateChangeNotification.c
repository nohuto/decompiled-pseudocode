/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180065AB0
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002942C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180065A20 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180065A50 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AD0 (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
}
