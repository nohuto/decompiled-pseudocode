/*
 * XREFs of RtlInitializeSid @ 0x18000D5E0
 * Callers:
 *     RtlGetAppContainerParent @ 0x180003330 (RtlGetAppContainerParent.c)
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DA0 (WerpAllocateAndInitializeSid.c)
 *     RtlCreateVirtualAccountSid @ 0x180008FD0 (RtlCreateVirtualAccountSid.c)
 *     RtlCreateServiceSid @ 0x18000B8D0 (RtlCreateServiceSid.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18000C620 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlInitializeSidEx @ 0x18000D440 (RtlInitializeSidEx.c)
 *     RtlpOwnerAcesPresent @ 0x18000D498 (RtlpOwnerAcesPresent.c)
 *     RtlCapabilityCheck @ 0x18000DA00 (RtlCapabilityCheck.c)
 *     RtlDefaultNpAcl @ 0x18008B240 (RtlDefaultNpAcl.c)
 *     RtlpCompareKnownObjectAces @ 0x18008EA10 (RtlpCompareKnownObjectAces.c)
 *     RtlpCompareKnownAces @ 0x1800DFEE0 (RtlpCompareKnownAces.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E0030 (RtlpConvertAclToAutoInherit.c)
 *     RtlpValidLabelSubjectContext @ 0x1800E11E8 (RtlpValidLabelSubjectContext.c)
 *     _ResCreateSecurityDescriptor @ 0x180103E8C (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitializeSid(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount)
{
  if ( SubAuthorityCount > 0xFu )
    return -1073741811;
  *((_BYTE *)Sid + 1) = SubAuthorityCount;
  *(_BYTE *)Sid = 1;
  *(_SID_IDENTIFIER_AUTHORITY *)((char *)Sid + 2) = *IdentifierAuthority;
  return 0;
}
