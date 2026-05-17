/*
 * XREFs of NtSetSecurityObject @ 0x1800A9690
 * Callers:
 *     RtlpSysVolTakeOwnership @ 0x18008B698 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008C544 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     <none>
 */

__int64 NtSetSecurityObject()
{
  __int64 result; // rax

  result = 404LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
