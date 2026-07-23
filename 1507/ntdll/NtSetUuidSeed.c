/*
 * XREFs of NtSetUuidSeed @ 0x180095250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetUuidSeed(PCHAR Seed)
{
  NTSTATUS result; // eax

  result = 405;
  __asm { syscall; Low latency system call }
  return result;
}
