/*
 * XREFs of VerifierZwUnmapViewOfSection @ 0x14074264C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  return pXdvZwUnmapViewOfSection(ProcessHandle, BaseAddress);
}
