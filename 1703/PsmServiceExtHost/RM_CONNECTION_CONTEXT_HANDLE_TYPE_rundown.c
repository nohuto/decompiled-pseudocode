/*
 * XREFs of RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18002D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z @ 0x18002DF30 (-RmpActivatorCleanup@@YAXPEAU_RM_ACTIVATOR@@@Z.c)
 */

NTSTATUS __fastcall RM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(struct _RM_ACTIVATOR *a1)
{
  RtlEnterCriticalSection(&RmpGlobalLock);
  RmpActivatorCleanup(a1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  return RtlLeaveCriticalSection(&RmpGlobalLock);
}
