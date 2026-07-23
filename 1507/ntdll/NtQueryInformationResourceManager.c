/*
 * XREFs of NtQueryInformationResourceManager @ 0x180094C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 307;
  __asm { syscall; Low latency system call }
  return result;
}
