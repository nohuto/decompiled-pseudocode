/*
 * XREFs of RtlCreateAcl @ 0x180060370
 * Callers:
 *     RtlCheckSandboxedToken @ 0x180002800 (RtlCheckSandboxedToken.c)
 *     RtlCheckTokenCapability @ 0x18005E0B0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x18005E3A0 (RtlCheckTokenMembershipEx.c)
 *     RtlpNewSecurityObject @ 0x18005E688 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18005FFB4 (RtlpInheritAcl2.c)
 *     RtlpCombineAcls @ 0x180061054 (RtlpCombineAcls.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180088194 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpComputeMergedAcl2 @ 0x18008BB2C (RtlpComputeMergedAcl2.c)
 *     RtlDefaultNpAcl @ 0x1800CC680 (RtlDefaultNpAcl.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 *     RtlpCreateServerAcl @ 0x1800D83C4 (RtlpCreateServerAcl.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
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
