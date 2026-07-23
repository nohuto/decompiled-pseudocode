/*
 * XREFs of NtFlushBuffersFile @ 0x1404AF194
 * Callers:
 *     <none>
 * Callees:
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 */

NTSTATUS __stdcall NtFlushBuffersFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock)
{
  return NtFlushBuffersFileEx(FileHandle, 0, 0LL, 0, IoStatusBlock);
}
