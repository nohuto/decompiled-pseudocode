/*
 * XREFs of NtDeleteKey @ 0x1800A7D10
 * Callers:
 *     RXactpCommit @ 0x1800837A4 (RXactpCommit.c)
 *     RtlInitializeRXact @ 0x18008D180 (RtlInitializeRXact.c)
 *     RtlpCleanupRegistryKeys @ 0x1800E65D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800E76F0 (RtlpSetInstallLanguage.c)
 *     RtlpNtMakeTemporaryKey @ 0x1800F72E0 (RtlpNtMakeTemporaryKey.c)
 * Callees:
 *     <none>
 */

__int64 NtDeleteKey()
{
  __int64 result; // rax

  result = 200LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
