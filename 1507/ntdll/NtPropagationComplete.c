/*
 * XREFs of NtPropagationComplete @ 0x180094B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPropagationComplete(
        HANDLE ResourceManagerHandle,
        ULONG RequestCookie,
        ULONG BufferLength,
        PVOID Buffer)
{
  NTSTATUS result; // eax

  result = 293;
  __asm { syscall; Low latency system call }
  return result;
}
