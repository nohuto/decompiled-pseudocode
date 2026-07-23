/*
 * XREFs of ZwSetInformationResourceManager @ 0x140153620
 * Callers:
 *     VerifierZwSetInformationResourceManager @ 0x1406C0DDC (VerifierZwSetInformationResourceManager.c)
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
