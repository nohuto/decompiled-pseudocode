/*
 * XREFs of VerifierZwUnmapViewOfSection @ 0x1406C0E0C
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
