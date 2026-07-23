/*
 * XREFs of ZwCreateKeyTransacted @ 0x140151AA0
 * Callers:
 *     NtCreateKeyTransacted_Stub @ 0x14069A5F4 (NtCreateKeyTransacted_Stub.c)
 *     VerifierZwCreateKeyTransacted @ 0x1406C0D34 (VerifierZwCreateKeyTransacted.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
