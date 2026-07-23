/*
 * XREFs of NtEnumerateBootEntries @ 0x1800945F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  NTSTATUS result; // eax

  result = 207;
  __asm { syscall; Low latency system call }
  return result;
}
