/*
 * XREFs of ZwCreateTransaction @ 0x1401806F0
 * Callers:
 *     VfZwCreateTransaction @ 0x140755AB0 (VfZwCreateTransaction.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle,
        ULONG CreateOptions,
        ULONG IsolationLevel,
        ULONG IsolationFlags,
        PLARGE_INTEGER Timeout,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionHandle);
}
