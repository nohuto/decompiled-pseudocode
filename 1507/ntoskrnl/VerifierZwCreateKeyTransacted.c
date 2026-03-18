/*
 * XREFs of VerifierZwCreateKeyTransacted @ 0x140742574
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  return pXdvZwCreateKeyTransacted(
           KeyHandle,
           DesiredAccess,
           ObjectAttributes,
           TitleIndex,
           Class,
           CreateOptions,
           TransactionHandle,
           Disposition);
}
