/*
 * XREFs of NtRenameTransactionManager @ 0x180094E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  NTSTATUS result; // eax

  result = 345;
  __asm { syscall; Low latency system call }
  return result;
}
