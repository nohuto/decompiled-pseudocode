/*
 * XREFs of RmCoreRpcSrvUnregisterActivityHostCallbacks @ 0x1800022E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RmCoreRpcSrvUnregisterActivityHostCallbacks(struct _RM_ACTIVATOR *a1, unsigned __int64 a2)
{
  return RmSrvHostNotificationUnsubscribe(a1, a2);
}
