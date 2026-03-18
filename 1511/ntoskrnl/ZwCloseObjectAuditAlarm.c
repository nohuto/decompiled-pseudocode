/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x140150D80
 * Callers:
 *     VfZwCloseObjectAuditAlarm @ 0x1406D1894 (VfZwCloseObjectAuditAlarm.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName, HandleId, GenerateOnClose);
}
