/*
 * XREFs of VerifierZwQueryInformationResourceManager @ 0x1406C0D9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  return pXdvZwQueryInformationResourceManager(
           ResourceManagerHandle,
           ResourceManagerInformationClass,
           ResourceManagerInformation,
           ResourceManagerInformationLength,
           ReturnLength);
}
