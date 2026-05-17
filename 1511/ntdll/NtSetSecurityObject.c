/*
 * XREFs of NtSetSecurityObject @ 0x1800A8270
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x1800878F4 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800882F4 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 NtSetSecurityObject()
{
  __int64 result; // rax

  result = 398LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
