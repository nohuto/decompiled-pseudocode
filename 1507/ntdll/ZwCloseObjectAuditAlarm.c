/*
 * XREFs of ZwCloseObjectAuditAlarm @ 0x180093CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  NTSTATUS result; // eax

  result = 59;
  __asm { syscall; Low latency system call }
  return result;
}
