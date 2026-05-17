/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180065AC0
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002943C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180065A30 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180065A60 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x180065AE0 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
}
