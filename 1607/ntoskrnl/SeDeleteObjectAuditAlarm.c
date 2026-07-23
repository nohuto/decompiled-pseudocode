/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x14069149C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
