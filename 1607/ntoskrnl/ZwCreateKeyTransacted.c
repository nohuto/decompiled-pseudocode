/*
 * XREFs of ZwCreateKeyTransacted @ 0x14015B120
 * Callers:
 *     NtCreateKeyTransacted_Stub @ 0x1406E08A0 (NtCreateKeyTransacted_Stub.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
