/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x140250868
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 */

void __fastcall SepAuditFailedRaisedIrql(__int64 a1)
{
  if ( SepCrashOnAuditFail )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      SepAdtCrashOnAuditFailWorkItem.List.Flink = 0LL;
      SepAdtCrashOnAuditFailWorkItem.WorkerRoutine = (void (__fastcall *)(void *))SepAuditFailed;
      SepAdtCrashOnAuditFailWorkItem.Parameter = (void *)(int)a1;
      ExQueueWorkItem(&SepAdtCrashOnAuditFailWorkItem, HyperCriticalWorkQueue);
    }
    else
    {
      SepAuditFailed(a1);
    }
  }
}
