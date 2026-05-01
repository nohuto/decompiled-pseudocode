/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18003B320
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivatorUnregister @ 0x18003B5B8 (RmpActivatorUnregister.c)
 */

NTSTATUS __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(PVOID P)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivatorUnregister(P);
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
