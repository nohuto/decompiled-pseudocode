/*
 * XREFs of RtlCreateAcl @ 0x18004CBD0
 * Callers:
 *     RtlpComputeMergedAcl2 @ 0x1800478E8 (RtlpComputeMergedAcl2.c)
 *     RtlCheckTokenCapability @ 0x18004AAA0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18004AF00 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18004C810 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x18004DF20 (RtlpCombineAcls.c)
 *     RtlDefaultNpAcl @ 0x180050BE0 (RtlDefaultNpAcl.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18007F924 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlCreateAndSetSD @ 0x180080030 (RtlCreateAndSetSD.c)
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800CF04C (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800CFDE8 (RtlpCreateServerAcl.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F9C9C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAcl(PACL Acl, ULONG AclLength, ULONG AclRevision)
{
  NTSTATUS result; // eax

  if ( AclLength < 8 )
    return -1073741789;
  if ( AclRevision - 2 > 2 || AclLength > 0xFFFC )
    return -1073741811;
  result = 0;
  Acl->AclRevision = AclRevision;
  Acl->Sbz1 = 0;
  Acl->AclSize = AclLength & 0xFFFC;
  *(_DWORD *)&Acl->AceCount = 0;
  return result;
}
