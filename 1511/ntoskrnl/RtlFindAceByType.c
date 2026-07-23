/*
 * XREFs of RtlFindAceByType @ 0x14009DDA0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x1400E3F14 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x140200710 (SepGetScopedPolicySid.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14021E5A0 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 *     RtlpCopyAces @ 0x140471900 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x1404722A0 (RtlpGenerateInheritAcl.c)
 *     SeQueryObjectMandatoryLabel @ 0x14064DC70 (SeQueryObjectMandatoryLabel.c)
 *     SepSDContainsAttributeACE @ 0x140656F68 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r9
  unsigned int v5; // r11d

  if ( !Acl )
    return 0LL;
  v4 = Acl + 1;
  v5 = 0;
  if ( !Acl->AceCount )
    return 0LL;
  while ( !Index )
  {
    if ( v4->AclRevision == AceType )
      return v4;
LABEL_9:
    ++v5;
    v4 = (PACL)((char *)v4 + v4->AclSize);
    if ( v5 >= Acl->AceCount )
      return 0LL;
  }
  if ( v5 < *Index || v4->AclRevision != AceType )
    goto LABEL_9;
  *Index = v5;
  return v4;
}
