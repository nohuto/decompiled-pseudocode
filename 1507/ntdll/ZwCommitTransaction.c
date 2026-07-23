/*
 * XREFs of ZwCommitTransaction @ 0x180094230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCommitTransaction(HANDLE TransactionHandle, BOOLEAN Wait)
{
  NTSTATUS result; // eax

  result = 147;
  __asm { syscall; Low latency system call }
  return result;
}
