/*
 * XREFs of RmCoreRpcSrvDisconnectFromRmServer @ 0x1800407C0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 */

__int64 __fastcall RmCoreRpcSrvDisconnectFromRmServer(PVOID *a1)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivatorUnregister(*a1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *a1 = 0LL;
  return 0LL;
}
