/*
 * XREFs of ZwEnumerateTransactionObject @ 0x140180A30
 * Callers:
 *     VerifierZwEnumerateTransactionObject @ 0x14074258C (VerifierZwEnumerateTransactionObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateTransactionObject(
        HANDLE RootObjectHandle,
        KTMOBJECT_TYPE QueryType,
        PKTMOBJECT_CURSOR ObjectCursor,
        ULONG ObjectCursorLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(RootObjectHandle);
}
