/*
 * XREFs of RtlFindAceByType @ 0x18007A430
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpCopyAces @ 0x18003D350 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x18003F9C0 (RtlpGenerateInheritAcl.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 *     RtlIsUntrustedObject @ 0x1800DF880 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v4; // r9
  unsigned int v5; // r10d

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
