/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x18000B0E0
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18000A8BC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x18000AEE0 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x18000B080 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
}
