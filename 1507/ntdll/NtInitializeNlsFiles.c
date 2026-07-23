/*
 * XREFs of NtInitializeNlsFiles @ 0x1800947F0
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x180048E90 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax

  result = 239;
  __asm { syscall; Low latency system call }
  return result;
}
