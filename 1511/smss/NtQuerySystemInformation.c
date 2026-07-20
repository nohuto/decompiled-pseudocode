/*
 * XREFs of NtQuerySystemInformation @ 0x14000C230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  return __imp_NtQuerySystemInformation(
           SystemInformationClass,
           SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
