/*
 * XREFs of NtDeleteKey @ 0x1800A7D10
 * Callers:
 *     RXactpCommit @ 0x180083794 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008D170 (RtlInitializeRXact.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E6690 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E77B0 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x1800F72E0 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 200;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
