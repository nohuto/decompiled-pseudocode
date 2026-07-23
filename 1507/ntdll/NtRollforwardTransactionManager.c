/*
 * XREFs of NtRollforwardTransactionManager @ 0x180094F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRollforwardTransactionManager(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  NTSTATUS result; // eax

  result = 358;
  __asm { syscall; Low latency system call }
  return result;
}
