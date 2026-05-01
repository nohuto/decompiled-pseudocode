/*
 * XREFs of ?RmpEmptyWorkerCouldBeRunning@@YAKPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180039F1C
 * Callers:
 *     RmpEnforcementOptimizeHost @ 0x18000673C (RmpEnforcementOptimizeHost.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpEmptyWorkerCouldBeRunning(struct _RM_EMPTY_WORKER_CONTEXT *a1)
{
  return *((_BYTE *)a1 + 24) != 0;
}
