/*
 * XREFs of ZwPrivilegeCheck @ 0x1800A8910
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x180004234 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D4A80 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E1128 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

__int64 ZwPrivilegeCheck()
{
  __int64 result; // rax

  result = 296LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
