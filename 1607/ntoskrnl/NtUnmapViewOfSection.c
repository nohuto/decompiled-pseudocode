/*
 * XREFs of NtUnmapViewOfSection @ 0x1404D8178
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return NtUnmapViewOfSectionEx((ULONG_PTR)ProcessHandle, (unsigned __int64)BaseAddress, 0);
}
