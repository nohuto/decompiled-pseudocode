/*
 * XREFs of VerifierZwQueryInformationResourceManager @ 0x1407425DC
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
