/*
 * XREFs of RmCoreRpcSrvDisconnectFromRmServer @ 0x18002D620
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18002DF30 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

__int64 __fastcall RmCoreRpcSrvDisconnectFromRmServer(struct _RM_ACTIVATOR **a1)
{
  struct _RM_ACTIVATOR *v2; // rbx

  RtlEnterCriticalSection(&RmpGlobalLock);
  v2 = *a1;
  RmpActivatorCleanup(*a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *a1 = 0LL;
  return 0LL;
}
