/*
 * XREFs of NtFreezeRegistry @ 0x1800946F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtFreezeRegistry(ULONG TimeOutInSeconds)
{
  NTSTATUS result; // eax

  result = 223;
  __asm { syscall; Low latency system call }
  return result;
}
