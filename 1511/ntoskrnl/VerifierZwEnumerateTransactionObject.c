/*
 * XREFs of VerifierZwEnumerateTransactionObject @ 0x1406C0D4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  return pXdvZwEnumerateTransactionObject(RootObjectHandle, QueryType, ObjectCursor, ObjectCursorLength, ReturnLength);
}
