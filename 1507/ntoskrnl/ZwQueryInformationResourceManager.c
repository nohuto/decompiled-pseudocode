/*
 * XREFs of ZwQueryInformationResourceManager @ 0x140181650
 * Callers:
 *     VerifierZwQueryInformationResourceManager @ 0x1407425DC (VerifierZwQueryInformationResourceManager.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(
           ResourceManagerHandle,
           *(_QWORD *)&ResourceManagerInformationClass,
           ResourceManagerInformation);
}
