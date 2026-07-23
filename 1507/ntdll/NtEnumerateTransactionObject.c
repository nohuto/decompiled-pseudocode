/*
 * XREFs of NtEnumerateTransactionObject @ 0x180094620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 210;
  __asm { syscall; Low latency system call }
  return result;
}
