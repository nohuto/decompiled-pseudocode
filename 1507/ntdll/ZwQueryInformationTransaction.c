/*
 * XREFs of ZwQueryInformationTransaction @ 0x180094C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationTransaction(
        HANDLE TransactionHandle,
        TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
        PVOID TransactionInformation,
        ULONG TransactionInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 308;
  __asm { syscall; Low latency system call }
  return result;
}
