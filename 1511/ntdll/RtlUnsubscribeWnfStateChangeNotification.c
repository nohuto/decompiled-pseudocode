/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180004850
 * Callers:
 *     RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180004620 (RtlUnsubscribeWnfNotificationWithCompletionCallback.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180051620 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x180004870 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
}
