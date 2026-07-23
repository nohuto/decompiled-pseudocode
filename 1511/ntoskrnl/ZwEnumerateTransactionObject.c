/*
 * XREFs of ZwEnumerateTransactionObject @ 0x140152080
 * Callers:
 *     VerifierZwEnumerateTransactionObject @ 0x1406C0D4C (VerifierZwEnumerateTransactionObject.c)
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
