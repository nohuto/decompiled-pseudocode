/*
 * XREFs of NtTranslateFilePath @ 0x180095370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtTranslateFilePath(
        PFILE_PATH InputFilePath,
        ULONG OutputType,
        PFILE_PATH OutputFilePath,
        PULONG OutputFilePathLength)
{
  NTSTATUS result; // eax

  result = 423;
  __asm { syscall; Low latency system call }
  return result;
}
