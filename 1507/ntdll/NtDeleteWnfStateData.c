/*
 * XREFs of NtDeleteWnfStateData @ 0x180094590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  NTSTATUS result; // eax

  result = 201;
  __asm { syscall; Low latency system call }
  return result;
}
