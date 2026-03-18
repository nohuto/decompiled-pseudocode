/*
 * XREFs of ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C013E2A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C013E8E0 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrResetFromTimeoutAsync(struct _LIST_ENTRY *BugCheckParameter1)
{
  struct _WORK_QUEUE_ITEM *v2; // rax

  v2 = (struct _WORK_QUEUE_ITEM *)operator new[](0x30uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( !v2 )
    TdrBugcheckOnTimeout((ULONG_PTR)BugCheckParameter1);
  v2[1].List.Flink = BugCheckParameter1;
  v2->List.Flink = 0LL;
  v2->WorkerRoutine = (PWORKER_THREAD_ROUTINE)TdrResetFromTimeoutWorkItem;
  v2->Parameter = v2;
  ExQueueWorkItem(v2, CriticalWorkQueue);
}
