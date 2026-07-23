/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x14017F750
 * Callers:
 *     VfZwCloseObjectAuditAlarm @ 0x14075545C (VfZwCloseObjectAuditAlarm.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
