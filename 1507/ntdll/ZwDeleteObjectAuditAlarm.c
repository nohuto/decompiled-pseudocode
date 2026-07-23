/*
 * XREFs of ZwDeleteObjectAuditAlarm @ 0x180094560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDeleteObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  NTSTATUS result; // eax

  result = 198;
  __asm { syscall; Low latency system call }
  return result;
}
