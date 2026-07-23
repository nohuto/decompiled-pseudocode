/*
 * XREFs of NtPropagationFailed @ 0x180094B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtPropagationFailed(HANDLE ResourceManagerHandle, ULONG RequestCookie, NTSTATUS PropStatus)
{
  NTSTATUS result; // eax

  result = 294;
  __asm { syscall; Low latency system call }
  return result;
}
