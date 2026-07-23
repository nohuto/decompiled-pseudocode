/*
 * XREFs of NtGetCachedSigningLevel @ 0x180094710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  NTSTATUS result; // eax

  result = 225;
  __asm { syscall; Low latency system call }
  return result;
}
