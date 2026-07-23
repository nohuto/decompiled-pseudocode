/*
 * XREFs of NtUnmapViewOfSection @ 0x140540D0C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx(ProcessHandle, BaseAddress, 0);
}
