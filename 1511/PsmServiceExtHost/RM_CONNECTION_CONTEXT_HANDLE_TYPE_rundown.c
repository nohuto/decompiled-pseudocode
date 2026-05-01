/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x1800406F0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivatorUnregister @ 0x180040988 (RmpActivatorUnregister.c)
 */

NTSTATUS __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(PVOID P)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivatorUnregister(P);
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
