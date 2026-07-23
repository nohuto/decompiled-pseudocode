/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180065A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(
        PWNF_USER_CALLBACK Callback,
        __int64 a2,
        __int64 a3)
{
  if ( !Callback || !a2 )
    return -1073741811;
  if ( *((_QWORD *)Callback + 13) )
    return -1073740008;
  *((_QWORD *)Callback + 13) = a2;
  *((_QWORD *)Callback + 14) = a3;
  return RtlUnsubscribeWnfStateChangeNotification(Callback);
}
