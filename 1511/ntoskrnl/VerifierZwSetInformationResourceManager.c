/*
 * XREFs of VerifierZwSetInformationResourceManager @ 0x1406C0DDC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwSetInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength)
{
  return pXdvZwSetInformationResourceManager(
           ResourceManagerHandle,
           ResourceManagerInformationClass,
           ResourceManagerInformation,
           ResourceManagerInformationLength);
}
