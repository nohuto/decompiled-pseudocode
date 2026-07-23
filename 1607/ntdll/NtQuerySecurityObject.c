/*
 * XREFs of NtQuerySecurityObject @ 0x1800A8D10
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C534 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x1800DF880 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  NTSTATUS result; // eax

  result = 328;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
