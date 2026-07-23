/*
 * XREFs of ZwRollbackTransaction @ 0x180094F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRollbackTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  NTSTATUS result; // eax

  result = 357;
  __asm { syscall; Low latency system call }
  return result;
}
