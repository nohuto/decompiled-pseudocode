/*
 * XREFs of NtCreatePagingFile @ 0x180094390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreatePagingFile(
        PUNICODE_STRING PageFileName,
        PLARGE_INTEGER MinimumSize,
        PLARGE_INTEGER MaximumSize,
        ULONG Priority)
{
  NTSTATUS result; // eax

  result = 169;
  __asm { syscall; Low latency system call }
  return result;
}
