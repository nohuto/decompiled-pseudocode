/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x18000B0E0
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18000A8BC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x18000AEE0 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18000B080 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return RtlpRemoveUserSubFromNameSub(*((PVOID *)Callback + 3), Callback);
}
