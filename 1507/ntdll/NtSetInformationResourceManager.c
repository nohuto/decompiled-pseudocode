/*
 * XREFs of NtSetInformationResourceManager @ 0x1800950D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength)
{
  NTSTATUS result; // eax

  result = 381;
  __asm { syscall; Low latency system call }
  return result;
}
