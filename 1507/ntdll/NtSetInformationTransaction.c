/*
 * XREFs of NtSetInformationTransaction @ 0x180095100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength)
{
  NTSTATUS result; // eax

  result = 384;
  __asm { syscall; Low latency system call }
  return result;
}
