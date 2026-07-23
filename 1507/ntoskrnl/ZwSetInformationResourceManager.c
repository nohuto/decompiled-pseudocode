/*
 * XREFs of ZwSetInformationResourceManager @ 0x140181F90
 * Callers:
 *     VerifierZwSetInformationResourceManager @ 0x14074261C (VerifierZwSetInformationResourceManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
