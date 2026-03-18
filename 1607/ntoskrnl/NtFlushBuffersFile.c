/*
 * XREFs of NtFlushBuffersFile @ 0x1404C9414
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __stdcall NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx((_DWORD)FileHandle, 0, 0, 0, (__int64)IoStatusBlock);
}
