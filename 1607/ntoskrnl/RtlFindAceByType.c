/*
 * XREFs of RtlFindAceByType @ 0x140012620
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140012B90 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x14007C0DC (SepMandatorySubProcessToken.c)
 *     RtlIsUntrustedObject @ 0x1400FA600 (RtlIsUntrustedObject.c)
 *     SepGetScopedPolicySid @ 0x140219A24 (SepGetScopedPolicySid.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140238A9C (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlpGenerateInheritAcl @ 0x1404134A0 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     RtlpCopyAces @ 0x14041D660 (RtlpCopyAces.c)
 *     SeQueryMandatoryLabel @ 0x1404BC628 (SeQueryMandatoryLabel.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 *     SepSDContainsAttributeACE @ 0x140695848 (SepSDContainsAttributeACE.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r10
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
