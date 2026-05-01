/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18002E4F0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivatorUnregister @ 0x18002E718 (RmpActivatorUnregister.c)
 */

NTSTATUS __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(__int64 a1)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivatorUnregister(a1);
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
