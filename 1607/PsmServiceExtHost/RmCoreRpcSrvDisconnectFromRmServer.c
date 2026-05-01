/*
 * XREFs of RmCoreRpcSrvDisconnectFromRmServer @ 0x18002E5C0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 */

__int64 __fastcall RmCoreRpcSrvDisconnectFromRmServer(_QWORD *a1)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivatorUnregister(*a1);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  *a1 = 0LL;
  return 0LL;
}
