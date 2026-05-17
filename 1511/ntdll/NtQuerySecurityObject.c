/*
 * XREFs of NtQuerySecurityObject @ 0x1800A7950
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800C8110 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlIsUntrustedObject @ 0x1800D6E90 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

__int64 NtQuerySecurityObject()
{
  __int64 result; // rax

  result = 325LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
