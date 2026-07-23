/*
 * XREFs of NtUnmapViewOfSection @ 0x1404B1F1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx(ProcessHandle, BaseAddress, 0);
}
