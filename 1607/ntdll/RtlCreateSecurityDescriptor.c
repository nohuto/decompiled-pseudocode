/*
 * XREFs of RtlCreateSecurityDescriptor @ 0x180010EC0
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDE0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011030 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlpSysVolTakeOwnership @ 0x18008B688 (RtlpSysVolTakeOwnership.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008C3D4 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x18008C7F0 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

NTSTATUS __cdecl RtlCreateSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ULONG Revision)
{
  NTSTATUS result; // eax

  if ( Revision != 1 )
    return -1073741736;
  memset(SecurityDescriptor, 0, 0x28uLL);
  result = 0;
  *(_BYTE *)SecurityDescriptor = 1;
  return result;
}
