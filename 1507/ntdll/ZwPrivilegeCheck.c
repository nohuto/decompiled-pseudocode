/*
 * XREFs of ZwPrivilegeCheck @ 0x180094B20
 * Callers:
 *     RtlpValidOwnerSubjectContext @ 0x18004A4F8 (RtlpValidOwnerSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800C30F0 (RtlNewSecurityGrantedAccess.c)
 *     RtlpValidLabelSubjectContext @ 0x1800D0204 (RtlpValidLabelSubjectContext.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  NTSTATUS result; // eax

  result = 290;
  __asm { syscall; Low latency system call }
  return result;
}
