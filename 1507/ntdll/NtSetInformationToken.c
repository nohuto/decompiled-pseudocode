/*
 * XREFs of NtSetInformationToken @ 0x1800950F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationToken(
        HANDLE TokenHandle,
        ULONG TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength)
{
  NTSTATUS result; // eax

  result = 383;
  __asm { syscall; Low latency system call }
  return result;
}
