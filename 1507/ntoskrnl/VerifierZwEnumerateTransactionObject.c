/*
 * XREFs of VerifierZwEnumerateTransactionObject @ 0x14074258C
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
