/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180004620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 104) )
    return 3221227288LL;
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 112) = a3;
  return RtlUnsubscribeWnfStateChangeNotification();
}
